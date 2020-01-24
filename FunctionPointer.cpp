// Example program
#include <iostream>
#include <string>

int add(int a,int b)
{
    return a+b;
}


int sub(int a,int b)
{
    return a-b;
}


int mul(int a, int b)
{
    return a*b;
}

int task(int (*funPtr)(int, int))
{
    return funPtr(2, 3);
}

int main()
{    
    printf("%d\n", task(add));
    printf("%d\n", task(sub));
    printf("%d\n", task(mul));
}
