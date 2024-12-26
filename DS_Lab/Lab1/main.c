#include <stdio.h>
#include <stdlib.h>

int main1()
{
    int m1,m2,m3;
    scanf("%d %d %d", &m1,&m2,&m3);
    float avg=(m1+m2-m3)/3.0;
    printf("Avg=%f\n",avg);
    return 0;
}
