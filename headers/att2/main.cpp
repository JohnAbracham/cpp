
#include <iostream>
#include <string>
#include "header.h"

using namespace std;

int main()
{
    Player<string> pl("Hello world!");
    std::cout << pl.GetValue() << std::endl;
    pl.PrintText();

    return 0;
}
