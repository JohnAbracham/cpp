/******************************************************************************
Циклы
*******************************************************************************/

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    //Цикл for
    cout << "*************************************" << endl;
    cout << "\t Реализация цикла с помощью for:" << endl;
    for(int a = 0; a < 10; a++){
        cout << "Число в цикле: " << a << endl;
    }
    

    //Цикл while
    cout << "*************************************" << endl;
    cout << "\t Реализация цикла с помощью while:" << endl;
    bool loop1 = true;
    int i1 = 0;
    while(loop1){
        cout << "Число в цикле: " << i1 << endl;
        i1++;
        if(i1 == 10) break;
    }
    
    //Цикл do while
    cout << "*************************************" << endl;
    cout << "\t Реализация цикла с помощью do while:" << endl;
    i1 = 0;
    do{
       cout << "Число в цикле: " << i1 << endl;
       i1++;
       if(i1 == 10) loop1 = !loop1;
    } while(loop1);

    return 0;
}
