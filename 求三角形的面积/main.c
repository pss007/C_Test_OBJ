#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,s,area ;
    printf ("输入三角形的三个边的长：") ;
    scanf ("%lf,%lf,%lf",&a,&b,&c) ;
    s=(a+b+c)/2 ;
    area=sqrt(s*(s-a)*(s-b)*(s-c)) ;
    printf ("area=%f",area) ;
    return 0 ;
}
