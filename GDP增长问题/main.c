#include <stdio.h>
#include<math.h>
int main()
{
    float p,r ;
    int n ;
    scanf ("%f,%d",&r,&n) ;
    p=pow((1+r),n) ;
    printf ("p=%f\n",p) ;
    return 0 ;
}
