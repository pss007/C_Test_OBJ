#include <stdio.h>
int main()
{
    void hanoi (int n,char one,char two,char three);     //函数声明
    int m ;
    printf ("输入盘子的个数：") ;
    scanf ("%d",&m) ;
    printf ("移动%d个盘子的步骤：\n",m) ;
    hanoi (m,'A','B','C') ;          //这里需要加强理解 个人理解是对应函数声明中的（n，one，two，three）
}
void hanoi (int n,char one,char two,char three)   //将n个盘子从one座借助two座移动到three座  定义hanoi函数
{
    void move (char x,char y) ;               //move函数声明
    if (n==1) move (one,three) ;
    else
    {
        hanoi (n-1,one,three,two) ;   //将n-1个盘子借助three座移动到two座
        move (one,three) ;            //调用move函数
        hanoi (n-1,two,one,three) ;   //将n-1个盘子借助one座移动到three座
    }
}
void move (char x,char y)
{
    printf ("%c-->%c\n",x,y) ;
}
