#include<iostream>
#include "myfunc.h"

void fact(int n)
{
    if (n == 0)
        std::cout<<1<<"\n";
    else
    {
        int prod = 1;
        for(int i=n;i>=1;i--)
            prod*=i;
        std::cout<<prod<<"\n";
    }
    
}