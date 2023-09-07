/******************************************************************************
Работа с вектором и его итератором
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ru_RU.UTF-8");

    //Создать вектор
    vector<int> arr;
    //vector<float>::iterator iter_arr;

    //Заполняем вектор    
    for(int i = 0; i < 25; i++){
        arr.push_back(i);
    }
    
    cout << "В прямом порядке\n";
    
    //Выводим значения через константный итератор
    for(vector<int>::const_iterator i = arr.cbegin(); i != arr.cend(); i++){
        cout << *i << endl;
    }
    
    cout << "В обратном порядке\n";
    
    //Тоже самое тольтко в обратном порядке
    for(vector<int>::reverse_iterator i = arr.rbegin(); i != arr.rend(); i++){
        cout << *i << endl;
    }

    return 0;
}
