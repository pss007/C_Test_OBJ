#include <stdio.h>
int main()
{
    float c,f ;
    printf ("输入一个华氏温度:\n") ;
    scanf ("%f",&f) ;
    c=(5.0/9)*(f-32) ;
    printf ("对应的摄氏温度是：%f",c) ;
    return (0) ;
}
