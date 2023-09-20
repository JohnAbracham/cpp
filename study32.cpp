/******************************************************************************
Ассоциативные контейнеры - map и multimap

multimap - то же сасмое что и map, только хранит еще дублирующие значения ключей
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <map>

// Задать новую переменную определенного типа
//typedef unsigned long long_u;

using namespace std;

void f1(){
    /*
    pair<int,string> p(1,"телефон");
    
    cout << p.first << endl;
    cout << p.second << endl;
    */
    map<int,string> m;
    
    //добавление элементов
    m.emplace(3,"computer");
    
    m.insert(make_pair(1,"telephone"));
    
    m.insert(pair<int,string>(2,"mobile"));
    
    m.emplace(22,"computer");
    
    //m[22] тоже можно обращаться
    
    //Поиск элементов в массиве
    map<int,string>::iterator it = m.find(55); // m.end() если значение не найдено
    
    
    if(it != m.end()){
        cout << it->first << endl << it->second << endl;
    } else {
        cout << "Not found\n"; 
    }
    
    cout << endl;
    
    map<string, int> myMap;
    
    myMap.emplace("Петя",4568);
    myMap.emplace("Маша",1256);
    myMap.emplace("Миша",1034);
    
    myMap["Петя"] = 1000;
    
    //Если такго ключа нет - он его создаст, иначе просто заменит значение
    myMap["Игорь"] = 8964;
    myMap["Игорь"] = 2589;
    //В этом случае объект не создасься и вызовется исключение out of range
    try{
        
        myMap.at("Иван") = 1236;
    
        
    } catch (const std::exception& ex){
        
        cout << ex.what() << endl;
        cout << "Key not found\n";
        
    }
    
    //Удалить пару
    myMap.erase("Маша");
    
    cout << myMap["Петя"] << endl;
    
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";
    
    f1();

    return 0;
}
