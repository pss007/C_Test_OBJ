#include <stdio.h>
int main()
{
    int i ;
    printf ("����һ������:\n") ;
    scanf ("%d",&i) ;
    if ((i%3==0)&(i%5==0))
    printf ("������ܱ�3��5������\n") ;
    else
    printf ("��������ܱ�3��5������\n") ;
    return 0 ;
}
