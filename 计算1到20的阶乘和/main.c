#include <stdio.h>
int main()
{
    int i,j=1,t=1,s=0 ;
    for (i=1;i<=20;i++)
    {
        while (j<=i)
        {
            t=j*t ;
            j++ ;
        }
        s=s+t ;
    }
    printf ("s=%d",s) ;
    return 0 ;
}




/*简单一个for语句的算法
#include <stdio.h>
int main()
{
   int i,s=0,t=1 ;
   for (i=1;i<=20;i++)
   {
       t=i*t ;
       s=s+t ;
   }
   printf ("s=%d",s) ;
    return 0 ;
}*/



/*两个for语句的算法
#include <stdio.h>
int main()
{
   long int i,j,s=0,t=1 ;
   for (i=1;i<=20;i++)
   {
       for (j=1,t=1;j<=i;j++) 这里要添加一个条件t=1 使第二个for语句每次循环t回复初值1 否则每次循环t值渐增 算出错误
       t=j*t ;
       s=s+t ;
   }
   printf ("s=%ld",s) ;
    return 0 ;
}
*/
