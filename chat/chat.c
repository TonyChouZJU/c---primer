/**************************************************************************/
//本程序是利用LINUX FIFO命名管道技术实现双向聊天的C语言源代码。
//优点：代码简洁明了。
//其中：
//chat.c: 聊天源代码。
//makefile: 利用宏定义，把一个源码生成两个不同的可执行程序。
//
//使用：
//make clean 清除上次编译生成的结果文件。
//make 重新编译生成两个可执行程序。./a_chat和./b_chat的执行顺序没有先后。
//作者：david.q@sz 2012-8-11 2263537@qq.com
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
