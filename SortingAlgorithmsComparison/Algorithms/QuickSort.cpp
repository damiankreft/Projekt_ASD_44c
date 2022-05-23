#include <vector>
#include "QuickSort.h"

int partition(std::vector<int>& input, int p, int r)
{
	int lastValue = input[r];
	int i = p - 1;

	for (p; p < r; p++)
	{
		if (input[p] <= lastValue)
		{
			i++;

			int temp = input[i];
			input[i] = input[p];
			input[p] = temp;
		}
	}

	auto temp = input[i + 1];
	input[i + 1] = input[r];
	input[r] = temp;

	return i + 1;
}

void quickSort(std::vector<int>& input, int p, int r)
{
	if (p < r)
	{
		auto q = partition(input, p, r);
		quickSort(input, p, q - 1);
		quickSort(input, q + 1, r);
	}
}