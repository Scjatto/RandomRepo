#include<bits/stdc++.h>
#include "matrix.h"

int main()
{
    /*mat m1(2,2);
    m1.createmat();
    m1.dispmat();
    mat m2(2,2);
    m2.createmat();
    m2.dispmat();
    mat matsum = m1+m2;
    mat matdiff = m1-m2;
    mat matmul = m1*m2;
    matsum.dispmat();
    matdiff.dispmat();
    matmul.dispmat();*/
    mat m(3,2);
    m.createmat();
    m.dispmat();
    m = m.transpose();
    m.dispmat();

    return 0;
}