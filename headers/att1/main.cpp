
#include <iostream>
#include <string>
#include "header.h"

using namespace std;

int main()
{
    Player pl;
    
    pl.SetValue(156);
    
    cout << pl.GetValue() << endl;
    
    pl.PrintText("Hello world!");

    return 0;
}
