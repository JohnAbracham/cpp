/******************************************************************************
Потоки thread, async + chrono
*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>
#include <thread>
#include <mutex>
#include <future> //async
#include <chrono>

using namespace std;

mutex mtx; // .lock()/unlock()
string last;

void f1(){
    // Захват времени перед выполнением блока кода
    auto start = chrono::high_resolution_clock::now();
    
    //Название
    cout << "f1\n";
    int m = 0;
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            m += j;
        }
    }
    
    cout << "f1 m = " << m << endl;
    
    mtx.lock();
    last = "f1";
    mtx.unlock();
    
    // Захват времени после выполнения блока кода
    auto end = chrono::high_resolution_clock::now();
    
    // Вычисление разницы времени
    chrono::duration<double> duration = end - start;
    
    // Вывод времени выполнения в секундах
    cout << "f1 duration - "<< duration.count() << endl;
}

void f2(){
    
    // Захват времени перед выполнением блока кода
    auto start = chrono::high_resolution_clock::now();
    
    //Название
    cout << "f2\n";
    int m = 0;
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            m -= j;
        }
    }
    
    cout << "f2 m = " << m << endl;
    
    mtx.lock();
    last = "f2";
    mtx.unlock();
    
    // Захват времени после выполнения блока кода
    auto end = chrono::high_resolution_clock::now();
    
    // Вычисление разницы времени
    chrono::duration<double> duration = end - start;
    
    // Вывод времени выполнения в секундах
    cout << "f2 duration - "<< duration.count() << endl;    
}

void f3(){
    
    // Захват времени перед выполнением блока кода
    auto start = chrono::high_resolution_clock::now();
    
    //Название
    cout << "f3\n";
    int m = 0;
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            m *= 1;
        }
    }
    
    cout << "f3 m = " << m << endl;
    
    mtx.lock();
    last = "f3";
    mtx.unlock();
    
    // Захват времени после выполнения блока кода
    auto end = chrono::high_resolution_clock::now();
    
    // Вычисление разницы времени
    chrono::duration<double> duration = end - start;
    
    // Вывод времени выполнения в секундах
    cout << "f3 duration - "<< duration.count() << endl;    
}

void f4(){
    
    // Захват времени перед выполнением блока кода
    auto start = chrono::high_resolution_clock::now();
    
    //Название
    cout << "f4\n";
    int m = 0;
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            m += 1;
        }
    }
    
    cout << "f4 m = " << m << endl;
    
    mtx.lock();
    last = "f4";
    mtx.unlock();
    
    // Захват времени после выполнения блока кода
    auto end = chrono::high_resolution_clock::now();
    
    // Вычисление разницы времени
    chrono::duration<double> duration = end - start;
    
    // Вывод времени выполнения в секундах
    cout << "f4 duration - "<< duration.count() << endl;    
}

void f5(){
    
    // Захват времени перед выполнением блока кода
    auto start = chrono::high_resolution_clock::now();
    
    //Название
    cout << "f5\n";
    int m = 0;
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            m += 100;
        }
    }
    
    cout << "f5 m = " << m << endl;
    
    mtx.lock();
    last = "f5";
    mtx.unlock();
    
    // Захват времени после выполнения блока кода
    auto end = chrono::high_resolution_clock::now();
    
    // Вычисление разницы времени
    chrono::duration<double> duration = end - start;
    
    // Вывод времени выполнения в секундах
    cout << "f5 duration - "<< duration.count() << endl;
}

void f6(){
    
    // Захват времени перед выполнением блока кода
    auto start = chrono::high_resolution_clock::now();
    
    //Название
    cout << "f6\n";
    int m = 0;
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            m -= 1;
        }
    }
    
    cout << "f6 m = " << m << endl;
    
    mtx.lock();
    last = "f6";
    mtx.unlock();
    
    // Захват времени после выполнения блока кода
    auto end = chrono::high_resolution_clock::now();
    
    // Вычисление разницы времени
    chrono::duration<double> duration = end - start;
    
    // Вывод времени выполнения в секундах
    cout << "f6 duration - "<< duration.count() << endl;   
}

void f7(){
    
    // Захват времени перед выполнением блока кода
    auto start = chrono::high_resolution_clock::now();
    
    //Название
    cout << "f7\n";
    int m = 0;
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            m -= 100;
        }
    }
    
    cout << "f7 m = " << m << endl;
    
    mtx.lock();
    last = "f7";
    mtx.unlock();
    
    // Захват времени после выполнения блока кода
    auto end = chrono::high_resolution_clock::now();
    
    // Вычисление разницы времени
    chrono::duration<double> duration = end - start;
    
    // Вывод времени выполнения в секундах
    cout << "f7 duration - "<< duration.count() << endl;    
}

void f8(){
    
    // Захват времени перед выполнением блока кода
    auto start = chrono::high_resolution_clock::now();
    
    //Название
    cout << "f8\n";
    int m = 0;
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            m *= 2;
        }
    }
    
    cout << "f8 m = " << m << endl;
    
    mtx.lock();
    last = "f8";
    mtx.unlock();
    
    // Захват времени после выполнения блока кода
    auto end = chrono::high_resolution_clock::now();
    
    // Вычисление разницы времени
    chrono::duration<double> duration = end - start;
    
    // Вывод времени выполнения в секундах
    cout << "f8 duration - "<< duration.count() << endl;   
}

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    cout<<"Многопоточная программа:\n";
    
    cout << "********************************\n";
    cout << "********************************\n";
    cout << "thread : \n";
    
    thread t1(f1);
    thread t2(f2);
    thread t3(f3);
    thread t4(f4);
    thread t5(f5);
    thread t6(f6);
    thread t7(f7);
    thread t8(f8);
    
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();
    t8.join();
    
    cout << endl;
    cout << last << endl;
    
    cout << "********************************\n";
    cout << "********************************\n";
    cout << "async : \n";
    
    future<void> res1 = async(f1);
    future<void> res2 = async(f2);
    future<void> res3 = async(f3);
    future<void> res4 = async(f4);
    future<void> res5 = async(f5);
    future<void> res6 = async(f6);
    future<void> res7 = async(f7);
    future<void> res8 = async(f8);
    
    // Если функция возвращает какое-либо значение
    //int val1 = res1.get();
    //int val2 = res2.get();
    //int val3 = res3.get();
    //int val4 = res4.get();
    //int val5 = res5.get();
    //int val6 = res6.get();
    //int val7 = res7.get();
    //int val8 = res8.get();
    
    cout << endl;
    cout << last << endl;
    cout << "********************************\n";

    return 0;
}
