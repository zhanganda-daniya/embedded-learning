#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 0; i <= 100; i = i+2) {
        sum = sum + i;
    }

    printf("2+...+100 = %d\n", sum);

    return 0;
}
