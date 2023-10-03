/******************************************************************************
STL - equal и mismatch
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

//equal
void f1(){
    
    int arr[] = {1,2,3,4,5,6};
    
    list<int> lst = {1,2,3,4,5,6,7};
    
    vector<int> lst1 = {6,5,4,3,2,1};
    
    vector<int> arr1 = {1,2,3,4,5,6};
    
    bool res = equal(begin(arr),end(arr),begin(arr1));
    
    bool res1 = equal(begin(arr),end(arr),begin(lst1));
    
    cout << "До сортировки второго\n" << res << endl << res1 << endl;
    
    cout << endl;
    
    sort(begin(lst1), end(lst1));
    
    res1 = equal(begin(arr),end(arr),begin(lst1));
    
    cout << "После сортировки второго\n" << res << endl << res1 << endl;
    
}


//mismatch - получает пару несоответствующих чисел как результат
void f2(){
    int arr[] = {1,2,3,4,5,6};
    
    list<int> lst = {1,2,3,4,5,6,7};
    
    vector<int> lst1 = {6,5,4,3,2,1};
    
    vector<int> arr1 = {6,2,3,4,5,1};    
    
    auto res = mismatch(begin(arr),end(arr),begin(arr1));
    
    if(res.first == end(arr) && res.second == end(lst1)){
        cout << "+" << endl;
    } else {
        cout << "-" << endl;
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
