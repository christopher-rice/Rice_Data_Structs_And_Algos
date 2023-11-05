#include <iostream>
#include "RiceVector.h"

int main()
{
    std::cout << "---TESTING CUSTOM VECTORS---" << std::endl;

    RiceVector testVec1(1, 1);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.pushBack(2);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.pushBack(3);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.pushBack(4);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    testVec1.pushBack(5);

    std::cout << "(" << testVec1.getSize() << ", " << testVec1.getCapacity() << "): ";
    testVec1.print();

    std::cout << "---TESTING COMPLETE---" << std::endl;
}
