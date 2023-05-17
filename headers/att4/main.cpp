
#include <iostream>
#include <string>
#include <limits>
//#include "header.h"

using namespace std;

int main()
{
    
    setlocale(LC_ALL, "rus");
    
    float f = 10.3f;
    double d = 45.67;
    int i = 33;
    short s = 55;
    long l = 44;
    long long ll = 555;
    bool b = false;
    
    //cout << "Привет мир!\n" << endl;
    
    cout << "numeric_limits<int>::max() is : " << numeric_limits<int>::max() << endl;
    cout << "numeric_limits<double>::max() is : " << numeric_limits<double>::max() << endl;
    cout << "numeric_limits<bool>::max() is : "  << numeric_limits<bool>::max() << endl;
    cout << "numeric_limits<long double>::max() is : " << numeric_limits<long double>::max() << endl;
    cout << "numeric_limits<short>::max() is : " << numeric_limits<short>::max() << endl;
    cout << "numeric_limits<float>::max() is : " << numeric_limits<float>::max() << endl;
    cout << endl;
    cout << "numeric_limits<int>::min() is : " << numeric_limits<int>::min() << endl;
    cout << "numeric_limits<double>::min() is : " << numeric_limits<double>::min() << endl;
    cout << "numeric_limits<bool>::min() is : " << numeric_limits<bool>::min() << endl;
    cout << "numeric_limits<long double>::min() is : " << numeric_limits<long double>::min() << endl;
    cout << "numeric_limits<short>::min() is : " << numeric_limits<short>::min() << endl;
    cout << "numeric_limits<float>::min() is : " << numeric_limits<float>::min() << endl;

    return 0;
}
