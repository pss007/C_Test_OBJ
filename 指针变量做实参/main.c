#include <stdio.h>
int main()
{
    void inv(int *x,int n) ;
    int i,a[10]={3,7,9,11,0,6,7,5,4,2},*p=a ;
    printf ("ԭ�����Ԫ�أ�\n") ;
    for (i=0;i<10;i++)
      printf ("%d ",*p++) ;
    printf ("\n") ;
    p=a ;                               // ָ���������ָ�������׵�ַ �����������Ԥ֪
    inv(p,10) ;
    printf ("�����ĸ�Ԫ�أ�\n") ;
    for (i=0;i<10;i++)
      printf ("%d ",*p++) ;
    printf ("\n") ;
    return 0 ;
}
void inv(int *x,int n)
{
    int *p,*i,*j,t,m=(n-1)/2 ;
   i=x,j=x+n-1,p=x+m ;        //�ֱ�������ָ��ĵ�ַ ����x��ָ����� ��ʾ���ǵ�ַ ��������һϵ�е�ַ����
   for (;i<=p;i++,j--)
     t=*i,*i=*j,*j=t ;
}
