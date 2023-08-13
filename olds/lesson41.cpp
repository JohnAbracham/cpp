/*
Указатель на указатель + динамическое выделение памяти (часть 2)
*/

#include <iostream>
#include <string.h>
using namespace std;
 
//прототипы функций
char **AddPtr (char **pp, int size, char *str);
char **DelPtr (char **pp, int size, int ncell); // удаление строки и указателя
char **InsPtr (char **pp, int size, int ncell, char *str); //вставка строки и указателя
 
int main()
{
    setlocale(LC_ALL, "rus");  
 
    int size = 0;
    char **pp = 0;
 
    cout << "~~~~~Добавляем указатели на пять строк и заполняем строки данными~~~~~" << endl;
    pp = AddPtr(pp, size, "11111111111111111");
    size++; //1
 
    pp = AddPtr(pp, size, "22222222222222222");
    size++;//2
 
    pp = AddPtr(pp, size, "33333333333333333");
    size++;//3
 
    pp = AddPtr(pp, size, "44444444444444444");
    size++;//4
 
    pp = AddPtr(pp, size, "55555555555555555");
    size++;//5
 
    for(int i = 0; i < size; i++)    //показываем все строки на экран
        cout << pp[i] << endl; 
    cout << endl;
 
    cout << "~~~~~Удаляем 3-ю строку и указатель на неё из массива указателей~~~~~" << endl;
    pp = DelPtr(pp, size, 2); //вызов функции удаления указателя
        size--; //4
 
    for(int i = 0; i < size; i++) //показываем оставшиеся строки
        cout << pp[i] << endl;
    cout << endl;
 
    cout << "~~~~~Добавляем указатель в массив указателей и заполняем строку~~~~~" << endl;
    pp = InsPtr(pp, size, 2, "333"); //вызов функции вставки указателя
        size++; //5
    for(int i = 0; i < size; i++) //показываем все строки на экран
        cout << pp[i] << endl;
    cout << endl;
 
        //освобождение памяти
    for(int i = 0; i < size; i++)
    {
        delete [] pp[i];       
    }
 
    delete [] pp;
    return 0;
}
 
char **AddPtr (char **pp, int size, char *str)
{
    if(size == 0){
        pp = new char *[size+1];
    }
    else{                      
        char **copy = new char* [size+1];
        for(int i = 0; i < size; i++)
        {
            copy[i] = pp[i];
        }  
 
        delete [] pp;      
        pp = copy;     
    }
    pp[size] = new char [strlen(str) + 1];
    strcpy(pp[size], str);
 
    return pp;
}
 
char **DelPtr (char **pp, int size, int ncell)
{
    char **copy = new char* [size-1]; //временная копия
        //копируем адреса указателей, кроме ячейки с номером ncell
    for(int i = 0;  i < ncell; i++)
    {
        copy[i] = pp[i];
    }  
    for(int i = ncell;  i < size-1; i++)
    {
        copy[i] = pp[i+1];
    }
 
    delete [] pp[ncell]; // освобождаем память занимаемую строкой
    delete [] pp; //освобождаем память занимаемую массивом указателей
    pp = copy; //показываем, какой адрес хранить
 
    return pp;
}
 
char **InsPtr (char **pp, int size, int ncell, char *str)
{
    char **copy = new char* [size+1]; //временная копия
    for(int i = 0;  i < ncell; i++)
    {
        copy[i] = pp[i];
    }  
 
    copy[ncell] = new char[strlen(str) + 1]; //выделяем память для новой строки
    strcpy(copy[ncell], str);
 
    for(int i = ncell+1;  i < size+1; i++)
    {
        copy[i] = pp[i-1];
    }
    delete [] pp;
    pp = copy; 
 
    return pp;
}
