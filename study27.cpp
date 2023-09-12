/******************************************************************************
Forward list - односвязный список(только в начало добавлять)
Не хранит адрес прошлого значения

before_begin() - нужно чтобы попасть на первую ячейку

*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <forward_list>

using namespace std;

int main()
{
    
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    forward_list<int> f1 = {22,46,26,8,989};
    
    f1.push_front(5);
    f1.push_front(34);
    f1.push_front(87);
    
    forward_list<int>::iterator it = f1.begin();
    
    // Можно
    it++;
    
    //Нельзя так
    //it--;
    
    //Добавить на слудующую ячейку число
    f1.insert_after(it,999);
    
    //Удалить из следующей ячейки число
    f1.erase_after(it);
    
    //cout << *it << endl;
    
    
    //cout << "Привет мир!";
    
    for(auto it : f1){
        cout << it << endl;
    }

    return 0;
}
