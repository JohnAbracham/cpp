/*
Объявление двухмерного массива с помощью new и delete
*/

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
 
int main(int argc, char* argv[])
{
    srand(time(0)); // генерация случайных чисел
    // динамическое создание двумерного массива вещественных чисел на десять элементов
    float **ptrarray = new float* [2]; // две строки в массиве
    for (int count = 0; count < 2; count++)
        ptrarray[count] = new float [5]; // и пять столбцов
    // заполнение массива
    for (int count_row = 0; count_row < 2; count_row++)
        for (int count_column = 0; count_column < 5; count_column++)
            ptrarray[count_row][count_column] = (rand() % 10 + 1) / float((rand() % 10 + 1)); //заполнение массива случайными числами с масштабированием от 1 до 10
    // вывод массива
    for (int count_row = 0; count_row < 2; count_row++)
    {
        for (int count_column = 0; count_column < 5; count_column++)
            cout << setw(4) <<setprecision(2) << ptrarray[count_row][count_column] << "   ";
        cout << endl;
    }
    // удаление двумерного динамического массива
    for (int count = 0; count < 2; count++)
        delete []ptrarray[count];
    system("pause");
    return 0;
}
