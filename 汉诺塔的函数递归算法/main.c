#include <stdio.h>
int main()
{
    void hanoi (int n,char one,char two,char three);     //��������
    int m ;
    printf ("�������ӵĸ�����") ;
    scanf ("%d",&m) ;
    printf ("�ƶ�%d�����ӵĲ��裺\n",m) ;
    hanoi (m,'A','B','C') ;          //������Ҫ��ǿ��� ��������Ƕ�Ӧ���������еģ�n��one��two��three��
}
void hanoi (int n,char one,char two,char three)   //��n�����Ӵ�one������two���ƶ���three��  ����hanoi����
{
    void move (char x,char y) ;               //move��������
    if (n==1) move (one,three) ;
    else
    {
        hanoi (n-1,one,three,two) ;   //��n-1�����ӽ���three���ƶ���two��
        move (one,three) ;            //����move����
        hanoi (n-1,two,one,three) ;   //��n-1�����ӽ���one���ƶ���three��
    }
}
void move (char x,char y)
{
    printf ("%c-->%c\n",x,y) ;
}
