#include <stdio.h>
int main(void)
{
	int n;
	printf("请输入总的数字个数n\n");
	scanf("%d",&n);
	int a[n];
	int min_a;
	printf("输入各数字并以回车分隔\n");
	for(int i = 0; i !=n; i++)
		scanf("%d",&a[i]);
	for(int i = 0; i !=n-1; i++)
		for(int j = i; j !=n; j++)
			if(a[j]<a[i])
			{min_a = a[j];
			a[j] = a[i];
			a[i] = a[j];
			}
	return 0;
}
