#include <bits/stdc++.h>
#include <iostream>
int main()
{
    std::cout << "install the steam?(Y/N)";
    char input;
    std::cin >> input;
    bool Yes;
    Yes = (input == ("Y" or "y"));
    if (Yes)
        system("winget install --id Valve.Steam -i");
    else
        std::cout << "what will you install";
        char input2;
        std::cin >> input2;
        system("winget install "+input2);
    return 0;
}