/******************************************************************************
Algorithm - find, count, mismatch, equal, reverse
*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

//find
void f1(){
    
    array<int, 10> arr = {1,3,5,7,89,31,6,11,45,28};
    
    vector<int> v = {1,3,5,7,89,31,6,11,45,28};
    
    for_each(begin(arr),end(arr),[](int &a){
        cout << a << endl;
    });
    
    auto it = find(begin(arr),end(arr),31);
    
    cout << endl;
    
    cout << *it << endl;
}

//count
void f2(){
    
    const int SIZE_ARR = 10;
    
    int arr[SIZE_ARR] = {1,3,5,7,89,31,6,1,45,1};
    
    vector<int> v = {1,3,5,7,89,31,6,11,45,28};
    
    for_each(begin(arr),end(arr),[](int &a){
        cout << a << endl;
    });    
    
    int res = count(arr,arr+SIZE_ARR,1);
    
    cout << endl;
    
    cout << res << endl;
    
}

//mismatch
void f3(){
    
    const int SIZE_ARR = 10;
    
    int arr[SIZE_ARR] = {1,3,5,7,89,31,6,1,45,1};
    
    vector<int> v = {1,3,5,7,89,31,6,11,45,28};
    
    for_each(begin(arr),end(arr),[](int &a){
        cout << a << endl;
    });     
    
    auto res = mismatch(begin(arr),end(arr),begin(v));
    
    cout << endl;
    
    cout << *res.second << endl;
    
}

//equal
void f4(){
    
    const int SIZE_ARR = 10;
    
    int arr[SIZE_ARR] = {1,3,5,7,89,31,6,1,45,1};
    
    vector<int> v = {1,3,5,7,89,31,6,11,45,28};
    
    for_each(begin(arr),end(arr),[](int &a){
        cout << a << endl;
    });  
    
    bool res = equal(begin(arr),end(arr),begin(v));
    
    cout << endl;
    
    cout << res << endl;
    
}

//reverse
void f5(){
    
    const int SIZE_ARR = 10;
    
    int arr[SIZE_ARR] = {1,3,5,7,89,31,6,1,45,1};
    
    vector<int> v = {1,3,5,7,89,31,6,11,45,28};
    /*
    for_each(begin(arr),end(arr),[](int &a){
        cout << a << endl;
    });*/   
    
    cout << "reverse arr" << endl;
    
    reverse(arr, arr+SIZE_ARR);
    
    for_each(begin(arr),end(arr),[](int &a){
        cout << a << endl;
    });
    
    cout << "reverse v" << endl;
    
    reverse(begin(v),end(v));
    
    for_each(begin(v),end(v),[](int &a){
        cout << a << endl;
    });    
    
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";

    //f1();
    //f2();
    //f3();
    //f4();
    f5();

    return 0;
}
