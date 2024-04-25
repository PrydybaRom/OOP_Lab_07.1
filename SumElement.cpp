#include "SumElement.h"
#include <iostream>
#include <numeric>

int SumElement::sumOfEvenElements(const std::vector<int>& vec) {
    return std::accumulate(vec.begin(), vec.end(), 0, [](int sum, int elem) {
        return elem % 2 == 0 ? sum + elem : sum;
        });
}

void SumElement::printVector(const std::vector<int>& vec) {
    for (int elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
