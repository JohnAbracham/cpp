/******************************************************************************
Многопоточность atomic
*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>
#include <thread>
#include <atomic>


using namespace std;

atomic<int> val;

void f1(){
    // store() - Атомарная запись значения в переменную
    val.store(55);
    // load() - Атомарное чтение значения переменной
    cout << "val = " << val.load() << endl;
    // exchange() - Замена значения переменной и возврат предыдущего значения
    cout << "Старое значение val = " << val.exchange(99) << " и новое значение val = " << val.load() << endl;
    // fetch_add() - Атомарное увеличение переменной на заданное значение
    val.fetch_add(5);
    cout << "Атомарное увеличение на 5, val = " << val.load() << endl;
    // fetch_sub() - Атомарное уменьшение переменной на заданное значение
    val.fetch_sub(9);
    cout << "Атомарное уменьшение на 9, val = " << val.load() << endl;
    // fetch_and() - Атомарная операция "И" над значением переменной и заданным значением
    cout << "Сначала выводит, а потом применяет операцию, поэтому см дальше на значение"
    cout << "Атомарная операция \"И\" " << val.fetch_and(15) << endl;
    // fetch_or() - Атомарная операция "ИЛИ" над значением переменной и заданным значением
    cout << "Атомарная операция \"ИЛИ\" " << val.fetch_or(25) << endl;
    // fetch_xor() - Атомарная операция "ИСКЛЮЧАЮЩЕЕ ИЛИ" над значением переменной и заданным значением
    cout << "Атомарная операция \"ИЛИ НЕ\" " << val.fetch_xor(11) << endl;
    
    // compare_exchange_strong() - Атомарная проверка и обмен значения переменной
    cout << "Обмен переменными" << endl;
    int expectedValue = 20; // обмен выполниться в случае если ожидаемое значение верно
    int newValue = 88;
    bool exchangeResult = val.compare_exchange_strong(expectedValue, newValue);
        if (exchangeResult) {
        cout << "Обмен успешен, значение: " << val.load() << endl;
    } else {
        cout << "Обмен не выполнен, значение: " << val.load() << endl;
    }
}

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    //cout << "Hello World";
    
    thread t1(f1);
    //thread t2(f1);
    
    t1.join();
    //t2.join();
    

    return 0;
}
