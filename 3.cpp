#include <iostream>

int main()
{
    bool isDay, crtnsAreOpen, lampIsTrndOn;
    char answ1, answ2, answ3;
    std::cout << "Is it day?(Y/N)\n";
    std::cin >> answ1;
    std::cout << "Are curtains open?(Y/N)\n";
    std::cin >> answ2;
    std::cout << "Is lamp turned on?(Y/N)\n";
    std::cin >> answ3;

    isDay = answ1 == 'Y' ? true : false;
    crtnsAreOpen = answ2 == 'Y' ? true : false;
    lampIsTrndOn = answ3 == 'Y' ? true : false;

    if (lampIsTrndOn || crtnsAreOpen && isDay)
        std::cout << "It's light in the room.\n";
    else
        std::cout << "It's dark in the room.\n";

    return 0;
}