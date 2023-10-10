/******************************************************************************
Попытка работы с документацией algorithm
*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <clocale>
#include <string>
#include <cmath>

using namespace std;

//all_of - вернуть результат если для каждого верно
void f1(){
    
    vector<int> v = {1,2,56,8,1,8,9,11,6,7,0,11,4,5,7,2};
    vector<int> one = {1,1,1,1,1,1,1,1,1};
    
    bool res = all_of(begin(one),end(one),[](int &a){
        return a == 1;
    });
    
    cout << "all_of result:\t" << res << endl;
    
}

//any_of
void f2(){
    
    vector<int> v = {1,2,56,8,1,8,9,11,6,7,0,11,4,5,7,2};
    vector<int> one = {1,1,1,1,1,1,1,1,1}; 
    
    bool res = any_of(begin(v),end(v),[](int &a){
        return a == 1;
    });
    
    cout << "any_of result:\t" << res << endl;
}

//for_each
void f3(){

    vector<int> v = {1,2,56,8,1,8,9,11,6,7,0,11,4,5,7,2};
    vector<int> one = {1,1,1,1,1,1,1,1,1}; 
    
    auto res = for_each(begin(v),end(v),[](int &a){
        return a*a;
    });
    
    for_each(begin(v),end(v),[](int &a){
        cout << a << endl;
    });
    
}
int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";
    
    f1();
    f2();
    f3();

    return 0;
}
