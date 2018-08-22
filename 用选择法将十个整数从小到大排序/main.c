#include <stdio.h>
int main()
{
    void sort(int array[],int n) ;
    int a[10],i ;
    printf ("输入十个整数：\n") ;
    for (i=0;i<10;i++)
    scanf ("%d",&a[i]) ;
    sort(a,10) ;               //函数调用
    printf ("排序后：\n") ;
    for (i=0;i<10;i++)
    printf ("%d ",a[i]) ;
    printf ("\n") ;
    return 0 ;
}
/*void sort(int array[],int n)     //采用起泡法进行排序
{
    int i,j,t ;
    for (j=0;j<n-1;j++)          //每个数进行n-1次循环
    for (i=0;i<n-1-j;i++)
    if (array[i]>array[i+1])
    t=array[i] ,array[i]=array[i+1],array[i+1]=t ;
}*/

void sort(int array[],int n)            //比较法进行排序 十个数中最小的放进a【0】剩下九个最小的放进a【1】以此类推
{
    int i,j,t,k ;                      //比较法中多了一个k
    for (i=0;i<n-1;i++)                //共比较n-1次
    {
        k=i ;
        for (j=i+1;j<n;j++)            //i+1代表已排序好的后面的元素 剩下的元素循环再比较
        if (array[j]<array[i])
        k=j ;
        t=array[k],array[k]=array[i],array[i]=t ;
    }
}
