/*
Цикл do while
*/

#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    cout << "Enter the first limit: "; // начальное значение из интервала
    int first_limit;
    cin >> first_limit;
    cout << "Enter the second limit: "; // конечное значение из интервала
    int second_limit;
    cin >> second_limit;
    int sum = 0, count = first_limit;
    do
    {
     sum += count; // наращивание суммы
     count++; // инкремент начального значения из задаваемого интервала
    } while (count <= second_limit); // конец цикла do while
    cout << "sum = " << sum << endl; // печать суммы
    system("pause");
    return 0;
}
