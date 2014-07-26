#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("hello");
	fflush(stdout);
	fork();
	return 0;
}
