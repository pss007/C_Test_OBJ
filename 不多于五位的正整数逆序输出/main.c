#include <stdio.h>
int main( )
{
      int i ;
      int num=0;
      printf ("输入一个不多于五位的正整数：\n") ;
      scanf("%d",&i);
      while (i<0||i>99999)
    {
        printf ("输入有误，请重新输入一个不多于五位的正整数：\n") ;
        scanf ("%d",&i) ;
    }
      if(i>9999&&i<=99999)
      num=5;
      if(i>999&&i<=9999)
      num=4;
      if(i>99&&i<=999)
      num=3;
      if(i>9&&i<=99)
      num=2;
      if(i>-1&&i<=9)
      num=1;
      printf("这个数是%d位数\n",num);
      printf("%d",i%10);
      if(num>1)
      printf("%d",i%100/10);
      if(num>2)
      printf("%d",i%1000/100);
      if(num>3)
      printf("%d",i%10000/1000);
      if(num>4)
      printf("%d\n",i%100000/10000);
      return 0;
 }
