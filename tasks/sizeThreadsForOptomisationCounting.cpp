/******************************************************************************
Задача: Расчет параллельной суммы массива

Представьте, что у вас есть большой массив целых чисел, и 
вы хотите вычислить их сумму. Для ускорения этого процесса 
вы решаете использовать многопоточность. Задача состоит в том, 
чтобы разделить массив на несколько частей и вычислить сумму 
каждой части в отдельном потоке. После этого объединить результаты 
для получения общей суммы.
Задача включает в себя:

    Создание массива целых чисел.
    Определение количества потоков для параллельных вычислений.
    Разделение массива на части, равномерно распределяя элементы между потоками.
    Создание потоков, каждый из которых будет вычислять сумму своей части массива.
    Ожидание завершения всех потоков и суммирование результатов.
    Вывод общей суммы.

times
auto start = std::chrono::high_resolution_clock::now();
auto end = std::chrono::high_resolution_clock::now();
std::chrono::duration<double> elapsed = end - start;
elapsed.count()

Массив делиться на 100000 вычислений на поток

*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>
#include <vector>
#include <mutex>
#include <random>
#include <chrono>
#include <thread>

//#define THREADS
#define NOT_THREADS


using namespace std;

//*******************************************************************
//итоговая сумма
unsigned int count = 0;
// Массив вектора
vector<int> vctr;
// Размер массива
unsigned int arrSize = 0;
//Мутекс
mutex mtx;

//*******************************************************************
//Функция заливки массива рандомными значениями
void setArr(unsigned int arrSize){
    
    random_device rd; // Источник случайности
    
    mt19937 gen(rd()); // Генератор Mersenne Twister
    
    uniform_int_distribution<> distribution(1, 100); // Равномерное распределение от 1 до 100
    
    auto start = chrono::high_resolution_clock::now();
    
    for(unsigned int i = 0; i < arrSize; i++){
        //Получаем случайное число и записываем его в вектор массив
        vctr.push_back(distribution(gen));
    }
    
    auto end = chrono::high_resolution_clock::now();
    
    chrono::duration<double> elapsed = end - start;
    
    cout << "Время создания массива: " << elapsed.count() << endl;
    
}

//*******************************************************************
// Получить размер вектора
void returnSizeArr(){
    arrSize = vctr.size();
}

//*******************************************************************
// Расчет в однопоточном режиме
#ifdef NOT_THREADS

// Подсчет без использования многопоточности
void sum(){
    
    // Записать начало
    auto start = chrono::high_resolution_clock::now();
    
    //Суммирование массива
    for (const int& num : vctr) {
        count += num;
    }
    
    // Записать конец
    auto end = chrono::high_resolution_clock::now();
    
    //Вычислить самое время выполнения
    chrono::duration<double> elapsed = end - start;

    // Вывести время выполнения
    cout << "Время выполнения в одном потоке " << elapsed.count() << " сек.\n" << "Сумма равна: " << count << endl;
}

#endif

//*******************************************************************
//Расчет в многопоточном режиме
#ifdef THREADS

// Получить кол-во потоков
int arrIter(){
    return vctr.size()/100000;
}

// Вычисления в одном потоке
void createThreadArr(int begin, int end){
    unsigned int a = 0;
    for(int i = begin; begin < end; i++){
        a += i;
    }
    
    // Блокировать переменную другим потокам
    mtx.lock();
    count += a;
    mtx.unlock();
    
}

// Создать потоки и расчитать
void createThread(){
    // Получить кол-во потоков относительно шага
    const int numThreads = arrIter();
    thread threads[numThreads];
    //Переменная
    int add = 100000;
    
    // Создаем и запускаем потоки
        for(int i = 0; i < numThreads ;i++) {
        threads[i] = thread(createThreadArr, i*add,i*add+add);
    }
    
    // Ожидаем завершения потоков
    for(int i = 0; i < numThreads ;i++){
        threads[i].join();
    }
}

// Подсчет с использованием многопоточности
void sum1(){
    
    // Записать начало
    auto start = chrono::high_resolution_clock::now();
    
    
    //Суммирование массива
    createThread();
    
    // Записать конец
    auto end = chrono::high_resolution_clock::now();
    
    //Вычислить самое время выполнения
    chrono::duration<double> elapsed = end - start;

    // Вывести время выполнения
    cout << "Время выполнения в одном потоке " << elapsed.count() << " сек.\n" << "Сумма равна: " << count << endl;
}

#endif

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    //Заполнить массив данными
    setArr(500000000);
    //cout << vctr[55] << endl;
    
    
    // Выполнить расчет суммы каждого итера массива вектора и вывести время выполнения
    #ifdef NOT_THREADS
    
        sum();
    
    #endif
    
    // Выполнить расчет суммы каждого итера массива вектора и вывести время выполнения(в потоках)
    #ifdef THREADS
    
        sum1();
    
    #endif

    return 0;
}
