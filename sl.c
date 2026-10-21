#include <stdio.h>
#include <string.h>       /* 【规定】strlen 要它 */

int main(void)
{
    char buf[10];         /* 【规定】开 10 格 */
    int n = 0;

    buf[n] = 'A'; n = n + 1; buf[n] = '\0';
    buf[n] = 'B'; n = n + 1; buf[n] = '\0';

    printf("sizeof = %zu\n", sizeof buf);   /* 10 */
    printf("strlen = %zu\n", strlen(buf));  /* 2  */
    printf("内容   = 「%s」\n", buf);

    return 0;
}
