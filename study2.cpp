/******************************************************************************
Операторы
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <bitset>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    //Бинарные числа
    int b1 = 0b01001110;
    int b2 = 0b11011001;
    int sum1 = b1 + b2;
    cout << bitset<8>(b1) << " and " << bitset<8>(b2) << endl; 
    cout << "Сложение " << bitset<9>(sum1) << " , oct " << oct << sum1 << " , hex " << hex << sum1 << endl;
    cout << "Вычетание " << bitset<9>(b1 - b2) << " , oct " << oct << b1 - b2 << " , hex " << hex << b1 - b2 << endl;
    cout << "Умножение " << bitset<9>(b1 * b2) << " , oct " << oct << b1 * b2 << " , hex " << hex << b1 * b2 << endl;
    cout << "Деление с остатком " << bitset<9>(b1 % b2) << " , oct " << oct << b1 % b2 << " , hex " << hex << b1 % b2 << endl;
    
    // & and
    int _and = b1 & b2;
    cout << "Логическое и (&) " << bitset<8>(_and) << " , oct " << oct << _and << " , hex " << hex << _and << endl;
    
    // | or
    int _or = b1 | b2;
    cout << "Логическое или (|) " << bitset<8>(_or) << " , oct " << oct << _or << " , hex " << hex << _or << endl;
    
    // ^ nor
    int _nor = b1 ^ b2;
    cout << "Логическое или не (^) " << bitset<8>(_nor) << " , oct " << oct << _nor << " , hex " << hex << _nor << endl;
    
    // ~ not
    int _nb1 = ~ b1;
    int _nb2 = ~ b2;
    cout << "Логическое не b1 (|) " << bitset<8>(_nb1) << " , oct " << oct << _nb1 << " , hex " << hex << _nb1 << endl;
    cout << "Логическое не b2 (|) " << bitset<8>(_nb2) << " , oct " << oct << _nb2 << " , hex " << hex << _nb2 << endl;
    
    // >> 1
    int _mb1 = b1 >> 1;
    int _mb2 = b2 >> 1;
    cout << "Побитовый сдвиг вправо b1 (>> 1) " << bitset<8>(_mb1) << " , oct " << oct << _mb1 << " , hex " << hex << _mb1 << endl;
    cout << "Побитовый сдвиг вправо b2 (>> 1) " << bitset<8>(_mb2) << " , oct " << oct << _mb2 << " , hex " << hex << _mb2 << endl;
    
    // << 1
    int _mob1 = b1 << 1;
    int _mob2 = b2 << 1;
    cout << "Побитовый сдвиг влево b1 (<< 1) " << bitset<8>(_mob1) << " , oct " << oct << _mob1 << " , hex " << hex << _mob1 << endl;
    cout << "Побитовый сдвиг влево b2 (<< 1) " << bitset<8>(_mob2) << " , oct " << oct << _mob2 << " , hex " << hex << _mob2 << endl;
    
    //Восмеричные числа
    int o1 = 045;
    int o2 = 024;
    
    //Шестнадцатеричные числа
    int h1 = 0xff;
    int h2 = 0x34;


    cout << endl;
    return 0;
}
