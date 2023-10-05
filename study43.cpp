/******************************************************************************
STL - for_each
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

void f1(){
    
    int arr[] = {1,2,3,4,5,6};
    
    cout << "for_each" << endl;
    
    for_each(begin(arr),end(arr),[](const int &a){
        cout << a << endl;
    });
    
    cout << "for" << endl;
    
    for(int &it : arr){
        cout << it << endl;
    }
    
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";
    
    f1();

    return 0;
}
