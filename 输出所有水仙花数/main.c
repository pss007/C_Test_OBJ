#include <stdio.h>
int main()
{
   int i,i1,i2,i3,num=0;         //i1 i2 i3�ֱ�����λ���İ�ʮ��Ϊ�� Ϊ���α���
   for (i=100;i<1000;i++)
   {
       i1=i/100 ;
       i2=(i%100),i2=i2/10 ;
       i3=(i%100),i3=i3%10 ;
   if (i==i1*i1*i1+i2*i2*i2+i3*i3*i3)   //ע�⸳ֵ=�����==��ʹ��
   {
       num+=1 ;
       printf ("%d ",i) ;
   }
   }
   printf ("ˮ�ɻ�������%d����",num) ;
    return 0 ;
}
