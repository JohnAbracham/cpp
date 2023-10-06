/******************************************************************************
STL - Удалить повторяющиеся элементы unique/unique_copy
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

//#define FUNCTION1
//#define FUNCTION2
#define FUNCTION3

using namespace std;

//unique
void f1(){
    int arr[] = {1,1,1,2,3,44,44,55,55,6,6,7};
    
    cout << "Before:" << endl;
    
    for(const auto &it : arr){
        cout << it << endl;
    }
    
    //Получить указатель на последний не повторяющийся элемент отсортированного массива
    auto res = unique(begin(arr),end(arr));
    
    cout << "After:" << endl;
    
    for(const auto &it : arr){
        cout << it << endl;
    }    
    
    //Обрезанный массив 
    cout << "Cuted:" << endl;
    
    for_each(begin(arr),res,[](const int &a){
        cout << a << endl;
    });
    
}

//Возможность обрезать массив(не статический array)
void f2(){
    vector<int> v = {1,1,1,2,3,44,44,55,55,6,6,7};
    
    cout << "Before(unique):" << endl;
    
    for_each(begin(v),end(v),[](const int &a){
        cout << a << endl;
    });
    
    auto res = unique(begin(v),end(v));
    
    cout << "Before(erase):" << endl;
    
    for_each(begin(v),end(v),[](const int &a){
        cout << a << endl;
    });
    
    v.erase(res,end(v));
    
    cout << "After(erase):" << endl;;
    
    for_each(begin(v),end(v),[](const int &a){
        cout << a << endl;
    });
    
}

//unique_copy - сортировать, обрезать и записать в новый массив
void f3(){
    
    vector<int> v = {1,1,1,2,3,44,44,55,55,6,6,7};
    
    list<int> v_res;
    
    unique_copy(v.begin(),v.end(),back_inserter(v_res));
    
    for_each(begin(v_res),end(v_res),[](const int &a){
        cout << a << endl;
    });
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";


    #ifdef FUNCTION1
    f1();
    #endif
    
    #ifdef FUNCTION2
    f2();
    #endif
    
    #ifdef FUNCTION3
    f3();
    #endif

    return 0;
}
