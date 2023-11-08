#include <iostream>
#include "RiceVector.h"

int main()
{
    std::cout << "---TESTING CUSTOM VECTORS---" << std::endl;

    RiceVector testVec1;

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.insert(3, 0);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.insert(1, 0);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.insert(5, 2);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.insert(2, 1);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.insert(4, 3);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    for (int i = 0; i < testVec1.getSize(); i++)
    {
        std::cout << testVec1.at(i) << std::endl;
    }

    std::cout << "---TESTING COMPLETE---" << std::endl;
}
