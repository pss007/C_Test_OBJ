#include<stdio.h>
int main(void)
{
    //输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数。
    char ch;
    int char_num=0,kongge_num=0,int_num=0,other_num=0;
    while((ch=getchar())!='\n')//回车键结束输入，并且回车符不计入,getchar是单字符输入 用在循环语句中，可以多次输入单字符，并计算各种字符个数
    {
        if(ch>='a'&&ch<='z'||ch<='Z'&&ch>='A')
        {
            char_num++;
        }
        else if(ch==' ')
        {
            kongge_num++;
        }
        else if(ch>='0'&&ch<='9')
        {
            int_num++;
        }
        else
        {
            other_num++;
        }
    }
    printf("字母= %d,空格= %d,数字= %d,其它= %d\n",char_num,kongge_num,int_num,other_num);
    return 0;
}
