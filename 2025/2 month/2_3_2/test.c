#include <stdio.h>
#include <string.h>

// ����5���ַ������ҳ�����ַ��������
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
    printf("��ַ���Ϊ�� %d �� ��%s\n", max + 1, str[max]);
    return 0;
}