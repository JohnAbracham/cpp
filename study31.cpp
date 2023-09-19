/******************************************************************************
Ассоциативный контейнер - set+multiset
бинарное дерево
*******************************************************************************/

#include <iostream>
#include <set>
#include <clocale>

using namespace std;

//set
void f1(){
    set<int> mySet;
    
    for(int i = 0; i < 40; i++){
        mySet.insert(rand() % 10);
    }
    
    /*
    mySet.insert(50);
    mySet.insert(45);
    mySet.insert(56);
    mySet.insert(78);
    mySet.insert(-1);
    mySet.insert(5);
    mySet.insert(28);
    */
    
    for(auto &it : mySet){
        cout << it << endl;
    }
    
    set<int>::iterator it = mySet.find(11);
    
    
    
    //Проверка, есть ли в коллекции элемент
    
    cout << "Проверка на наличие элемента в массиве\n";
    
    int val = 0;
    
    cin >> val;
    
    if(mySet.find(val) != mySet.end()){
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
    
    cout << "Удаление элемента в массиве\n";

    auto result = mySet.erase(5);
    
    auto res1 = mySet.insert(111); // return [iterator(if add or not),bool(if add)]
    
    for(auto &it : mySet){
        cout << it << endl;
    }    

}

//multiset
void f2(){
    multiset<int> multi;
    
    for(int i = 0; i < 10;i++){
        multi.insert(rand() % 10);
    }
    
    for(auto &it : multi){
        cout << it << endl;
    }
    
    //Найти и вернуть первый элемент 1
    auto f1 = multi.lower_bound();

    //Найти и вернуть следующий элемента за этим числом
    auto f2 = multi.upper_bound();
    
    //Вернуть диапазон чисел между upper_bound и lower_bound
    auto f3 = multi.equal_range(1);
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";
    
    //f1();
    f2();
    
    return 0;
}
