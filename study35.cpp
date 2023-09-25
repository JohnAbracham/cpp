/******************************************************************************
Алгоритмы сортировки, унарный предикат + бинарный предекат
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

//Унарный предикат(унарный)
bool MoreThanZero(int a){
    return a > 0;
}

//Бинарный предикат
bool MyPred(int a, int b){
    return a > b;
}

//Унарный предикат(унарный)
bool LessThanZero(int a){
    return a < 0;
}


class Person{

    public:
    
        string Name;
        double Score;

        Person(string name, double score) : Name(name), Score(score){};
        
        bool operator()(const Person &p){
            return p.Score > 180;
        }

};

void f1(){
    
    int SIZE = 7;
    int arr[SIZE] = {11,52,13,94,55,76,37};
    
    sort(arr, arr + SIZE, [] (int a, int b){
        return a > b;
    });
    
    for(auto &it : arr){
        cout << it << endl;
    }
}

//Сортировать более сложные объекты
void f2(){
    
    vector<Person> v = {
        Person("Petr", 56),
        Person("Ivan", 258),
        Person("Inna", 889),
        Person("Anabel", 123),
        Person("Rosie", 189),
        Person("John", 28),
        Person("Sam", 89),
        Person("Klipetro", 93),
        Person("Robert", 199),
        Person("Alex", 251),
    };
    
    //Подсчет объектов подходящих по требованию
    int count = count_if(v.begin(),v.end(),v.front());
    
    cout << "Сортировка по имени\n";
    
    sort(v.begin(),v.end(), [] (const Person &p1, const Person &p2){
        return p1.Name < p2.Name;
    });
    
    for(auto &it : v){
        cout << "Name: " << it.Name << " Score: " << it.Score << endl;
    }
    
    cout << endl;
    
    cout << "Сортировка по числам\n";
    
    sort(v.begin(),v.end(), [] (const Person &p1, const Person &p2){
        return p1.Score < p2.Score;
    });
    
    for(auto &it : v){
        cout << "Name: " << it.Name << " Score: " << it.Score << endl;
    }
    
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    vector<int> vctr = {
        3,
        4,
        5,
        87,
        25,
        89,
        13,
        98
    };
    
    
    //Используя бинарный предикат
    //sort(vctr.begin(), vctr.end(), MyPred);
    
    //Используя анонимную(лямбда) функцию
    sort(vctr.begin(), vctr.end(), [](int a, int b){
        return a > b;
    });
    
    for(auto &it : vctr){
        cout << it << endl;
    }
    
    cout << endl;
    
    f1();
    f2();

    return 0;
}
