#include <vector>
#include <string>
#include <fstream>
#include "InputReader.h"

const std::string INPUT_NUMBERS_FILE_NAME = "numbers.txt";

std::vector<int> readNumbers()
{
    std::vector<int> numbers{ };

    std::string numberRead;
    std::ifstream file("numbers.txt");

    while (getline(file, numberRead)) {
        numbers.push_back(stoi(numberRead));
    }

    file.close();

    return numbers;
}