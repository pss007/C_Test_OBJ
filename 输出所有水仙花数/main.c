#include <stdio.h>
int main()
{
   int i,i1,i2,i3,num=0;         //i1 i2 i3分别是三位数的百十个为数 为整形变量
   for (i=100;i<1000;i++)
   {
       i1=i/100 ;
       i2=(i%100),i2=i2/10 ;
       i3=(i%100),i3=i3%10 ;
   if (i==i1*i1*i1+i2*i2*i2+i3*i3*i3)   //注意赋值=与等于==的使用
   {
       num+=1 ;
       printf ("%d ",i) ;
   }
   }
   printf ("水仙花数共有%d个。",num) ;
    return 0 ;
}
