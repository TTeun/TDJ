#include "matrix.ih"

typedef initializer_list<double> const il;

Matrix::Matrix(initializer_list<initializer_list<double> > iList)
{
    d_nRows = iList.size();
    il *iRows = iList.begin();
    d_nCols = iRows->size();
    d_data = new double[d_nCols * d_nRows];
    double *dataPtr = d_data;

    for (il *rowItr = iRows; rowItr != iRows + d_nRows; ++rowItr)
        if (rowItr->size() == d_nCols)
            for (double const *colItr = &*rowItr->begin();
                    colItr != rowItr->begin() + d_nCols; )
                *dataPtr++ = *colItr++;
        else {
            cout <<
                 "Rows in initializer list have different sizes"
                 << '\n';
            exit(1);
        }
}
