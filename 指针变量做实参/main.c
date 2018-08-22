#include <stdio.h>
int main()
{
    void inv(int *x,int n) ;
    int i,a[10]={3,7,9,11,0,6,7,5,4,2},*p=a ;
    printf ("原数组各元素：\n") ;
    for (i=0;i<10;i++)
      printf ("%d ",*p++) ;
    printf ("\n") ;
    p=a ;                               // 指针变量重新指向数组首地址 否则输出不可预知
    inv(p,10) ;
    printf ("排序后的各元素：\n") ;
    for (i=0;i<10;i++)
      printf ("%d ",*p++) ;
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
