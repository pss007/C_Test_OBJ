#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,t ;
    printf ("�ֱ�����abc������:") ;
    scanf ("%d,%d,%d",&a,&b,&c) ;
    t=sqrt(b*b-4*a*c) ;
    if (t==0)
    printf ("��һԪ���η�����������ͬ�ĸ�") ;
    if (t>0)
    printf ("��һԪ���η�����������ͬ�ĸ�") ;
    if (t<0)
    printf ("��һԪ���η����޽�") ;
    return (0) ;
}
