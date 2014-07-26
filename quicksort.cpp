#include<stdio.h>
int subquicksort(int *a, int m, int n );
void subsort(int *a, int m, int n);
int main()
{
	int n;
	printf("输入快速排序的个数n\n");
	scanf("%d",&n);
	int a[n];
	printf("输入n个数，并以回车分隔\n");
	for(int i = 0; i !=n; ++i)
		scanf("%d",a+i);
	subsort(a,0,n-1);
	for(int i = 0; i !=n; ++i)
		printf("a[%d]=%d\n",i,*(a+i));

}

int subquicksort(int *a,int m, int n )
{	
	int i = m;
	int j = n;
	int tmp;
	int p = *(a+i);
	while(i<j){
		do{ ++i;}while(*(a+i) < p);
		do{ --j;}while(*(a+j) > p);
	        tmp = *(a+i);
		*(a+i) = *(a+j);
		*(a+j) = tmp;
	}	

        tmp = *(a+i);
	*(a+i) = *(a+j);
	*(a+j) = tmp;
	
	tmp = *(a+m);
	*(a+m)=*(a+j);
	*(a+j)=tmp;
	return j;
 }


void subsort(int *a, int m, int n)
{
	if(m<n)
	{	int j = subquicksort(a,m,n);
		subsort(a,m,j-1);
		subsort(a,j+1,n);
	}
}
