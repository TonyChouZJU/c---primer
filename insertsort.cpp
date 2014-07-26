#include<stdio.h>
int main(void)
{
	int n;
	printf("请输入要排序的数字个数n\n");
	scanf("%d",&n);
	int a[n];
	int tmp;
	printf("请输入各个数字并以回车分隔\n");
	for(int i = 0; i != n; ++i)
		scanf("%d",a+i);
	for(int i = 0; i != n-1; ++i)
		for(int j = i+1; j != 0; --j)
			if(*(a+j) > *(a+j-1))
			{tmp = *(a+j);
			*(a+j)=*(a+j-1);
			*(a+j-1)=tmp;
			}		
	for(int i=0; i != n; ++i)
		printf("a[%d]=%d\n",i,*(a+i));
}	
