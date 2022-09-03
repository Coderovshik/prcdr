#include <iostream>

int main()
{
    int b, c;

    std::cout << "given equation bx + c = 0\n";
    std::cout << "enter b & c coefficients: ";
    std::cin >> b >> c;

    if (b == 0)
        if (c == 0)
            std::cout << "any number fits the equation\n";
        else
            std::cout << "no solutins\n";
    else
        std::cout << -c / (float)b << '\n';

    return 0;
}