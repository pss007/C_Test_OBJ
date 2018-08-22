#include <stdio.h>
int main()
{
    char c1,c2 ;
    printf ("输入一个大写字母：") ;
    scanf ("%c",&c1) ;
    c2=c1+32 ;
    printf ("对应小写字母是：%c\n",c2) ;
    printf ("代码的值是：%d\n",c2) ;
    return 0 ;
}
