#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour1,minute1;
    int hour2,minute2;

    printf("Please input first time:such: first:hour1 minute1\n");
    scanf("%d %d",&hour1,&minute1);
    printf("Please input second time:such: first:hour2 minute2\n");
    scanf("%d %d",&hour2,&minute2);

    int time1=hour1*60+minute1;
    int time2=hour2*60+minute2;

    int time_difference=time2-time1;

    printf("Time difference is %d hours %d minutes\n",time_difference/60,time_difference%60);
    system("pause");
    return 0;
}