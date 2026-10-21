#include <stdio.h>

int main(void)
{
    int big = 2147483647;
    printf("int 上限 + 1 = %d\n", big + 1);

    int s = 0;
    for (int i = 1; i <= 100000; i++) {
        s = s + i;
    }
    printf("int 求和      = %d\n", s);

    long long s2 = 0;
    for (int i = 1; i <= 100000; i++) {
        s2 = s2 + i;
    }
    printf("long long 求和 = %lld\n", s2);

    /* 顺带看各类型多大 */
    printf("char=%zu short=%zu int=%zu long=%zu longlong=%zu\n",
           sizeof(char), sizeof(short), sizeof(int),
           sizeof(long), sizeof(long long));

    return 0;
}
