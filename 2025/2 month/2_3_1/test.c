#include<stdio.h>

//����ܱ�11�����Ҳ������ظ����ֵ���λ������¼���ǵĸ���
int main() 
{
    int sum = 0;
    for (int i = 100; i < 1000;i++)
    {
        if(i % 11 == 0)
        {
            int a = i / 100;
            int b = i / 10 % 10;
            int c = i % 10;
            if(a != b && a != c && b != c)
            {
                printf("%d ", i);
                sum++;
            }
        }
    }
    printf("\nsum=%d\n", sum);
        return 0;
}