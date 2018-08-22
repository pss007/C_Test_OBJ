#include <stdio.h>
int main()
{
    void inv(int *x,int n) ;
    int i,a[10]={3,7,9,11,0,6,7,5,4,2} ;
    printf ("原数组各元素：\n") ;
    for (i=0;i<10;i++)
      printf ("%d ",a[i]) ;
    printf ("\n") ;
    inv(a,10) ;
    printf ("排序后的各元素：\n") ;
    for (i=0;i<10;i++)
      printf ("%d ",a[i]) ;
    printf ("\n") ;
    return 0 ;
}
void inv(int *x,int n)
{
    int *p,*i,*j,t,m=(n-1)/2 ;
   i=x,j=x+n-1,p=x+m ;        //分别定义三个指针的地址 这里x是指针变量 表示的是地址 所以这是一系列地址运算
   for (;i<=p;i++,j--)
     t=*i,*i=*j,*j=t ;
}
