#include <stdio.h>
#define SUM 100000
int main()
{
    int i ;
    float jk,sum,aver ;
    for (i=1,sum=0;i<=1000;i++)
    {
        printf ("����һ��ѧ�����") ;
        scanf ("%f",&jk) ;
        sum=sum+jk ;
        if (sum>=SUM) break ;
    }
    aver=sum/i ;
    printf ("��%dѧ�����\n���ƽ��ֵ��%f\n",i,aver) ;
    return 0;
}
