/******************************************************************************
Библиотека стандартных шаблонов - удаление элемента remove/remove_if
*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <clocale>

using namespace std;

class Person{
    public:
    
        string Name;
        double Score;
        int Age;
        
        Person(string name, double score, int age) : Name(name), Score(score), Age(age) {}
};

//Просто сгрупировать все элементы числа 9 в конец и удалить их(remove)
void f1(){
    vector<int> v = {1,23,4,7,8,9,11,9,31,9,22,72};
    
    cout << "Len v(before): " << v.size() << endl;
    
    vector<int>::iterator result = remove(v.begin(),v.end(),9);
    
    cout << "Len v(after): " << v.size() << endl;
    
    cout << endl;
    
    for(auto &it : v){
        cout << it << endl;
    }
    
    cout << endl;
    
    v.erase(result, v.end());
    
    cout << "Len v(after-erase): " << v.size() << endl;
    
    cout << endl;
    
    for(auto &it : v){
        cout << it << endl;
    }
    
    cout << endl;
    
}

//remove_if
void f2(){
    
    vector<Person> p = {
        Person("Ivan",135,18),
        Person("John",158,19),
        Person("Nina",187,20),
        Person("Alla",169,21),
        Person("Amite",187,43),
        Person("Sulfa",152,17),
        Person("Adreana",175,18),
        Person("Smith",158,19),
        Person("Jim",139,22),
        Person("Vax",144,19),
    };
    
    cout << "\tВсего элементов:\t" << p.size() << endl;
    
    cout << endl;
    
    for(auto &it : p){
        cout << "Имя\t" << it.Name << "\tбаллы\t" << it.Score << "\tвозраст\t" << it.Age << endl;
    }
    
    cout << endl;
    
    /*
    //Который true - помещается в конец для дальнейшего удаления
    auto res = remove_if(p.begin(),p.end(), [](const Person &per){
        return per.Score < 160;
    });
    
    p.erase(res,p.end());*/
    
    //Можно и так
    p.erase(remove_if(p.begin(),p.end(),[](const Person &per){
        return per.Age < 20;
    }),p.end());
    
    cout << "\tВсего элементов:\t" << p.size() << endl;
    
    cout << endl;
    
    for(auto &it : p){
        cout << "Имя\t" << it.Name << "\tбаллы\t" << it.Score << "\tвозраст\t" << it.Age << endl;
    }
    
    cout << endl;
}

//Для строки
void f3(){
    string str = "Примет мир! Как хорошо сегодня на улице! Почему бы не прогуляться?";
    
    cout << str << endl;
    
    //Невероятно как важно, чтобы была одинарная скобка
    str.erase(remove(str.begin(),str.end(),' '),str.end());
    
    cout << str << endl;
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир\n";
    
    //f1();
    //f2();
    f3();

    return 0;
}
