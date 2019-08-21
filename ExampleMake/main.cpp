#include "myfunc.h"

int main()
{
    int a[] = {10,30,76,98,43};
    int x = sizeof(a)/sizeof(int);
    loop(a,x);
    fact(6);
    return 0;
}