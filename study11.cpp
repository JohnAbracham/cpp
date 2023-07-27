/******************************************************************************
ООП - шаблоны, перечисления, структуры
    . - доступ к члену созданного объекта класса или структуры 
    :: - для доступа к статическим членам класса или структуры, а также для доступа к членам вложенных классов
    -> - для доступа к членам класса или структуры при работе с указателями на объекты
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <typeinfo>

using namespace std;

// Простой шаблон функции
template <typename T>
T msg(T a){
    return a;
}

// Более сложный шаблон функции
template <typename T0, typename T1>
void msg1(T0 a, T1 b){
    cout << "type 1 is " << typeid(a).name() << endl;
    cout << "type 2 is " << typeid(b).name() << endl;
}

//Создание перечисления
enum Color{
    Red,
    Black,
    Green,
    Gray
};

//Создание структуры
struct Date{
    int day;
    int month;
    int year;
};

struct Employee{
    std::string name;
    int employeeId;    
    Date hireDate;  // Вложенная структура
};

void msg2();

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    Color setColor = Green;
    
    if(setColor == Green){
        cout << "Color is green\n";
    } else {
      cout << "Color is not green\n";  
    }
    cout << "Color is " << setColor << endl; 
    //Вывод true когд типы одинаковые
    cout << is_same<int, double>::value << endl;
    
    cout<<"Привет мир!\n" << msg("Hello") << endl;
    msg1("Hello world", 55);
    
    cout << endl;
    
    msg2();

    return 0;
}

void msg2(){
    Employee employee1;
    employee1.name = "John Doe";
    employee1.employeeId = 12345;
    employee1.hireDate.day = 15;
    employee1.hireDate.month = 7;
    employee1.hireDate.year = 2023;
    
    cout << "Name: " << employee1.name << endl;
    cout << "Employee ID: " << employee1.employeeId << endl;
    cout << "Hire Date: " << employee1.hireDate.day << "." << employee1.hireDate.month << "." << employee1.hireDate.year << endl;
}
