#include <chrono>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Algorithms/HeapSort2.h"
#include "Algorithms/BubbleSort.h"
#include "Algorithms/QuickSort.h"
#include "Input/InputReader.h"
#include "Algorithms/MergeSort.h"

using namespace std;

int main() {
    /// <summary>
    /// Load Input
    /// </summary>
    auto arr = readNumbers();

    /// <summary>
    /// Heap Sort
    /// </summary>
    auto start = std::chrono::high_resolution_clock::now();
    heapSort(arr);
    auto finish = std::chrono::high_resolution_clock::now();

    auto miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Heap Sort execution time(random input)" << miliseconds.count() << " ms\n" << endl;


    start = std::chrono::high_resolution_clock::now();
    heapSort(arr);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Heap Sort execution time(ordered input)" << miliseconds.count() << " ms\n" << endl;

    std::reverse(arr.begin(), arr.end());
    start = std::chrono::high_resolution_clock::now();
    heapSort(arr);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Heap Sort execution time(reverse ordered input)" << miliseconds.count() << " ms\n" << endl;



    /// <summary>
    /// Bubble sort
    /// </summary>
    arr = readNumbers();

    start = std::chrono::high_resolution_clock::now();
    bubbleSort(arr);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Bubble sort execution time(random input)" << miliseconds.count() << " ms\n" << endl;


    start = std::chrono::high_resolution_clock::now();
    bubbleSort(arr);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Bubble sort execution time(ordered input)" << miliseconds.count() << " ms\n" << endl;

    std::reverse(arr.begin(), arr.end());
    start = std::chrono::high_resolution_clock::now();
    bubbleSort(arr);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Bubble sort execution time(reverse ordered input)" << miliseconds.count() << " ms\n" << endl;



    /// <summary>
    /// Quick sort
    /// </summary>
    arr = readNumbers();

    start = std::chrono::high_resolution_clock::now();
    quickSort(arr, 0, arr.size() - 1);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Quick sort execution time(random input)" << miliseconds.count() << " ms\n" << endl;


    start = std::chrono::high_resolution_clock::now();
    quickSort(arr, 0, arr.size() - 1);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Quick sort execution time(ordered input)" << miliseconds.count() << " ms\n" << endl;

    std::reverse(arr.begin(), arr.end());
    start = std::chrono::high_resolution_clock::now();
    quickSort(arr, 0, arr.size() - 1);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Quick sort execution time(reverse ordered input)" << miliseconds.count() << " ms\n" << endl;


    /// <summary>
    /// Merge sort
    /// </summary>
    arr = readNumbers();

    start = std::chrono::high_resolution_clock::now();
    mergeSort(arr, 0, arr.size() - 1);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Merge sort execution time(random input)" << miliseconds.count() << " ms\n" << endl;


    start = std::chrono::high_resolution_clock::now();
    mergeSort(arr, 0, arr.size() - 1);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Merge sort execution time(ordered input)" << miliseconds.count() << " ms\n" << endl;

    std::reverse(arr.begin(), arr.end());
    start = std::chrono::high_resolution_clock::now();
    mergeSort(arr, 0, arr.size() - 1);
    finish = std::chrono::high_resolution_clock::now();

    miliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << "Merge sort execution time(reverse ordered input)" << miliseconds.count() << " ms\n" << endl;

}