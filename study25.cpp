/******************************************************************************
Работа с list(список) + итератор
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <list>

using namespace std;

//Вставить значение в позицию n
template<typename T>
void f0(list<T> &list1, int n){
    auto i = list1.begin();
    
    //Сдвинуть итератор на позицию n
    //for(int j = 0; j != n; j++) i++;
    advance(i, n);
    
    list1.insert(i, 111);
    
}

//Вывести все элементы списка
template<typename T>
void f1(const list<T> &list_arr){
    for(auto i = list_arr.cbegin(); i != list_arr.cend(); ++i){
         cout << *i << endl;
    }
}

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    //cout << "Привет мир!";

    list<int> lst = {65,87,99};
    
    //Добавить данные в конец
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    
    //Добавить данные в начало
    lst.push_front(11);
    lst.push_front(22);
    lst.push_front(33);
    lst.push_front(44);
    lst.push_front(55);
    lst.push_front(55);
    lst.push_front(55);
    
    //Сортировка массива
    lst.sort();
    
    //Удалить одинаковые(только если они последовательно)
    //lst.unique();
    
    //Обратный порядко
    //lst.reverse();
    
    //Удалить все элементы списка
    //lst.clear();
    
    
    //итератор
    list<int>::iterator it = lst.begin();
    //Тоже самое
    //auto it = lst.begin();
    
    //Удалить один элемент
    //lst.erase(it);
    
    //Вывод размера
    cout << "List size is " << lst.size() << endl;
    
    /*
    for(auto i = lst.begin(); i != lst.end(); i++){
        cout << *i << endl;
    }*/
    
    //Вывод списка
    f1(lst);
    
    cout << endl;
    
    //Удалить с начала
    lst.pop_front();
    
    
    //Удалить с конца
    lst.pop_back();
    
    //Вывод списка
    f1(lst);

    cout << "Добавление значения в позицию n\n";
    
    f0(lst,3);
    
    //Вывод списка
    f1(lst);
    
    cout << "Удалить число 55\n";
    
    //Удалить конкретное число
    lst.remove(55);
    
    //Вывод списка
    f1(lst);
    
    cout << "Залить список новыми одинаковыми числами\n";
    
    //залить массив данными
    //lst.assign(10,888);
    
    //Вывод списка
    f1(lst);
    
    cout << endl;
    cout << "Перенос данных в другой список и создание заливка старого нулями\n";
    
    list<int> lst1;
    
    //Перенос данных
    lst1.assign(lst.begin(),lst.end());
    
    //обнуление старого списка
    lst.assign(10, 0);
    
    cout << "1: \n****************************\n";
    
    //Вывод списка
    f1(lst);
    
    cout << "2: \n****************************\n";
    
    //Вывод списка
    f1(lst1);

    return 0;
}
