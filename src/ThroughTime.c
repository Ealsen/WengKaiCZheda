#include <stdlib.h>
#include <stdio.h>

int main()
{
    int time;
    int through_minutes=0;

    printf("Enter the time and through minutes:\n");
    scanf("%d %d",&time,&through_minutes);
    time = (time/100*60+time%100+through_minutes)/60*100+((time/100*60+time%100+through_minutes)%60);
    printf("now_time:%d\n",time);
    system("pause");
    return 0;
}