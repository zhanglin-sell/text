#include <stdio.h>

int main()
{
    int day;
    scanf("%d",&day);
    printf("输入天数");
    printf("%d周%d天",day/7,day%7);

    return 0;
}
