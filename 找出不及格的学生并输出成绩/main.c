#include <stdio.h>
int main()
{
    float search(float (*p)[4],int n) ;
    float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}} ;
    search(score,3) ;           //ʵ��
    return 0 ;
}
float search(float (*p)[4],int n)      //����ָ��Ϊ�����ĸ�Ԫ�ص�һά����
{
    int i,j,flag ;
    for (j=0;j<n;j++)
    {
        flag=0 ;
        for (i=0;i<4;i++)
          if (*(*(p+j)+i)<60) flag=1 ;
        if (flag==1)
          {
              printf ("��%d��ѧ���в��������󣬳ɼ��ǣ�\n",j+1) ;
              for (i=0;i<4;i++)
              printf ("%5.1f ",*(*(p+j)+i)) ;
              printf ("\n") ;
              }
    }
}
