#include <stdio.h>
#include <math.h>
int main()
{
    int a,b ;
    printf ("请输入一个小于1000的正数：\n") ;
    scanf ("%d",&a) ;
    while ((a<0)||(a>1000))
    {
        printf ("输入有误，请重新输入一个小于1000的正数：\n") ;
        scanf ("%d",&a) ;
    }
    if ((a>=0)&&(a<1000))
    b=sqrt(a) ;
    printf ("平方根=%d",b) ;
    return 0;
}
