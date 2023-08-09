/******************************************************************************
Динамическое выделение памяти
*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>
#include <cstdlib> // Для функции rand() и srand()
#include <ctime>   // Для функции time()
#include <memory>

using namespace std;

// Выделение памяти под число
void crtVal(){
   int* val = new int;
   cin >> *val;
   cout << "Ваше число " << *val << endl;
   delete val;
   cout << "Ваше число удалено!\n";
}

// Выделение памяти под массив
void crtArr(){
    int size;
    int* arr = new int[size];
    cout << "Введи размер массива\n";
    cin >> size;
    
    for(int i = 0; i < size; ++i){
        arr[i] = rand();
    }
    
    cout << "Создан массив:\n";
    
    for(int i = 0; i < size ;i++){
        cout << i << ":" << arr[i] << endl;;
    }
    
    delete[] arr;
    
    cout << "Массив удален!\n";
}

// Выделение памяти под умный указатель 1
void crtSmart1(){
    unique_ptr<int> dynamicInt(new int);
    
    *dynamicInt = 568;
    
    int aa = *dynamicInt;
    
    cout << "crtSmart1()";
    cout << aa << endl;
}

// Выделение памяти под умный указатель 2
void crtSmart2(){
    shared_ptr<int> sharedDynamicInt = make_shared<int>();
    
    *sharedDynamicInt = 865;
    
    int aa = *sharedDynamicInt;
    
    cout << "crtSmart2()";
    cout << aa << endl;
}

// Выделение памяти под массив умный указатель 1 (второе не поддерживается)
void crtSmartArr1(){
    
    cout << "crtSmartArr1()\n";
    
    int size = 5;

    unique_ptr<int[]> myArray(new int[size]); // Объявление массива умным указателем

    for (int i = 0; i < size; ++i) {
        myArray[i] = i * 2; // Инициализация элементов массива
    }

    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " "; // Вывод элементов массива
    }

    cout << endl;
}


int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(time(nullptr)));
    
    
    
    //cout << "Привет мир!\n";
    
    //cout << endl;

    //crtVal();
    
    crtSmart1();
    crtSmart2();
    crtSmartArr1();
    
    cout << endl;
    
    //crtArr();

    return 0;
}


