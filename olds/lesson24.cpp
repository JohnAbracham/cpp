/*
Цикл for
*/

#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    int counter_even = 0;
    for (int count = 2; count <= 50; count += 2) // заголовок цикла
        counter_even ++; // подсчёт чётных чисел
    cout << "number of even numbers = " << counter_even << endl;
    system("pause");
    return 0;
}
