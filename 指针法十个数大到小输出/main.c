#include <stdio.h>
int main()
{
    void sort(int x[],int n) ;
    int *p,i,a[10] ;
    p=a ;
    printf ("����ʮ��������\n") ;
    for (i=0;i<10;i++)
      scanf ("%d,",p++) ;    //�״�д����%d�������˿ո� �������һ������������޷��������� �Ժ�ע�ⲻҪ�ÿո�ֿ��������Ԫ��
    p=a ;
    sort(p,10) ;
    printf ("�ɴ�С����Ϊ��\n") ;
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
