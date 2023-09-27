/******************************************************************************
Выборка данных по условию - stl copy, stl copy_if + back_inserter()
*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Person{
    public:
    
        string Name;
        double Score;
        int Age;
    
        Person(string name, double score, int age) : Name(name), Score(score), Age(age) {}
};

//Просто скопировать один вектор-массив в другой
void f1(){

    vector<Person> p = {
        Person("Petr",156, 18),
        Person("Ivan",555, 19),
        Person("Andrei",689, 17),
        Person("Vazim",187, 18),
        Person("Alex",872, 16),
        Person("Adam",321, 19),
        Person("Sam",111, 18),
        Person("Vika",222, 20),
        Person("Anna",333, 21),
        Person("Dasha",44, 20)
    };
    
    vector<Person> result;
    
    //Скопировать коллекцию из одного ветора-массива в другой
    copy(p.begin(), p.end(), back_inserter(result));

}

void f2(){
    
    vector<Person> p = {
        Person("Petr",156, 18),
        Person("Ivan",555, 19),
        Person("Andrei",689, 17),
        Person("Vazim",187, 18),
        Person("Alex",872, 16),
        Person("Adam",321, 19),
        Person("Sam",111, 18),
        Person("Vika",222, 20),
        Person("Anna",333, 21),
        Person("Dasha",44, 20)
    };
    
    vector<Person> result;
    
    copy_if(p.begin(), p.end(), back_inserter(result), [] (const Person &p) {
        //return p.Name == "Ivan";
        return p.Score < 300;
        //return p.Age > 18 && p.Score > 300;
    });
    
    sort(result.begin(), result.end(), [](const Person &p1, const Person &p2){
        return p1.Score < p2.Score;
    });
    
    cout << "Всего элементов\t" << result.size() << endl;
    
    for(auto &it : result){
        
        cout << "Имя\t" << it.Name << "\tбаллы\t" << it.Score << "\tвозраст\t" << it.Age << endl;
        
    }
    
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";
    
    f1();
    f2();

    return 0;
}
