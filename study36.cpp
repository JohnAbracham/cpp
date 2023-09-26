/******************************************************************************
Алгоритмы поиска - find/find_Iif/find_if_not
*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Person{
    
    public:
    
        string Name;
        double Score;
        
        Person(string name, double score) : Name(name), Score(score) {};
        
        bool operator() (const Person &p){
            return p.Score > 180;
        }
      
};

//find
void f1(){
    
    vector<int> v2 = {1,43,67,12,55,15,89,25,88};
    
    auto result = find(v2.begin(), v2.end(), 88);
    
    if(result == v2.end()){
        cout << "Nope\n";
    } else {
       cout << *result << endl; 
    }    
    
}

//find_if
void f2(){
    
    vector<int> v2 = {1,43,67,12,55,15,89,25,88};
    
    auto result = find_if(v2.begin(), v2.end(), [](int a){
        return a > 0;
    });
    
    if(result == v2.end()){
        cout << "Nope\n";
    } else {
       cout << "Yeah" << endl; 
    }     
    
}

//find_if_not

void f3(){
    
    vector<int> v2 = {1,43,67,12,55,15,89,25,88};
    
    auto result = find_if_not(v2.begin(), v2.end(), [](int a){
        return a > 0;
    });
    
    if(result == v2.end()){
        cout << "Nope\n";
    } else {
       cout << "Yeah" << endl; 
    }     
    
}

//find_if с более сложными объектами
void f4(){

    vector<Person> v1 = {
      Person("Ivan",156),
      Person("Petr",846),
      Person("Joanna",145),
      Person("Sam",682),
      Person("John",258),
      Person("Anna",123),
      Person("Smit",456),
      Person("Abbel",798),
      Person("Nuar",612),
      Person("Jonsin",111),
    };
    
    auto result = find_if(v1.begin(), v1.end(), [](const Person &p){
        return p.Name == "Petr" && p.Score == 846;
    });
    
    if(result == v1.end()){
        cout << "Nope\n";
    } else {
       cout << "Yeah" << endl; 
    }   
    
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout<<"Hello World";
    
    //f1();
    //f2();
    //f3();
    f4();
    

    return 0;
}
