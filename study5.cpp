/******************************************************************************
Функции и работы с функциями scanf и prinf
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>

using namespace std;

// Перегрузка фунцкий
void printText(string );
void printText(string ,string );

//Работы с возвращением разных типо переменных
int retINT(int );
char retCHAR(char );
wchar_t retWCHAR_T(wchar_t );
bool retBOOL(bool );
char16_t retCHAR16_T(char16_t );
char32_t retCHAR32_T(char32_t );

//Вывод через ввод
void textOUT();

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    void textOUT();
    // Просто для проверки работы функций scanf и prinf
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    
    printText("Hello world!");
    printText("This is second function!", "TeXT");
    
    cout << "Return int: " << retINT(54) << endl;
    cout << "Return char: " << retCHAR('F') << endl;
    cout << "Return wchar_t: " << retWCHAR_T('F') << endl;
    cout << "Return bool: " << retBOOL(true) << endl;
    cout << "Return char16_t: " << retCHAR16_T('F') << endl;
    cout << "Return char32_t: " << retCHAR32_T('F') << endl;

    return 0;
}

// Перегрузка фунцкий
void printText(string text){
    cout << text << endl;
}
void printText(string text, string text1){
    cout << text << " " << text1 << endl;
}

//Работы с возвращением разных типо переменных
int retINT(int a){
    return a;
}
char retCHAR(char a){
    return a;
}
wchar_t retWCHAR_T(wchar_t a){
    return a;
}
bool retBOOL(bool a){
    return a;
}
char16_t retCHAR16_T(char16_t a){
    return a;
}
char32_t retCHAR32_T(char32_t a){
    return a;
}

//Вывод через ввод
void textOUT(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
}