#include "matrix.ih"

Matrix::Matrix(initializer_list<initializer_list<double> > iList)
{
    d_nRows = iList.size();
    auto *iRows = iList.begin();
    d_nCols = iRows->size();
    d_data = new double[d_nCols * d_nRows];
    double *dataPtr = d_data;

    for (auto *rowItr = iRows; rowItr != iRows + d_nRows; ++rowItr)
        if (rowItr->size() == d_nCols)
            for (double const * colItr = rowItr->begin();
                    colItr != rowItr->begin() + d_nCols;
                    ++colItr, ++dataPtr)
                *dataPtr = *colItr;
        else
        {
            cout << "Rows in initializer list have different sizes" << '\n';
            exit(1);
        }

}
