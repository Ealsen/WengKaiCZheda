#include <stdio.h>

int main()
{
	int one,two,five;
	int x=2;
	scanf("%d",&x);
	x=2;
	for(one=1;one<x*10;one++)
	{
		for(two=1;two<x*10/2;two++)
		{
			for(five=1;five<x*10/5;five++)
			{
				if(one*1+two*2+five*5==x*10)
				{
					printf("%d*1+%d*2+%d*5=%d\n",one,two,five,x*10);
					goto end;
				}
			}
		}
	}
end:
	return 0;
}
