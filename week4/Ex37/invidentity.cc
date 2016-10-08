void inv_identity(int (*rowPointer)[10])
{
    for (int rowCounter = 0; rowCounter < 10 ; ++rowCounter)
    {
        for (int colCounter = 0 ; colCounter < 10 ; ++colCounter)
            *(rowPointer[rowCounter] + colCounter) = rowCounter == colCounter ? 0 : 1;
    }
}
