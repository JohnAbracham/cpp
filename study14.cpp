/******************************************************************************
Работа с исключениями
*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>

using namespace std;

// собственный класс исключений
class MyException : public exception {
    public:
        const char* what() const noexcept override {
            return "Моя собственная ошибка!";
        }
};


// простое деление на 0
int dev(int, int);
// проверка на символ
string dev1(char );
// собственный класс с ислючениями
int dev3(int, int);


int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    cout<<"Привет мир!";
    
    cout << endl;
    
    int a1 = 12, b1 = 0;
    
    // свое исключение
    /*
    try{
        //int c = dev(a1,b1);
        string s = dev1('a');
        //cout << "c = " << c << endl;
        cout << "s = " << s << endl;
        
    } catch(const char* msg){
        cerr << "[!] Err " << msg << endl;
    }*/
    
    // стандартное исключение
    try{
        
        cout << "a/b = " << dev3(a1,b1) << endl;
        
    } catch(const MyException& e){
        cerr << "[!] Err " << e.what() << endl;
    }
    
    cout << "HEHEHEHEHHE\n";

    return 0;
}


int dev(int a, int b){
    if(b == 0) throw "Нельзя делить на ноль!";
    return a/b;
}

string dev1(char a){
    if(a == 'a') throw "Ты что удумал мазафака?!";
    return "Hello";
}

int dev3(int a, int b){
    if(b == 0) throw MyException();
    return a/b;
}

