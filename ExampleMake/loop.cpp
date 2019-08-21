#include <iostream>
#include "myfunc.h"

void loop(int *a,int n)
{
    for(int i=0;i<n;i++)
        std::cout<<a[i]<<" ";
    std::cout<<"\n";
}