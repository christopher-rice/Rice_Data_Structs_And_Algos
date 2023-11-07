#include <iostream>
#include "RiceVector.h"

int main()
{
    std::cout << "---TESTING CUSTOM VECTORS---" << std::endl;

    RiceVector testVec1(1, 5);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.insert(1, 4);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.insert(1, 3);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.insert(1, 2);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.insert(1, 1);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    std::cout << "---TESTING COMPLETE---" << std::endl;
}
