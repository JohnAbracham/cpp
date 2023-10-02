/******************************************************************************
STL - сумма и произведение элементов массива(accumulate)
std::begin()
std::end();
std::next();
*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#include <numeric>

using namespace std;


//Простое использоввание(сумма)
void f1(){
    
    vector<int> v = {1,4,7,8,11,23,56};
    
    auto result = accumulate(v.begin(), v.end(),0);
    //Тоже самое
    //int result = accumulate(std::begin(v), std::end(v),0);
    
    cout << result << endl;
    
}

//Более сложное(произведение)
void f2(){
    
    vector<int> v = {1,4,7,8,11};
    
    //a - итоговое число суммирования/умножения/вычитания... , b - следующее число
    auto result = accumulate(v.begin(), v.end(), 1 , [] (int a, int b){
        return a * b;
    });
    //Тоже самое
    //int result = accumulate(std::begin(v), std::end(v),0);
    
    cout << "RESULT\t" << result << endl;
    
}


//Сумма четных элементов
void f3(){
    
    int v [] = {1,4,7,8,11};
    
    //a - итоговое число суммирования/умножения/вычитания... , b - следующее число
    auto result = accumulate(begin(v), end(v), 1 , [] (int a, int b){
        if(b%2 == 0){
            return a * b;
        } else {
            return a;
        }
    });
    //Тоже самое
    //int result = accumulate(std::begin(v), std::end(v),0);
    
    cout << "RESULT\t" << result << endl;    
}


//Преобразовать в строку
void f4(){
    
    int v [] = {1,4,7,8,11};
    
    //a - итоговое число суммирования/умножения/вычитания... , b - следующее число
    auto result = accumulate(next(begin(v)), end(v), to_string(v[0]) , [] (string a, int b){
        return a + "+" + to_string(b);
    });
    //Тоже самое
    //int result = accumulate(std::begin(v), std::end(v),0);
    
    cout << "RESULT\t" << result << endl;        
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир";
    
    //f1();
    //f2();
    //f3();
    f4();

    return 0;
}
