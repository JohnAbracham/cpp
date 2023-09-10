/******************************************************************************
Префикс и постфикс
*******************************************************************************/

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    int i = 0;
    
    cout << "Префикс\n";
    
    cout << "++i: " << ++i << endl;;
    cout << "i: " << i << endl;
    
    i = 0;
    
    cout << "Постфикс\n";
    
    cout << "i++: " << i++ << endl;;
    cout << "i: " <<i << endl;

    return 0;
}
