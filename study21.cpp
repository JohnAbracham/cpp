/******************************************************************************
Многопоточное программирование - condition_variable(блокировка потока до выполнения 
условия в другом потоке)
this_thread::sleep_for(chrono::seconds(2)); - задержка(!)
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <thread>
#include <mutex>
#include <condition_variable> // взаимодействие между потоками

using namespace std;

mutex mtx;
//объявить переменную этого типа
condition_variable cv;
// Условие, чтобы продолжить выполнение задачи в потоке
bool ready = false;

int param1 = 0;
double param2 = 0;


// Выполнить какое-либо действие и передать параметры
void f0(){

    //Создать задержку
    this_thread::sleep_for(chrono::seconds(5));

    unique_lock<mutex> lock(mtx);
    
    param1 = 42;
    param2 = 3.14;
    
    cv.notify_one();
}

//Проверить параметры и выполнить код

void f1(){
    
    cout << "Ожидание передачи параметров param1 и param2\n";
    
    unique_lock<mutex> lock(mtx);
    
    cv.wait(lock, []{ return param1 == 42 && param2 == 3.14;});
    
    cout << "Парметры param1 и param2 получены!\n";
    
}

/*void f(){
    //Создать задержку
    this_thread::sleep_for(chrono::seconds(2));
    
    cout << "Задержка в 2 сек прошла, передача параметра ready\n";
    
    // Аналогично lock unlock, но более универсально и предпочтительно
    unique_lock<mutex> lock(mtx);
    
    // Изменить состояние переменной для передачи
    ready = true;
    
    // Передать значение переменной
    cv.notify_one();
}*/


int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    //cout << "Привет мир!";
    
    // Создать поток
    //thread t1(f);
    thread t2(f0);
    thread t3(f1);
    
    //unique_lock<mutex> lock(mtx);
    
    //cv.wait(lock, [] { return ready; });
    
    cout << "Работа потока окончена!" << endl;
    
    //t1.join();
    t2.join();
    t3.join();

    return 0;
}
