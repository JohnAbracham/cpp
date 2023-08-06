/******************************************************************************
Калькулятор консольный
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>

using namespace std;

//Основной интерфейс
class Calculator{
    public:
        // Сложение
        virtual void addition() const = 0;
        // Вычетание
        virtual void subtraction() const = 0;
        // Умножение
        virtual void multiplication() const = 0;
        // Деление
        virtual void division() const = 0;
        // Деление с остатком
        //virtual void divisionWithRemainder() const = 0;
};

class Cal : public Calculator {
    
    public:
        // Название калькулятора
        string name;
        // Итоговый результат
        float result;
        // Вводимые числа 1 и 2
        float f1, f2;
        // Переменная для выбора функции операторов 
        int num;
        // Если число не соответствует диапазону возможных функций
        bool varning;
        
        Cal(string nm) : name(nm) {
            cout << "Название калькулятора - " << name << endl; 
        };
        
        // Основная функция для ввода
        void getVal(){
            varning = false;
            while(!varning){
                cout << "Выбери номер функции:\n";
                cout << "[1] Сложение\n";
                cout << "[2] Вычетание\n";
                cout << "[3] Умножение\n";
                cout << "[4] Деление\n";
                cout << "[5] Деление с остатком\n";
                cin >> num;
                if (num > 0 and num <= 5){
                    varning = true;
                    getSwitch(num);
                } else{
                    cout << "Функции под таким номером нету, введите еще раз!\n";
                }
            }
            
        };
        
        // Основная функция для выбора функции
        void getSwitch(int _num){
            
            bool yes = false;
            char ch = 'f';
            
            switch(_num){
                
                case 1:
                    
                    while(!yes){
                        cout << "Вы выбрали функцию сложения, \nвведите число 1:\n";
                        cin >> f1;
                        cout << "введите число 2:\n";
                        cin >> f2;
                        cout << "Ваше 1 число равно - " << f1 << ", число 2 равно - " << f2 << endl;
                        cout << "Все верно ? (y - да, n или прочий символ - нет):\n";
                        cin >> ch;
                        if(ch == 'y'){
                            yes = true;
                            addition();
                        } else {
                            cout << "Введите заново\n";
                        }
                    }
                    break;
                
                case 2:
                
                    while(!yes){
                        cout << "Вы выбрали функцию вычетание, \nвведите число 1:\n";
                        cin >> f1;
                        cout << "введите число 2:\n";
                        cin >> f2;
                        cout << "Ваше 1 число равно - " << f1 << ", число 2 равно - " << f2 << endl;
                        cout << "Все верно ? (y - да, n - нет):\n";
                        cin >> ch;
                        if(ch == 'y'){
                            yes = true;
                            subtraction();
                        } else {
                            cout << "Введите заново\n";
                        }
                    }
                
                    break;
                case 3:
                
                    while(!yes){
                        cout << "Вы выбрали функцию умножения, \nвведите число 1:\n";
                        cin >> f1;
                        cout << "введите число 2:\n";
                        cin >> f2;
                        cout << "Ваше 1 число равно - " << f1 << ", число 2 равно - " << f2 << endl;
                        cout << "Все верно ? (y - да, n - нет):\n";
                        cin >> ch;
                        if(ch == 'y'){
                            yes = true;
                            multiplication();
                        } else {
                            cout << "Введите заново\n";
                        }
                    }
                
                    break;
                case 4:
                
                    while(!yes){
                        cout << "Вы выбрали функцию деления, \nвведите число 1:\n";
                        cin >> f1;
                        cout << "введите число 2:\n";
                        cin >> f2;
                        cout << "Ваше 1 число равно - " << f1 << ", число 2 равно - " << f2 << endl;
                        cout << "Все верно ? (y - да, n - нет):\n";
                        cin >> ch;
                        if(ch == 'y'){
                            yes = true;
                            division();
                        } else {
                            cout << "Введите заново\n";
                        }
                    }
                
                    break;
                case 5:

                    while(!yes){
                        cout << "Вы выбрали функцию деления с остатком, \nвведите число 1:\n";
                        cin >> f1;
                        cout << "введите число 2:\n";
                        cin >> f2;
                        cout << "Ваше 1 число равно - " << f1 << ", число 2 равно - " << f2 << endl;
                        cout << "Все верно ? (y - да, n - нет):\n";
                        cin >> ch;
                        if(ch == 'y'){
                            yes = true;
                            //divisionWithRemainder();
                        } else {
                            cout << "Введите заново\n";
                        }
                    }

                    break;
            }  
        };
        
        
        // Сложение
        void addition() const override {
            cout << "Выше результат равен: " << f1 << " + " << f2 << " = " << f1+f2 << endl;
        };
        
        // Вычетание
        void subtraction() const override {
            cout << "Выше результат равен: " << f1 << " - " << f2 << " = " << f1-f2 << endl;
        };
        
        // Умножение
        void multiplication() const override {
            cout << "Выше результат равен: " << f1 << " * " << f2 << " = " << f1*f2 << endl;
        };
        
        // Деление
        void division() const override {
            cout << "Выше результат равен: " << f1 << " / " << f2 << " = " << f1/f2 << endl;
        };
        
        // Деление с остатком
        //void divisionWithRemainder() const override {
        //    cout << "Выше результат равен: " << f1 << " % " << f2 << " = " << f1%f2 << endl;
        //};
};



int main()
{
    Cal cal1("Калькулятор консольный");
    
    cal1.getVal();

    return 0;
}
