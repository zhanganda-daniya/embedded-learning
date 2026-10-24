#include <stdio.h>

int main(void)

{
    int a=10;
    char c='X';
    int arr[3]={100,200,300};

    printf("a的值=%d , a的地址=%p\n",a,&a);
    printf("c 的值 = %c ，c 的地址 = %p\n", c, (void *)&c);

    printf("&arr[0] = %p\n", (void *)&arr[0]);
    printf("&arr[1] = %p\n", (void *)&arr[1]);
    printf("&arr[2] = %p\n", (void *)&arr[2]);

    return 0;
}