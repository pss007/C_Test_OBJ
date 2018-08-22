#include <stdio.h>
int main()
{
    int i ;
    printf ("输入一个数字:\n") ;
    scanf ("%d",&i) ;
    if ((i%3==0)&(i%5==0))
    printf ("这个数能被3和5整除。\n") ;
    else
    printf ("这个数不能被3和5整除。\n") ;
    return 0 ;
}
