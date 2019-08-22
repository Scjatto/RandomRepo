#include<bits/stdc++.h>
#include "matrix.h"

int main()
{
    mat m1(3,3);
    m1.createmat();
    m1.dispmat();
    mat m2(3,3);
    m2.createmat();
    m2.dispmat();
    mat matsum = m1+m2;
    mat matdiff = m1-m2;
    matsum.dispmat();
    matdiff.dispmat();

    return 0;
}