#include <bits/stdc++.h>
#include "matrix.h"

mat::mat(int r,int c)
{
    row = r;
    col = c;
}

void mat::createmat(){
    
    //std::cout<<"Enter the dimension of the matrix: ";
    //std::cin>>row>>col;
    std::cout<<"Enter the elements in the matrix: "<<std::endl;
    for(int i=0;i<row;i++)
    {
        std::vector<int> temp;
        for(int j=0;j<col;j++)
        {
            int x;
            std::cin>>x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }
}

mat mat::operator+(mat m){
    if(row == m.row && col == m.col)
    {
        mat res(row,col);
        for(int i=0;i<row;i++)
        {
            std::vector<int> temp;
            for (int j=0;j<col;j++)
                temp.push_back(matrix[i][j]+m.matrix[i][j]);
            res.matrix.push_back(temp);
        }
        return res;
    }
}

mat mat::operator-(mat m){
    if(row == m.row && col == m.col)
    {
        mat res(row,col);
        for(int i=0;i<row;i++)
        {
            std::vector<int> temp;
            for (int j=0;j<col;j++)
                temp.push_back(matrix[i][j]-m.matrix[i][j]);
            res.matrix.push_back(temp);
        }
        return res;
    }
}

void mat::dispmat(){
    for(auto vect : matrix)
    {
        for (auto el : vect)
            std::cout<<el<<" ";
        std::cout<<std::endl;
    }
}