#include <stdio.h>
#define SUM 100000
int main()
{
    int i ;
    float jk,sum,aver ;
    for (i=1,sum=0;i<=1000;i++)
    {
        printf ("输入一个学生捐款额：") ;
        scanf ("%f",&jk) ;
        sum=sum+jk ;
        if (sum>=SUM) break ;
    }
    aver=sum/i ;
    printf ("共%d学生捐款\n捐款平均值是%f\n",i,aver) ;
    return 0;
}
