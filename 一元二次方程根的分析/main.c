#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,t ;
    printf ("分别输入abc三个数:") ;
    scanf ("%d,%d,%d",&a,&b,&c) ;
    t=sqrt(b*b-4*a*c) ;
    if (t==0)
    printf ("此一元二次方程有两个相同的根") ;
    if (t>0)
    printf ("此一元二次方程有两个不同的根") ;
    if (t<0)
    printf ("此一元二次方程无解") ;
    return (0) ;
}
