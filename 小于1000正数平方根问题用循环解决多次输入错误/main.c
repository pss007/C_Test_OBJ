#include <stdio.h>
#include <math.h>
int main()
{
    int a,b ;
    printf ("������һ��С��1000��������\n") ;
    scanf ("%d",&a) ;
    while ((a<0)||(a>1000))
    {
        printf ("������������������һ��С��1000��������\n") ;
        scanf ("%d",&a) ;
    }
    if ((a>=0)&&(a<1000))
    b=sqrt(a) ;
    printf ("ƽ����=%d",b) ;
    return 0;
}
