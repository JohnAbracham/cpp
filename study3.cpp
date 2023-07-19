/******************************************************************************
Условные операторы + тернарный оператор
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>

using namespace std;

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    char a;
    
    // Ввод значения
    cout << "Введите символ: " << endl;
    cin >> a;
    cout << "\n";
    
    //Реализация тернарного оператора
    cout << "Тернарный оператор:" << endl;
    string result = (a == 'a') ? "Вы ввели симол а!" : "Вы ввели символ, отличный от а!";
    cout << result << endl;
    cout << endl;
    
    //Условный оператор if
    cout << "Услонвый оператор if :\n"; 
    if (a == 'a'){
        cout << "Вы ввели символ а!" << endl;
    } else if (a == 'b'){
        cout << "Вы ввели символ b!" << endl;
    } else if(a == 'c' ) {
       cout << "Вы ввели символ c!" << endl; 
    } else {
        cout << "Вы ввели символ, отличающийся от символа a,b и c!" << endl;
    }
    cout << "\n";
    
    //Оператор выбора switch
    cout << "Услонвый оператор switch :" << endl; 
    switch(a){
        case 'a':
            cout << "Вы ввели символ а!" << endl;
            break;
        case 'b':
            cout << "Вы ввели символ b!" << endl;
            break;
        case 'c':
            cout << "Вы ввели символ c!" << endl;
            break;
        default:
            cout << "Вы ввели символ, отличающийся от символа a,b и c!" << endl;
    }

    return 0;
}
