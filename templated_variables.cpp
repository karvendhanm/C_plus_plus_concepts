#include <iostream>

template <typename T>
T my_max(T a, T b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    std::cout << "my_max(4, 5): " << my_max(4, 5) << std::endl;
    std::cout << "my_max(\"Hello\", \"World\"): " << my_max(std::string("Hello"), std::string("World")) << std::endl;
    std::cout << "my_max('a', 'd'): " << my_max('a', 'd') << std::endl;
    return 0;
}

