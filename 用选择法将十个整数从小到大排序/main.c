#include <stdio.h>
int main()
{
    void sort(int array[],int n) ;
    int a[10],i ;
    printf ("����ʮ��������\n") ;
    for (i=0;i<10;i++)
    scanf ("%d",&a[i]) ;
    sort(a,10) ;               //��������
    printf ("�����\n") ;
    for (i=0;i<10;i++)
    printf ("%d ",a[i]) ;
    printf ("\n") ;
    return 0 ;
}
/*void sort(int array[],int n)     //�������ݷ���������
{
    int i,j,t ;
    for (j=0;j<n-1;j++)          //ÿ��������n-1��ѭ��
    for (i=0;i<n-1-j;i++)
    if (array[i]>array[i+1])
    t=array[i] ,array[i]=array[i+1],array[i+1]=t ;
}*/

void sort(int array[],int n)            //�ȽϷ��������� ʮ��������С�ķŽ�a��0��ʣ�¾Ÿ���С�ķŽ�a��1���Դ�����
{
    int i,j,t,k ;                      //�ȽϷ��ж���һ��k
    for (i=0;i<n-1;i++)                //���Ƚ�n-1��
    {
        k=i ;
        for (j=i+1;j<n;j++)            //i+1����������õĺ����Ԫ�� ʣ�µ�Ԫ��ѭ���ٱȽ�
        if (array[j]<array[i])
        k=j ;
        t=array[k],array[k]=array[i],array[i]=t ;
    }
}
