/******************************************************************************
Указатели + исключения(самое начало)
*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>

using namespace std;

void func(int* , string* );
void func1(int& );
int del(int* ,int* ); // if
int del1(int, int ); // try catch

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    int p = 89;
    int* p1 = &p;
    int** p2 = &p1;
    
    int a = 85;
    string s;
    
    /*
    cout <<"Обычное число р = " << p << endl;
    cout <<"Указатель р* = " << p1 << endl;
    cout <<"Указатель р** = " << p2 << endl;
    cout <<"Указатель(разименовать) р* = " << *p1 << endl;
    cout <<"Указатель(разыменовать) р** = " << **p2 << endl;
    cout <<"Указатель(свой адрес) р* = " << &p1 << endl;
    cout <<"Указатель(свой адрес) р** = " << &p2 << endl;
    */
    
    func( &a, &s);
    func1(a);
    
    cout << endl;
    
    int a1 = 10;
    int b = 0;
    
    del(&a1, &b);
    del1(10,0);
    
    return 0;
}

void func(int* aa, string* ss){
    cout << "val aa = " << *aa << endl;
    cout << "addr aa = " << aa << endl;
    cout << "sizeof aa = " << sizeof(aa) << endl;
    *aa+=52;
    cout << "val aa = " << *aa << endl;
    
}

void func1(int& aa){
    int* b = &aa;
    cout << b << endl;
    cout << *b << endl;
}

int del(int* a, int* b){
    if( *b==0 ){
        throw "Деление на ноль!";
    }
    return *a / *b;
}

int del1(int a, int b){
    try{
        if (b == 0) {
        throw "Деление на ноль!";
        }
        return a/b;
    } catch(const char* msg) {
        cerr << "Err " << msg << endl;
        return 0;
    }
}

