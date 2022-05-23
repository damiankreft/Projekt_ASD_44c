#include <vector>
#include "BubbleSort.h"

void bubbleSort(std::vector<int>& arr)
{
    for (int j = 0; j < arr.size(); j++)
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}