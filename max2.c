#include <stdio.h>          /* 【规定】printf 要它 */

int max2(int a, int b)      /* 【规定】返回 int，收两个 int */
{
    if (a>b)
    {
        return a;
    } else{
        return b;
    }

}

int main(void)
{
    printf("max2(3, 7) = %d\n", max2(3, 7));      /* 【举例】应该是 7 */
    printf("max2(9, 2) = %d\n", max2(9, 2));      /* 【举例】应该是 9 */
    printf("max2(4, 4) = %d\n", max2(4, 4));      /* 【举例】相等时随便返回哪个都对，应该是 4 */
    return 0;
}