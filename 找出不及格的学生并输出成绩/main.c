#include <stdio.h>
int main()
{
    float search(float (*p)[4],int n) ;
    float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}} ;
    search(score,3) ;           //实参
    return 0 ;
}
float search(float (*p)[4],int n)      //这里指针为含有四个元素的一维数组
{
    int i,j,flag ;
    for (j=0;j<n;j++)
    {
        flag=0 ;
        for (i=0;i<4;i++)
          if (*(*(p+j)+i)<60) flag=1 ;
        if (flag==1)
          {
              printf ("第%d个学生有不及格现象，成绩是：\n",j+1) ;
              for (i=0;i<4;i++)
              printf ("%5.1f ",*(*(p+j)+i)) ;
              printf ("\n") ;
              }
    }
}
