/******************************************************************************
ООП - шаблоны класса
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>

using namespace std;

//Создание шаблона класса
template<typename T1, typename T2>
class Foo{
  
  public:
  
    T1 a;
    T2 b; 
    
    Foo(T1 _a, T2 _b) : a(_a), b(_b){
        cout << "a = " << a << "\nb = " << b << endl;
    };
    
};

//Использование наследования класса
template<typename S1, typename S2, typename S3>
class Foo1 : public Foo<S1, S2>{
    public:
    
    S3 m;
        Foo1(S1 m1, S2 m2, S3 m3) : Foo<S1, S2>(m1, m2), m(m3){
            cout << "\nm = " << m << endl;
        };
};

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    //cout<<"Привет мир!";
    Foo<int, string> f(45,"Hello world!");
    
    cout << endl;
    
    Foo<int, double> f1(56,68.8);
    
    cout << endl;
    
    Foo<string, char> f2("String",'H');
    
    cout << endl;
    
    Foo1<string, int, char> f3("StringSOT", 65, 'T');
    

    return 0;
}
