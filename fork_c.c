#include<stdio.h>
#include<unistd.h>
#include<time.h>
int main()
{
	time_t timep;
	struct tm *p;
	time (&timep);
	p=localtime(&timep);
	printf("%d:%d:%d\n",p->tm_hour,p->tm_min,p->tm_sec);
	printf("hello");
        
//	fflush(stdout);
	fork();
	return 0;
}
