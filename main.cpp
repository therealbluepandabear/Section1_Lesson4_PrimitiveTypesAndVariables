#include <iostream>

int main() {
    std::cout << "In this section we will look at the different types provided by the C++ type system.\n";

    std::cout << "C++ provides arithmetic types and void types.\n";

    std::cout << "Arithmetic types are integral and floating-point types.\n";
    std::cout << "Integral type examples include:\n";

    bool integral_type_one;
    char integral_type_two;
    wchar_t integral_type_three;
    char16_t integral_type_four;
    char32_t integral_type_five;
    short integral_type_six;
    int integral_type_seven;
    long integral_type_eight;

    std::cout << "Floating point types are represented through float and double\n";

    float example_1 = 0.5f;
    double example_2 = 0.5;

    return 0;
}
