#include <stdio.h>
int main()
{
    int year,leap ;
    printf ("输入年份：\n") ;
    scanf ("%d",&year) ;
    if (year%4==0)
    {
      if (year%100==0)
         {
            if (year%400==0)
            leap=1 ;
            else leap=0 ;
         }
      else leap=1 ;
    }
    else leap=0 ;
    if (leap)
    printf ("%d是闰年。\n",year) ;
    else
    printf ("%d不是闰年。\n",year) ;
    return 0;
}
