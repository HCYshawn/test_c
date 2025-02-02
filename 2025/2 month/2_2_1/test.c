#include <stdio.h>

// 求解1+2+3+...+n>=200成立的最小的n值以及1+2+3+...+n的值
int main()
{
    int sum = 0;
    int i = 1;
    while (sum <= 200)
    {
        i++;
        sum += i;
    }
    printf("使得不等式成立的最小的n值为 %d ,1+2+3+...+n的值为 %d\n", i, sum);
    return 0;
}