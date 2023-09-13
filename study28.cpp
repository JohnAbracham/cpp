/******************************************************************************
array - статический массив
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <array>

using namespace std;

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    array<int, 5> arr = {1,2,3,4,5};
    
    //Обычное, с возможностью ошибки, обращение
    cout << arr[2] << endl;
    //Защищенное обращение
    cout << arr.at(2) << endl;
    
    /*
    //Обработка исключений, в случае выхода за границы массива
    try{
        cout << arr.at(11) << endl;
    }
    catch (const exception& ex){
        cout << ex.what() << endl;
    }*/
    
    cout << endl;
    
    for(auto el : arr){
        cout << el << endl;
    } 
    
    cout << endl;
    
    //Заполнить определенными значениями
    arr.fill(-1);
    
    
    for(int i = 0; i < arr.size(); i++){
        cout << arr.at(i) << endl;
    }
    
    cout << endl;
    
    // Получить первый и последний элемент
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    
    //cout << "Привет мир!";

    return 0;
}
