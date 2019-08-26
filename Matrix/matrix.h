class mat{
    int row,col;
    std::vector<std::vector<int>> matrix;

    public:
        mat(int row,int col);

        void createmat();
        void dispmat();

        mat operator +(mat m);
        mat operator -(mat m);
        mat operator *(mat m);
        mat transpose();

};