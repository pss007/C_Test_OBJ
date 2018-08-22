#include <stdio.h>
int main()
{
    char string[80],c ;
    int i,num=0,word=0 ;
    gets (string) ;
    for (i=0;(c=string[i])!='\0';i++)         /*字符不是结束字符循环继续*/
        {
            if (c==' ') word=0 ;
            else if (word==0)                 /*如果word原值即上一状态值为0时执行下面复合语句*/
          {
             word=1 ;                         /*注意；程序中要分清赋值和等于即“=="和”="*/
             num=num+1 ;
          }
        }
    printf ("共有%d个单词。",num) ;
    return 0 ;
}
