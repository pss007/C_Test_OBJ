#include <stdio.h>
int main()
{
    float average(float *p,int n) ;
    float search(float (*p)[4],int n) ;
    float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}} ;
    average(*score,12) ;        //实参
    search(score,2) ;           //实参
    return 0 ;
}
float average(float *p,int n)
{
    float *p_end ;                          //定义指针结束位置
    float sum=0,aver ;
    p_end=p+n-1 ;                          //数组按行顺序存放算出指针结束位置
    for (;p<=p_end;p++)
    sum=sum+(*p) ;
    aver=sum/n ;
    printf ("aver=%5.2f\n",aver) ;
}
float search(float (*p)[4],int n)      //这里指针为含有四个元素的一维数组
{
    int i ;
    printf ("学号为%d的学生的成绩是：\n",n) ;
    for (i=0;i<4;i++)
    printf ("%5.2f ",*(*(p+n)+i)) ;           //代表score[n][i]的值
    printf ("\n") ;
}
