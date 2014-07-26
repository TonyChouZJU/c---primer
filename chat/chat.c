/**************************************************************************/
//������������LINUX FIFO�����ܵ�����ʵ��˫�������C����Դ���롣
//�ŵ㣺���������ˡ�
//���У�
//chat.c: ����Դ���롣
//makefile: ���ú궨�壬��һ��Դ������������ͬ�Ŀ�ִ�г���
//
//ʹ�ã�
//make clean ����ϴα������ɵĽ���ļ���
//make ���±�������������ִ�г���./a_chat��./b_chat��ִ��˳��û���Ⱥ�
//���ߣ�david.q@sz 2012-8-11 2263537@qq.com
/**************************************************************************/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <time.h>

int main( int argc, char *argv[] )
{
#ifdef A
	char me[] = "a";
	char you[] = "b";
#else
	char me[] = "b";
	char you[] = "a";
#endif
	char buf[100];
	char get[100];
        
        time_t timep;
	struct tm *p;
	printf( "Hello, %s!\n", me );				//print welcome message

	pid_t pid;
	pid = fork();

	if ( pid == 0 )		//child process
	{
		int fifo_f;
#ifdef A
		char fifo[] = "/tmp/b2a";
#else
		char fifo[] = "/tmp/a2b";
#endif
		mkfifo( fifo, 0666 );					//creat fifo if exist or not
		if ( errno == EEXIST )
		{
			fifo_f = open( fifo, O_RDONLY );	//wait & open fifo
		}

		//read
		while ( 1 )
		{
			bzero( get, sizeof(get));			//set buf to '\0' before read buf
			read( fifo_f, get, sizeof(get) );	//read buf from another side
			if ( strlen(get) )
			{
				printf( "\r%s: %s", you, get );
				time(&timep);
				p=localtime(&timep);
				printf("\t%d:%d:%d\n",p->tm_hour,p->tm_min,p->tm_sec); 
				printf( "%s: ", me );
				fflush(stdout);					//print buf to screen
				usleep(100);
			}
		}
	}
	else	//parent process
	{
		int fifo_f;
#ifdef A
		char fifo[] = "/tmp/a2b";
#else
		char fifo[] = "/tmp/b2a";
#endif
		mkfifo( fifo, 0666 );					//creat fifo if exist or not
		if ( errno == EEXIST )
		{
			fifo_f = open( fifo, O_WRONLY );	//wait & open fifo
		}

		//write
		while ( 1 )
		{
			printf( "%s: ", me );
			fflush(stdout);						//print to screen

			bzero( buf, sizeof(buf) );			//set buf to '\0' before get from stdin
			fgets( buf, sizeof(buf), stdin );	//get buf from stdin
			write( fifo_f, buf, sizeof(buf) );	//send buf to anoterh side
			usleep(100);
		}
	}

	return 0;
}
