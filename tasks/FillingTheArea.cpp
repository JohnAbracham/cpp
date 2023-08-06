/******************************************************************************
Программа заливки области
Пример задачи:
**********
* 0000000*
* 0000000*
* 0000000*
* ********
*******************************************************************************/

#include <iostream>
#include <string>

// Ширина и высота области
#define HEIGH 10
#define WIDHT 20

using namespace std;

class iFull{
    public:
        // Функция для заливки
        virtual void full() = 0;
        // Получить колличество объектов
        virtual void getCount() = 0;
        // Установить символы
        virtual void setSymbol(char, char) = 0;
};

class Full: public iFull {
    public:
        // Заголовок программы
        string title;
        // Символы заливки
        char s1,s2;
        // Счетчик объектов
        static int count;
        
        // Задать заголовок программы
        Full(string str) : title(str){
            cout << "[+] " << title << endl;
            count++;
        }
        
        // Установить символы 
        void setSymbol(char _symb1, char _symb2) override {
            
            this->s1 = _symb1;
            this->s2 = _symb2;
            
            cout << "[+] Символ 1 - " << s1 << "\n[+] Символ 2 - " << s2 << endl;;
        }
        
        // Функция для заливки 
        void full() override {
            cout << "Параметры заливки:\n" << "[1] Ширина w = " << WIDHT << "\n[2] высота h = " << HEIGH << endl;
            cout << endl;
            //Высота
            for(int i = 0; i < HEIGH; i++){
                for(int j = 0; j < WIDHT;j++){
                    if(i == 0 or j == 0) {
                        cout << s1;
                    }
                    else if(i == (HEIGH - 1) or j == (WIDHT - 1)) {
                        cout << s1;
                    } else {
                        cout << s2;
                    }
                }
                cout << endl;
            }
            
        }
        
        // Получить колличество объектов
        void getCount() override {
            cout << "Количество созданных объектов равно: " << count << endl;
        }
        
        
        // Деструктор
        ~Full(){
            cout << "[-] Del (" << count << ")" << endl;
            count--;
        }
};


int Full::count = 0;

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    Full f1("Заливатель");
    
    cout << endl;
    
    f1.getCount();
    
    cout << endl;
    
    f1.setSymbol('X','S');
    
    cout << endl;
    
    f1.full();
    
    cout << endl;

    return 0;
}
