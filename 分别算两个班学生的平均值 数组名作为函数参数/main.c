#include <stdio.h>
int main()
{
    float average(float array[],int n) ;         //数组长度可以不写 系统不检查形参数组大小
    float score1[5]={98.5,97,91.5,60,55} ;
    float score2[10]={67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5} ;
    printf ("A班级的平均分是：%f\n",average(score1,5)) ;              //一下两行只能用数组名作为实参 表示数组首元素的地址
    printf ("B班级的平均分是：%f\n",average(score2,10)) ;
    return 0 ;
}
float average(float array[],int n)
{
    int i ;
    float aver,sum=array[0] ;
    for (i=1;i<n;i++)
    sum=sum+array[i] ;
    aver=sum/n ;
    return aver ;
}
