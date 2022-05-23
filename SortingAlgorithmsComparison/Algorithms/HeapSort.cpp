#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "HeapSort2.h"
using namespace std;

void maxHeapify(std::vector<int>& arr, int currentSize, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < currentSize && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (right < currentSize && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        maxHeapify(arr, currentSize, largest);
    }
}

void buildMaxHeap(std::vector<int>& arr)
{
    int arrayInitialSize = arr.size();

    for (int i = arrayInitialSize / 2 - 1; i >= 0; i--)
    {
        maxHeapify(arr, arrayInitialSize, i);
    }
}

void heapSort(std::vector<int>& arr)
{
    int size = arr.size();
    buildMaxHeap(arr);

    for (int i = size - 1; i >= 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        maxHeapify(arr, i, 0);
    }
}