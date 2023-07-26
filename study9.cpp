/******************************************************************************
ООП - полиморфизм(виртуальные методы, перегрузка функций)
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>

using namespace std;

// Полиморфизм как возможность создавать виртуальные методы
// Создание родительского класса
class Foo{
    
    protected:
        int a;
        static int num;
        
    public:
        //Создание конструктора
        Foo(int _a) : a(_a) {
            cout << "[+] Create! " << "Numb is " << a <<"\n";
        }
        
        //Простой метод который выводит сообщение
        virtual void MSG() const {
            cout << "ORIGINAL\n";
            num++;
        }
        
        //Создание деструктора
        ~Foo(){
            cout << "[-] DEL\n";
        }
};

class Foo1 : public Foo {
    
    public:
    
        //Создание конструктора и передача родительскому классу аргумента 
        //Foo1(number) : a(number) {}
        Foo1(int n): Foo(n){
            
        }
        
        void outVal() const {
            cout << "a = " << a << "\nnum = " << num << endl;
        }
        
        void MSG() const override {
            cout << "CHILD\n";
        }
        
    
};

int Foo::num = 0;

void text();
void text(string );


int main()
{
    
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    Foo f(55);
    f.MSG();
    
    cout << "\n";
    
    Foo1 f1(25);
    f1.outVal();
    f1.MSG();
    
    cout << "\n";
    
    text();
    
    cout << "\n";
    
    text("Text in argument");
    
    cout << "\n";

    return 0;
}


void text(){
    cout << "Just text!\n";
}

void text(string txt){
    cout << txt << endl;
}
