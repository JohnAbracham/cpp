/******************************************************************************
Поиск максимального и минимального значения - max_element/min_element/minmax_element
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

//max_element
void f1(){
    
    vector<int> v = {1,22,35,85,49,85,2,-9,-88};
    list<int> l = {86,8,72,31,45,6,8,21,36,88,-100};
    
    int COUNT = 9;
    int arr[COUNT] = {1,22,35,85,49,999,2,-9,-88};
    
    int countV = 0;
    
    for(auto it = v.begin(); it != v.end();++it){
        
        countV++;
        
        cout << "N\t" << countV << "\tvalue is:\t" << *it << endl;
    
        
    }
    
    cout << endl;
    
    auto it = max_element(v.begin(),v.end());
    
    cout << "max v: " << *it << endl;
    
    auto res = max_element(arr, arr + COUNT);
    
    cout << "max arr: " << *res << endl;
    
}

//min_element
void f2(){
    
    
    vector<int> v = {1,22,35,85,49,85,2,-9,-88};
    list<int> l = {86,8,72,31,45,6,8,21,36,88,-100};
    
    int COUNT = 9;
    int arr[COUNT] = {1,22,35,85,49,999,2,-9,-88};
    
    int countV = 0;
    
    for(auto it = v.begin(); it != v.end();++it){
        
        countV++;
        
        cout << "N\t" << countV << "\tvalue is:\t" << *it << endl;
    
        
    }
    
    cout << endl;
    
    
    //vector
    auto it = min_element(v.begin(),v.end());
    
    cout << "min v: " << *it << endl;
    
    
    //list
    auto it1 = min_element(l.begin(), l.end());
    
    cout << "min l: " << *it1 << endl;
    
    
    //arr
    auto res = min_element(arr, arr + COUNT);
    
    cout << "min arr: " << *res << endl;    
    
}

//minmax_element - возвращается пара элементов
void f3(){

    list<int> l = {86,8,72,31,45,6,8,21,36,88,-100};
    
    auto res = minmax_element(l.begin(), l.end());
    
    cout << "min\t" << *res.first << endl;
    cout << "max\t" << *res.second << endl;
    
}



int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";

    //f1();
    //f2();
    f3();

    return 0;
}
