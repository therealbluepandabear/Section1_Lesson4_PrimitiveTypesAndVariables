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

    std::cout << "Void is a special type only used in special cases, for example with pointers and functions.\n";

    std::cout << "C++ also provides modifiers that help modify the meaning of the t ype, for example:\n";

    signed int x = 5;
    unsigned int x_ = 5;
    short int _x = 5;
    long int xx = 5;

    std::cout << "Signed and unsigned modifiers can only be used on integrals - not on floating point types.\n";

    std::cout << "All types can be qualified with something called a qualifier, for example 'const', 'volatile', or 'static'.\n";

    std::cout << "All the types occupy memory and can hold a range of values. The memory requirement of the type depends on the requirement of the platform.\n";

    std::cout << "On a 16-bit platform, an integer may require 16 bits of memory, while on a 32-bit platform it may require 32 bits of memory.\n";

    std::cout << "Boolean and char types require only a single byte in memory. While wchar_t and short require two bytes in memory.\n";

    std::cout << "Wchar_t is a wide character used to represent characters that require more memory to present them than a regular char.\n";

    std::cout << "Int, long, and float require four bytes of memory\n";


    return 0;
}
