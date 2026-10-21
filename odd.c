#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 1; i <= 100; i += 2) {
        sum = sum + i;
    }

    printf("1+...+99 = %d\n", sum);

    return 0;
}
