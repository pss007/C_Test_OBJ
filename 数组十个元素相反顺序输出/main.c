#include <stdio.h>
int main()
{
    void inv(int x[],int n) ;
    int i,a[10]={3,7,9,11,0,6,7,5,4,2} ;
    printf ("ԭ�����Ԫ�أ�\n") ;
    for (i=0;i<10;i++)
      printf ("%d ",a[i]) ;
    printf ("\n") ;
    inv(a,10) ;
    printf ("�����ĸ�Ԫ�أ�\n") ;
    for (i=0;i<10;i++)
      printf ("%d ",a[i]) ;
    printf ("\n") ;
    return 0 ;
}
void inv(int x[],int n)
{
    int i,j,t,m=(n-1)/2 ;      //ע������m��ȡֵ
    for (i=0;i<=m;i++)
    {
        j=n-1-i ;
        t=x[i],x[i]=x[j],x[j]=t ;
    }
    return ;
}
