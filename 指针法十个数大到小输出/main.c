#include <stdio.h>
int main()
{
    void sort(int x[],int n) ;
    int *p,i,a[10] ;
    p=a ;
    printf ("输入十个整数：\n") ;
    for (i=0;i<10;i++)
      scanf ("%d,",p++) ;    //首次写程序%d后面用了空格 导致最后一个整数输入后无法进行排序 以后注意不要用空格分开输入各个元素
    p=a ;
    sort(p,10) ;
    printf ("由大到小排序为：\n") ;
    for (p=a,i=0;i<10;i++)
    printf ("%d,",*p++) ;
    printf ("\n") ;
    return 0 ;
}
void sort(int x[],int n)
{
    int i,j,t ;
    for (i=0;i<n-1;i++)
      for (j=i+1;j<n;j++)
        if (x[i]<x[j])
          t=x[i],x[i]=x[j],x[j]=t ;
}
