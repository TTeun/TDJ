void inv_identity(int (*row)[10]) {
    for (int (*rowp)[10] = row; rowp != row + 10; ++rowp) {
        for (int *colp = *rowp, *colMid = *rowp + (rowp - row);
                                    colp != *rowp + 10; ++colp)
            *colp = (colp == colMid) ? 0 : 1;
    }
}
