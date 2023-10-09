/******************************************************************************
STL - Отсортировать массив в случайном порядке random_shuffle
*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;


class IAction{
  public:
    virtual void Action() = 0;
};

class CatAction : public IAction {
    public:
        virtual void Action() override {
            cout << "Гладим кота" << endl;
        }
};

class TeaAction : public IAction {
    public:
        virtual void Action() override {
            cout << "Пьем чай" << endl;
        }
};

class DogAction : public IAction {
    public:
        virtual void Action() override {
            cout << "Берем собаку" << endl;
        }
};

class PotatoAction : public IAction {
    public:
        virtual void Action() override {
            cout << "Чистим картошку" << endl;
        }
};

//random_shuffle
void f1(){
    
    srand(time(NULL));
    
    unsigned short c[] = {1,4,6,8,11,78,14,52,34,72};
    
    cout << "Вывод массива\n";
    
    for(auto &it : c){
        cout << it << endl;
    }
    
    cout << endl << "Сортировка массива(sort())" << endl;
    
    sort(c, c+10);
    
    for(auto &it : c){
        cout << it << endl;
    }    
    
    cout << endl << "Сортировка массива в случайном порядке" << endl; 
    
    random_shuffle(begin(c),end(c));
    
    for(auto &it : c){
        cout << it << endl;
    }
    
}


// Случайны вызов методов из клссов выше
void f2(){
    
    srand(time(NULL));
    
    CatAction CA;
    TeaAction TA;
    DogAction DA;
    PotatoAction PA;
    
    IAction* arr[] = {
        &CA,
        &TA,
        &DA,
        &PA
    };
    
    random_shuffle(begin(arr),end(arr));
    
    for(auto &el : arr){
        el->Action();
    }
}


int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";
    
    //f1();
    f2();
    

    return 0;
}
