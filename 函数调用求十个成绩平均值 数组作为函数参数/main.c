#include <stdio.h>
int main()
{
    float average(float array[10]) ;
    float aver,score[10] ;
    int i ;
    printf ("输入十个学生的成绩:\n") ;
    for (i=0;i<10;i++)
    scanf ("%f",&score[i]) ;          //这里输入十个成绩是要用空格或回车输入，若用逗号会产生错误
    printf ("\n") ;
    aver=average(score) ;             //调用函数 用数组名向形参传递数组首元素的地址
    printf ("平均成绩是:%f\n",aver) ;
    return 0 ;
}
float average(float array[10])
{
    int i ;
    float aver ,sum=array[0] ;
    for (i=1;i<10;i++)
    sum=sum+array[i] ;
    aver=sum/10 ;
    return aver ;
}
