#include <stdio.h>
int main()
{
    int i,j,t ;
    int a[10] ;
    printf ("����ʮ�����֣�\n") ;
    for (i=0;i<=9;i++)
    scanf ("%d",&a[i]) ;      /*ѭ����������Ԫ�� �������ַ �ڴ�洢*/
    for (j=0;j<9;j++)         /*����10-1��ѭ���Ƚ�*/
    for (i=0;i<9-j;i++)
    if (a[i]>a[i+1])
    {
        t=a[i] ; a[i]=a[i+1] ; a[i+1]=t ;
    }
    for (i=0;i<=9;i++)
    printf ("%d ",a[i]) ;
    return 0 ;
}
