#include <iostream>
#include <vector>

#include "arrays.h"
#include "uiuc/Cube.h"

using uiuc::Cube;
using uiuc::HSLAPixel;

//template <typename Type>
//Type max(Type a, Type b) {
//    return (a > b) ? a : b;
//}
//
//int main() {
////    int c = max(4, 5);
//    int c = max<double>(4, 5);
//    std::cout << "the value of c is: " << c << std::endl;
//    std::cout << "the program reached here" << std::endl;
//    return 0;
//}


//template <typename Type>
//Type max(Type a, Type b) {
//    return (a > b) ? a : b;
//}
//
//class Just_a_double {
//public:
//    double num;
//};
//
//int main() {
//    Just_a_double a,b;
//    a.num = 5.0;
//    b.num = 10.0;
//    double c = max(a.num, b.num);
//    std::cout << "the value of c is: " << c << std::endl;
//    return 0;
//}

//class Pair {
//    public:
//        double a, b;
//        Pair(double x, double y) {
//            a = x;
//            b = y;
//        }
//};
//
//class equalPair : public Pair {
//    public:
//        bool isequal;
//        equalPair(double a, double b) : Pair(a, b) {
//            isequal = (a == b);
//        }
//};
//
//int main() {
//    equalPair ep(4.0, 5.0);
//    std::cout << ep.isequal << std::endl;
//    return 0;
//}

//class Just_a_double {
//    public:
//        double a;
//
//        Just_a_double() {
//            a = 1;
//        }
//        Just_a_double(double x) {
//            a = x;
//        }
//};

//class Just_a_double {
//public:
//    double a;
//
//    Just_a_double() : Just_a_double(0) {}
//    Just_a_double(double x) : a(x) {}
//};
//
//int main() {
//    Just_a_double obj;
//    std::cout << obj.a << std::endl;
//    Just_a_double obj1(5);
//    std::cout << obj1.a << std::endl;
//    return 0;
//}

//class Pair {
//    public:
//
//        Pair(int x, int y) {
//            a = x;
//            b = y;
//        }
//
//    private:
//        int a, b;
//};
//
//class sumPair:public Pair {
//    public:
//        int sum;
//        sumPair(int n1, int n2) : Pair(n1, n2) {
//            sum = n1 + n2;
//        }
//    private:
//};


// The below main is used to access arrays.h arrays.cpp
int main() {

    int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < 10; i++) {
        std::cout << "the value is: " << values[i] << std::endl;
        std::cout << "the address is: " << &values[i] << std::endl;
    }

    // size calculation:
    std::cout << "The size of the array 'values' is: " << sizeof(values) << " bytes" << std::endl;
    std::cout << (&values[6]) << std::endl;
    std::cout << (&values[0]) << std::endl;
    // sizeof tells us how many bytes something is occupying.
    std::cout << "one: " << sizeof((&values[4]) - (&values[0])) << std::endl;
    std::cout << "two: " << sizeof((&values[6]) - (&values[0])) << std::endl;
    std::cout << "size of an integer: " << sizeof(int) << std::endl;
    std::cout << "size of a long: " << sizeof(long) << std::endl;
    std::cout << "size of a float: " << sizeof(float) << std::endl;
    std::cout << "size of a long long: " << sizeof(long long) << std::endl;
    std::cout << "size of a long long int: " << sizeof(long long int) << std::endl;
    std::cout << "size of a char: " << sizeof(char) << std::endl;

    std::cout << "\nHere starts the experiment with data type" << std::endl;
    std::cout << (&values[6]) << std::endl;

    // Here simply hexadecimal number is cast into integer. Since the address is too large, we use long long int instead.
    std::cout << (long long)(&values[6]) << std::endl;
    std::cout << (long long)(&values[0]) << std::endl;
    std::cout << (long long)(&values[6]) - (long long)(&values[0]) << std::endl;

//    long long var_ = long long(&values[6]) - long long(&values[0]);
//   std::cout << "The var value is: " <<var_ << std::endl;

    return 0;
}
