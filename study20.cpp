/******************************************************************************
Многопоточное программирование
Класс в котором будут два метода и они вызываются либо через thread либо через async
*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>
#include <thread>
#include <mutex>
#include <chrono>
#include <future>
#include <cmath>
#include <array>


using namespace std;

mutex mtx;
string last;

// Класс интерфейс
class iFoo{
    public:
    
        //Функции для назгрузки
        virtual void func1() = 0;
        virtual void func2() = 0;
    
        // Функции выбора типа многопоточности
        virtual void mainThread() = 0;
        virtual void mainAsync() = 0;
};

// Основной класс реализация
class Foo: public iFoo{
    public:
        // Переменная для подсчета кол-ва объектов
        static int count;
        
        // Конструктор
        Foo(){
            cout << "[+] count = " << count++ << endl;
        }
        
        void func1() override {
            
            array<int, 400> a;
            
            for(int i = 0; i < 400; i++){
                a[i] = i*i;
            }
            
            mtx.lock();
            last = "f1";
            mtx.unlock();            
            
        }
        
        void func2() override {
            array<double, 400> a;
            
            for(int i = 0; i < 400; i++){
                a[i] = i /1000 + i/400;
            }
            
            mtx.lock();
            last = "f2";
            mtx.unlock();
            
        }
        
        void mainThread() override {
            // Начало
            auto start = chrono::high_resolution_clock::now();
            
            //Код
            thread t1(&Foo::func1,this);
            thread t2(&Foo::func2,this);
            
            t1.join();
            t2.join();
            
            // Конец
            auto end = chrono::high_resolution_clock::now();
            
            //Расчет времени выполнения
            chrono::duration<double> duration = end - start;
            
            //вывод результата
            cout << "Длительность выполнения(thread): " << duration.count() << " сек." << endl;
        }
        
        void mainAsync() override {
            // Начало
            auto start = chrono::high_resolution_clock::now();
            
            //Код
            future<void> t1 = async(&Foo::func1,this);
            future<void> t2 = async(&Foo::func2,this);
            
            // Конец
            auto end = chrono::high_resolution_clock::now();
            
            //Расчет времени выполнения
            chrono::duration<double> duration = end - start;
            
            //вывод результата
            cout << "Длительность выполнения(async): " << duration.count() << " сек." << endl;            
        }        
        
        // Деструктор
        ~Foo(){
            cout << "[-] count = " << --count << endl;
        }
    
};

int Foo::count = 0;


int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    
    //cout << "ООП";
    cout << "Объект 1, thread\n";
    Foo f1;
    f1.mainThread();
    cout << last << endl;
    cout << endl;

    cout << "Объект 2, async\n";
    Foo f2;
    f2.mainAsync();
    cout << last << endl;
    cout << endl;

    return 0;
}
