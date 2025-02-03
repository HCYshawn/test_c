#include <stdio.h>
#include <string.h>

// 输入5个字符串，找出最长的字符串并输出
int main()
{
    char str[5][100];
    for (int i = 0; i < 5; i++)
    {
        gets(str[i]);
    }
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (strlen(str[i]) > strlen(str[max]))
        {
            max = i;
        }
    }
    printf("最长字符串为第 %d 个 ：%s\n", max + 1, str[max]);
    return 0;
}