#include<stdio.h>
void selectsort(int *a,int n);
void merge(int *a,int *b, int *c,int na, int nb, int nc);
int main(void)
{
	int n;
	printf("请输入数组的元素个数n\n");
	scanf("%d",&n);
	int a[n];;
        int m=(int)(n/2);
	int b[m];
	int c[n-m];
	printf("请输入各元素并以回车分隔\n");
	for(int i = 0; i != m; i++)
		scanf("%d",&b[i]);
	for(int i = 0; i != n-m; i++)
		scanf("%d",&c[i]);
        selectsort(b,m);
	selectsort(c,n-m);
	merge(a,b,c,n,m,n-m);
	for(int i = 0; i !=n; i++)
		printf("a[%d] = %d\n",i,a[i]);
}

void selectsort(int *a,int n)
{
       // int n=sizeof(a)/sizeof(*a);	
	int min_a;
	for(int i = 0; i !=n-1; i++)
		for(int j = i; j !=n; j++)
			if(a[j]<a[i])
			{min_a = a[j];
			a[j] = a[i];
			a[i] = min_a;
			}
}

void merge(int *a, int *b, int *c, int na, int nb, int nc)
{
//	int nb=sizeof(b)/sizeof(*b);
//	int nc=sizeof(c)/sizeof(*c);
	int i=0,j=0,k=0;
	while(j != nb | k != nc)
	{
		if(b[j]<c[k])
		{a[i]=b[j];
		j++;
		}
		else
		{a[i]=c[k];
		k++;
		}
		i++;
	}
}
