/******************************************************************************
ООП - интерфес
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>

using namespace std;

//Создание интерфейса
class Foo{
    
    public:
    
        //создание абстрактных методов
        virtual void add() const = 0;
        virtual void msg() const = 0;
        virtual void logs() = 0;
};

class Foo1: public Foo {
    
    public:
    
        //Определение абстрактных методов
        void add() const override {
            cout << "add()\n";
        }
    
        void msg() const override {
            cout << "msg()\n";
        }
        void logs() override {
            cout << "logs()\n";
        }
};

int main()
{
    
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    int a = 234;
    int* b = &a;
    
    Foo1 f1;
    f1.add();
    cout << "\n";
    f1.msg();
    cout << "\n";
    f1.logs();
    cout << "\n";
    
    
    //просто попробовал ссылки
    cout << "Addres a is " << &a << endl;
    cout << "Addres b is " << &b << endl;
    cout << "Value a is " << a << endl;
    cout << "Value b is " << b << endl;
    return 0;
}

