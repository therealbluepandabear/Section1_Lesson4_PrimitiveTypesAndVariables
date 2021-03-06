#include <iostream>
#include <vector>
#include <cmath>

bool IsPrime(int param);

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

    std::cout << "Int, long, and float require four bytes of memory.\n";

    std::cout << "Long long, double, and long double require eight bytes of memory.\n";

    std::cout << "The minimum and maximum value of a type can hold is called its range.\n";

    std::cout << "The typical byte width of a char is 1 byte. While its typical range is -128 to 127.\n";

    std::cout << "The typical byte width of an unsigned char is 1 byte. While its typical range is 0 to 255.\n";

    std::cout << "The typical byte width of an int is 4 bytes. While its typical range is -2147483648 to 2147483647.\n";

    std::cout << "The typical byte width of an unsigned int is 4 bytes. While its typical range is 0 to 4294967295.\n";

    std::cout << "The typical byte width of a signed int is 4 bytes. While its typical range is -2147483648 to 2147483647.\n";

    std::cout << "The typical byte width of a short int is 2 bytes. While its typical range is -32769 to 32767.\n";

    std::cout << "The typical byte width of an unsigned short int is 2 bytes. While its typical range is 0 to 65535.\n";

    std::cout << "The typical byte width of a signed short int is 2 bytes. While its typical range is -32769 to 32767.\n";

    std::cout << "The typical byte width of a long int is 4 bytes. While its typical range is -2147483648 to 2147483647.\n";

    std::cout << "The typical byte width of an unsigned long int is 4 bytes. While its typical range is 0 to 4294967295.\n";

    std::cout << "The typical byte width of a float is 4 bytes. While its typical range is +/- 3.4e +/- 38 (7 digits).\n";

    std::cout << "The typical byte width of a double is 8 bytes. While its typical range is +/- 1.7e +/- 308 (15 digits).\n";

    std::cout << "The typical byte width of a long double is 8 bytes. While its typical range is +/- 1.7e +/- 308 (15 digits).\n";

    std::cout << "The typical byte width of wchar_t is 2 or 4 bytes. While its range is 1 wide character.\n";

    std::cout << "You can include the <climits> header file which provides different types of macros which provide the minimum and maximum value of a type.\n";

    std::cout << "We could also use <cfloat> (or float.h).\n";

    std::cout << "To use a type, you must declare its variable. A variable is declared by specifying a type followed by a variable name e.g., int I or float x.\n";

    std::cout << "Variables are called identifiers.\n";

    std::cout << "Multiple variables can be declared with the same type e.g., int a, b, c:\n";

    int a, b, c;

    int y, z;

    std::cout << "You may also initialize variables - the value that is used is called the initializer which is not always required.\n";

    int initializerVariable = 5;

    std::cout << "Do note - some compilers may not allow read operations from uninitialized variables.\n";




    return 0;
}
