#include <stdio.h>
int main()
{
    float average(float *p,int n) ;
    float search(float (*p)[4],int n) ;
    float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}} ;
    average(*score,12) ;        //ʵ��
    search(score,2) ;           //ʵ��
    return 0 ;
}
float average(float *p,int n)
{
    float *p_end ;                          //����ָ�����λ��
    float sum=0,aver ;
    p_end=p+n-1 ;                          //���鰴��˳�������ָ�����λ��
    for (;p<=p_end;p++)
    sum=sum+(*p) ;
    aver=sum/n ;
    printf ("aver=%5.2f\n",aver) ;
}
float search(float (*p)[4],int n)      //����ָ��Ϊ�����ĸ�Ԫ�ص�һά����
{
    int i ;
    printf ("ѧ��Ϊ%d��ѧ���ĳɼ��ǣ�\n",n) ;
    for (i=0;i<4;i++)
    printf ("%5.2f ",*(*(p+n)+i)) ;           //����score[n][i]��ֵ
    printf ("\n") ;
}
