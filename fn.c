#include <stdio.h>

void say_hello(void)
{
    printf("hello\n");
}

int square(int n)
{
    return n*n;
}

void add_one(int x)
{
    x= x+1;
    printf("函数内部:x变成了%d\n",x);
}

int add_one2(int x)

{
    return x+1;
}

int main(void)
{
    say_hello();

    printf("square(5) = %d\n\n",square(5));

    int a=5;
    printf("调用之前:a=%d\n",a);
    add_one(a);
    printf("调用之后:a=%d\n",a);
    a=add_one2(a);
    printf("用返回值之后a:=%d\n",a);

    return 0;



}