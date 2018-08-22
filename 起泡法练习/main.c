#include <stdio.h>
int main()
{
    int i,j,t ;
    int a[10] ;
    printf ("输入十个数字：\n") ;
    for (i=0;i<=9;i++)
    scanf ("%d",&a[i]) ;      /*循环输入数组元素 并赋予地址 内存存储*/
    for (j=0;j<9;j++)         /*进行10-1次循环比较*/
    for (i=0;i<9-j;i++)
    if (a[i]>a[i+1])
    {
        t=a[i] ; a[i]=a[i+1] ; a[i+1]=t ;
    }
    for (i=0;i<=9;i++)
    printf ("%d ",a[i]) ;
    return 0 ;
}
