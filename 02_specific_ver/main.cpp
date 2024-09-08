// <numbers> introduced in C++20, so in cmake need to specfic cpp version to use.
// https://en.cppreference.com/w/cpp/header/numbers
#include <iostream>
#include <numbers>

int main(int argc, char *argv[])
{
    std::cout << std::numbers::pi << std::endl;
}