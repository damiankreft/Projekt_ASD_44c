#include <iostream>
#include <vector>
#include "MergeSort.h"

using namespace std;

int* pom;

void mergeArrays(std::vector<int>& A, int left, int center, int right)
{
    int i = left, j = center + 1;

    for (int i = left; i <= right; i++)
    {
        pom[i] = A[i];
    }
    
    for (int k = left; k <= right; k++)
    {
        if (i <= center)
        {
            if (j <= right)
            {
                if (pom[j] < pom[i])
                {
                    A[k] = pom[j++];
                }
                else
                {
                    A[k] = pom[i++];
                }
            }
            else
            {
                A[k] = pom[i++];
            }
        }
        else
        {
            A[k] = pom[j++];
        }
    }
}

void __mergeSort(std::vector<int>& A, int left, int right)
{
    if (right <= left)
        return;

    int center = (right + left) / 2;

    __mergeSort(A, left, center);
    __mergeSort(A, center + 1, right);

    mergeArrays(A, left, center, right);
}

void mergeSort(std::vector<int>& A, int left, int right)
{
    pom = new int[A.size() - 1];
    __mergeSort(A, left, right);
}