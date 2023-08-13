/******************************************************************************
Многопоточность начало(thread, mutex)
*******************************************************************************/

#include <iostream>
#include <thread>
#include <clocale> 
#include <chrono>
#include <mutex>

using namespace std;

mutex mtx;

//Функция для демонстрации работы мютикса
void printNumbers(int from, int to) {
    for (int i = from; i <= to; ++i) {
        //mtx.lock(); // Захват мьютекса
        std::cout << i << " \n";
        //mtx.unlock(); // Освобождение мьютекса
    }
}

// Функция пример чтобы замерить время выполнения блока кода
void f(){
    // Захват времени перед выполнением блока кода
    auto start = std::chrono::high_resolution_clock::now();
    
    int a;
    
    // Ваш блок кода, время выполнения которого вы хотите измерить
    for (int i = 0; i < 1000000; ++i) {
        a += i;
    }
    
    // Захват времени после выполнения блока кода
    auto end = std::chrono::high_resolution_clock::now();
    
    // Вычисление разницы времени
    std::chrono::duration<double> duration = end - start;
    
    // Вывод времени выполнения в секундах
    std::cout << "Время выполнения: " << duration.count() << " секунд" << std::endl;
}

// Функция 1
void func(int a){
    cout << "Привет мир!\n";
}

// Функция 2
void func1(){
    cout << "Привет мир!!!!\n";
}

int main()
{
    
    setlocale(LC_ALL,"RU");
    
    //Создать поток 1
    //thread t1(func, 10);
    
    // Создать поток 2
    //thread t2(func1);
    
    //Пример использования мютикс
    thread t3(printNumbers,0,10);
    thread t4(printNumbers,0,15);
    t3.join();
    t4.join();
    
    // Ожидание завершения поток 1
    //t1.join();
    // Ожидание завершения потока 2
    //t2.join();
    
    // Функция с возможностью измерить время выполнения
    //f();
    //t1.detach(); // Принудительно завершить поток после выполнения главного потока

    return 0;
}
