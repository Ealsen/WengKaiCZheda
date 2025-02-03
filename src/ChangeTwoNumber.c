#include <stdio.h>
#include <stdlib.h>

int change(int *a,int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a=0;int b=0;
	printf("hello world\n");
	scanf("%d %d",&a,&b);
	change(&a,&b);
	printf("a=%d,b=%d\n",a,b);
//	system("pause");
	return 0;
}