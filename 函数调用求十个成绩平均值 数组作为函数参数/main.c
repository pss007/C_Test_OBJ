#include <stdio.h>
int main()
{
    float average(float array[10]) ;
    float aver,score[10] ;
    int i ;
    printf ("����ʮ��ѧ���ĳɼ�:\n") ;
    for (i=0;i<10;i++)
    scanf ("%f",&score[i]) ;          //��������ʮ���ɼ���Ҫ�ÿո��س����룬���ö��Ż��������
    printf ("\n") ;
    aver=average(score) ;             //���ú��� �����������βδ���������Ԫ�صĵ�ַ
    printf ("ƽ���ɼ���:%f\n",aver) ;
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
