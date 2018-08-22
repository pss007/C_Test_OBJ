#include <stdio.h>
int main()
{
    int max(int a[3][4]) ;
    int a[][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}} ;
    printf ("max=%d",max(a)) ;
    return 0 ;
}
int max(int a[3][4])
{
    int i,j,max=a[0][0] ;
    for (i=0;i<3;i++)
    for (j=0;j<4;j++)
    if (a[i][j]>max)
    max=a[i][j] ;
    return max ;
}
