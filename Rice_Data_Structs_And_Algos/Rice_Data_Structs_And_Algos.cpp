#include <iostream>
#include "RiceVector.h"

int main()
{
    std::cout << "---TESTING CUSTOM VECTORS---" << std::endl;

    RiceVector testVec1(0, 0);
    RiceVector testVec2(5, 1);
    RiceVector testVec3(10, 2);
    RiceVector testVec4(50, 3);
    RiceVector testVec5(100, 4);

    testVec1.print();
    testVec2.print();
    testVec3.print();
    testVec4.print();
    testVec5.print();

    std::cout << "---TESTING COMPLETE---" << std::endl;
}
