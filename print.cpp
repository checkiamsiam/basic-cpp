#include <iostream> // to use cout
#include <stdio.h> // to use printf
int main()
{
    // std::cout << "hello world";

    // variable data types are same as in C
    int a = 10;
    long long int b = 100000000000;
    float c = 1.5;
    double d = 1.56666655;
    char cc = 'A';

    // printf("%d", a);
    // std::cout << a;
    // my favourite number is a
    // printf("my favourite number is %d", a);
    // std::cout << "my favourite number is " << a;
    // std::cout << "my " << a << " favourite number is";
    // std::cout << a << " " << b;
    // printf("%d\n%lld", a, b);
    // std::endl == "\n"
    std::cout << a << std::endl
              << b << std::endl;
    return 0;
}