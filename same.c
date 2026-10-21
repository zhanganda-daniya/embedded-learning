#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[] = "456";
    char b[4] = {'4', '5', '6', '\0'};

    printf("A 的格子：%d %d %d %d\n", a[0], a[1], a[2], a[3]);
    printf("B 的格子：%d %d %d %d\n", b[0], b[1], b[2], b[3]);

    return 0;
}
