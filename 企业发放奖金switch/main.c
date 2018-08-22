#include <stdio.h>
int main()
{
      double i,s,bon1,bon2,bon4,bon6,bon10 ;
      int c ;                         /*定义等级以备switch用*/
      bon1=100000*0.1 ;                 /*利润为10万元时的奖金*/
      bon2=bon1+100000*0.075 ;          /*利润为20万元时的奖金*/
      bon4=bon2+200000*0.05 ;           /*利润为40万元时的奖金*/
      bon6=bon4+200000*0.03 ;           /*利润为60万元时的奖金*/
      bon10=bon6+400000*0.015 ;         /*利润为100万元时的奖金*/
      printf("请输入利润i:") ;
      scanf("%lf",&i) ;
      c=i/100000 ;
      if (c>10)
      c=10 ;
      switch (c)
      {
          case 0 : s=i*0.1 ;break ;
          case 1 : s=bon1+(i-100000)*0.075;break ;
          case 2 :
          case 3 : s=bon2+(i-200000)*0.05 ;break ;
          case 4 :
          case 5 : s=bon4+(i-400000)*0.03 ;break ;
          case 6 :
          case 7 :
          case 8 :
          case 9 : s=bon6+(i-600000)*0.015 ;break ;
          case 10 : s=bon10+(i-1000000)*0.01 ;break ;
      }
      printf ("奖金是 %10.2lf",s) ;
      return 0 ;
}
