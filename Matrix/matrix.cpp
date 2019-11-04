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
    try
    {
        bool b = row == m.row && col == m.col;
        if (!b){
            throw b;
        }
    //std::cout<<b<<" "<<!b<<std::endl;
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
    catch(bool b)
    {
        std::cout<<"Invalid dimensions passed"<<std::endl;
        mat res(row,col);
        return res;
    }
}

mat mat::operator-(mat m){
    try
    {
        bool b = row == m.row && col == m.col;
        if (!b){
            throw b;
        }
    //std::cout<<b<<" "<<!b<<std::endl;
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
    catch(bool b)
    {
        std::cout<<"Invalid dimensions passed"<<std::endl;
        mat res(row,col);
        return res;
    }
}


mat mat::operator*(mat m){
    if(col == m.row)
    {
        mat res(row,m.col);
        for(int i=0;i<row;i++)
        {
            std::vector<int> temp;
            for (int j=0;j<m.col;j++)
            {
                int sum = 0;
                for (int k=0;k<col;k++)
                {
                    sum += matrix[i][k]*m.matrix[k][j];
                }
                temp.push_back(sum);
            }
            res.matrix.push_back(temp);
        }
        return res;
    }
}

mat mat::operator*(float f){
    mat res(row,col);
    for (int i=0;i<row;i++){
        std::vector<int> temp;    
        for (int j=0;j<col;j++){
            temp.push_back(f*matrix[i][j]);
        }
        res.matrix.push_back(temp);
    }
    return res;        
}

mat mat::transpose(){
    mat res(col,row);
    for (int i=0;i<col;i++)
    {
        std::vector<int> temp;
        for (int j=0;j<row;j++)
            temp.push_back(matrix[j][i]);
        res.matrix.push_back(temp);
    }
    return res;
}

float mat::det(){
  
    if (row == col){
        if (row == 2)
            return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
        else{
            float res = 0;
            for(int i=0;i<col;i++){
                mat submat(row-1,col-1);
                for(int j=1;j<row;j++){
                    std::vector<int> temp;
                    for (int k=0;k<col;k++){
                        if (i == k)
                            continue;
                        temp.push_back(matrix[j][k]);
                    }
                    submat.matrix.push_back(temp);
                }
                res += (pow(-1,i)*matrix[0][i]*submat.det());
            }
            return res;
        }
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