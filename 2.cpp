#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;

    std::cout << "given equation ax^2 + bx + c = 0\n";
    std::cout << "enter a, b & c coefficients: ";
    std::cin >> a >> b >> c;

    if (a == 0)
        if (b == 0)
            if (c == 0)
                std::cout << "any number fits the equation\n";
            else
                std::cout << "no solutins\n";
        else
            std::cout << -c / (float)b << '\n';
    else
    {
        float d = pow(b, 2) - 4 * a * c;
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << "x1: " << x1 << ' ' << "x2: " << x2 << '\n';
    }

    return 0;
}