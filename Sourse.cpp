#include <iostream>
#include <vector>
#include "SumElement.h"

int main() {
    std::vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << " Vector: ";
    SumElement::printVector(vec);

    int sum = SumElement::sumOfEvenElements(vec);
    std::cout << " Sum Of Even Elements: " << sum << std::endl;

    return 0;
}
