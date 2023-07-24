/******************************************************************************
Работа с классами(создание простого класса с возможными идентификаторами доступа, 
    + статические методы,
    + счетчик объектов,
    + конструктор и деструктор)
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>

using namespace std;

// Создание простого класса
class Player {
    
    private:
        // Имя
        string name;
        // Фамилия
        string lastName;
        // Возраст
        int age;
        // Переменная для подсчета кол-ва объектов класса
        static int numbers;
    
    public:
    
    //Конструкторы
    Player(){
        this->name = "John";
        this->lastName = "Smith";
        this->age = 32;
        this->numbers += 1;
    }
    Player(string _name){
        this->name = _name;
        this->lastName = "Smith";
        this->age = 32;
        this->numbers += 1;
    }
    Player(string _name, string _lastName){
        this->name = _name;
        this->lastName =_lastName;
        this->age = 32;
        this->numbers += 1;
        
    }
    Player(string _name, string _lastName, int _age){
        this->name = _name;
        this->lastName =_lastName;
        this->age = _age;
        this->numbers += 1;
    }
    
    // Вывод переменных
    void printData(){
        cout << "Name is: " << name << ",\nlast name is: " << lastName << ",\nage is: " << age << "." << endl;
    }
    
    //Метод класса, выводящий о чем этот класс
    static void classAbout(){
        cout << "This class just output a name, a last name and a age!(STATIC VOID)\n\n";
    }
    
    //Вывод номера объекта класса(если объектов много)
    static void number(){
        cout << "Count obj is: " << numbers << " (STATIC VOID)" << endl;
    }
    
    //Деструктор
    ~Player(){
        cout << "Все данные очищены! Класс под номером " << numbers <<  " удален!" << endl;
        numbers--;
    }
    
    
    protected:
    
};

// Обяхательное поле при создании статической переменной в классе
int Player::numbers = 0;

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    
    Player::classAbout(); // Обязательно обращаться через двое двоеточий к статическому методу класса
    
    //Создание первого объекта класса
    cout << "Создание первого объекта класса\n";
    Player pl1;
    pl1.printData();
    Player::number();
    
    cout << endl;
    
    //Создание второго объекта
    cout << "Создание второго объекта\n";
    Player pl2("Met");
    pl2.printData();
    Player::number();
    
    cout << endl;
    
    // Создание третьего объекта
    cout << "Создание третьего объекта\n";
    Player pl3("Alex", "Gyver");
    pl3.printData();
    Player::number();
    
    cout << endl;

    // Создание четвертого объекта
    cout << "Создание четвертого объекта\n";
    Player pl4("Sam", "Loloch", 45);
    pl4.printData();
    Player::number();
    
    cout << endl;
    
    return 0;
}
