#include <stdio.h>
int main()
{
   int i,j;
   double s=0,s1=0,s2=0,s3=0,k ;
   for (i=1;i<=100;i++)
   s1=s1+i ;
   for (j=1;j<=50;j++)
   s2=s2+j*j ;
   for (k=1;k<=10;k++)
   s3=s3+1/k ;       //ע�����ﶨ�����kʱӦΪʵ�ͱ��� ���������Զ�ת�������� ��ÿ��ȡ�� ���½������
   s=s1+s2+s3 ;
   printf ("s=%lf",s) ;
    return 0 ;
}
