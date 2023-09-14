/******************************************************************************
Контейнеры STL(перегрузка оператора сравнения)
*******************************************************************************/

#include <iostream>
#include <array>

using namespace std;

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    //cout << "Привет мир!";
    
    array<int, 4> arr1 = {1,2,3,4};
    array<int, 4> arr2 = {1,2,3,5};

    //Возможно реализовать, если оператор перегружен в классе
    bool result = (arr1 == arr2);
    bool result = (arr1 != arr2);
    bool result = (arr1 > arr2);
    bool result = (arr1 < arr2);
    
    cout << result << endl;


    return 0;
}
