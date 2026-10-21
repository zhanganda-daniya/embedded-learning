#include <stdio.h>              /* 【规定】printf 要它 */

int main(void)                  /* 【规定】入口，照抄 */
{
    char buf[10];               /* 【规定】开 10 个格子 */
    int  n = 0;                 /* 【规定】n = 已经收了几个，从 0 开始 */
    char ch;                    /* 【规定】ch = 这次收到的字符 */

    /* ↓ 收到第 1 个字符 'A' */
    ch = 'A';                   /* 【举例】假装收到 'A' */
    buf[n] = ch;                /* 放进第 n 格（n=0 → 第 0 格） */
    n = n + 1;                  /* n 变 1 */
    buf[n] = '\0';              /* 第 1 格补结束标记 */

    /* ↓ 收到第 2 个字符 'B' */
    ch = 'B';
    buf[n] = ch;                /* n=1 → 第 1 格（覆盖刚才那个 0） */
    n = n + 1;                  /* n 变 2 */
    buf[n] = '\0';

    /* ↓ 收到第 3 个字符 'C' */
    ch = 'C';
    buf[n] = ch;                /* n=2 → 第 2 格 */
    n = n + 1;                  /* n 变 3 */
    buf[n] = '\0';

    printf("收到了 %d 个字符：%s\n", n, buf);
    printf("buf[0..3] = %d %d %d %d\n", buf[0], buf[1], buf[2], buf[3]);

    return 0;
}
