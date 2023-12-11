#include <iostream>
int main()
{
    int p1 = 16;
    auto a = 12;
    decltype(p1) p2 = 10;
    std::cout << p2 << std::endl;
}