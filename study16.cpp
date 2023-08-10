/******************************************************************************
Умные указатели
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <memory>

using namespace std;

//Обычное выделение памяти используя new int и delete
void ptr(){
    int* a = new int();
    *a = 10;
    delete a;
}

//Обычное выделение памяти под массив используя new int и delete
void ptr1(){
    int size = 5;
    
    int* a = new int[size];
    
    cout << "arrays: " << endl;
    
    for(int i = 0; i < size; i++){
        a[i] = i * 4;     
    }
    
    for(int i = 0; i<size; i++){
        cout << a[i] << endl;
    }
    
    delete[] a;
    
}

// Применение умных указателей(unique_ptr) - только один владелец ссылки
void func(){
    unique_ptr<int> p(new int(42));
    int a = *p;
    cout << a << endl;
    // Он автоматически очищает память
}

// Применение умных указателей(shared_ptr)
void func1(){
    shared_ptr<char> a = make_shared<char>('h');
    shared_ptr<char> b = a; // несколько владельцев
}

//Применение умных указателей(weak_ptr)
void func2(){
    std::shared_ptr<string> sharedPtr = std::make_shared<string>("Hello world!");
    std::weak_ptr<string> weakPtr = sharedPtr; // не использует счетчик
    
    string ss;
    
    // Преобразование weak_ptr в shared_ptr перед использованием
    if (auto lockedPtr = weakPtr.lock()) {
        ss = *lockedPtr;
    }
    
    int s = 5;
    
    for(int i = 0; i < s; i++){
        cout << ss << endl;
    }
}

int main()
{
    
    setlocale(LC_ALL,"ru_RU.utf-8");
    
    //cout << "Привет мир!";
    
    cout << endl;
    
    func();
    ptr();
    ptr1();
    func2();

    return 0;
}
