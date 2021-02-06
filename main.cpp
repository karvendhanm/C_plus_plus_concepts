#include <iostream>
#include <vector>

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

class Pair {
    public:

        Pair(int x, int y) {
            a = x;
            b = y;
        }

    private:
        int a, b;
};

class sumPair:public Pair {
    public:
        int sum;
        sumPair(int n1, int n2) : Pair(n1, n2) {
            sum = n1 + n2;
        }
    private:
};





