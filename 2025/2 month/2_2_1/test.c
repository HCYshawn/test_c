#include <stdio.h>

// ���1+2+3+...+n>=200��������С��nֵ�Լ�1+2+3+...+n��ֵ
int main()
{
    int sum = 0;
    int i = 1;
    while (sum <= 200)
    {
        i++;
        sum += i;
    }
    printf("ʹ�ò���ʽ��������С��nֵΪ %d ,1+2+3+...+n��ֵΪ %d\n", i, sum);
    return 0;
}