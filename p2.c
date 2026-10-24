#include <stdio.h>

int main(void)
{
    int a=42;
    int *p=&a;

    printf("a     = %d\n", a);
    printf("&a    = %p\n", (void *)&a);
    printf("p     = %p\n", (void *)p);

    printf("*p    = %d\n\n", *p);

    *p = 99;                   
    printf("执行 *p = 99 之后：\n");
    printf("a  = %d\n", a);                 
    printf("*p = %d\n", *p);

    return 0;
}