#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int int_value15 = 15, int_value2 = 2; // ��������� ��� ���������� ���� int
    float float_value15 = 15, float_value2 = 2; // ��������� ��� ���������� ���� float
    cout << fixed << setprecision(2) // ����������, ��� ������ ����� � ��������� ������, ��� ����� ����� �������
         << "15   / 2   = " << int_value15   / int_value2   << endl  //������� �������������� ����� ������
         << "15   / 2   = " << int_value15   / float_value2 << endl  //������� �������������� ����� ������
         << "15   / 2   = " << float_value15 / int_value2   << endl  //������� �������������� ����� ������
         << "15   / 2   = " << float_value15 / float_value2 << endl; //������� �������������� ����� ������
    cout << "15.0 / 2   = " << 15.0 / 2 << endl  // ����� �������������� ���� ������, ����� 15.0 - ����� � ��������� ������
         << "15   / 2.0 = " << 15 / 2.0 << endl; // ����� �������������� ���� ������, ����� 2.0  - ����� � ��������� ������
    cout << "float(int_value15) / int_value2 = " << float(int_value15) / int_value2 << endl // ����� �������������� ���� ������
         << "15 / double(2) = " << 15 / double(2) << endl;                                    // ��������� ���������� ��� ��� �������
    cout << "static_cast<float>(15) / 2 = " << static_cast<float>(15) / 2 << endl // ������� �������� ���������� ����
         << "static_cast<char>(15) = " << static_cast<char>(15) << endl  // ����� �������� ��������� ������� �� ������� ASCII,
         << "static_cast<char>(20) = " << static_cast<char>(20) << endl; // � ��������� ����������� ��� �������, ������� ������� � ������� ASCII
    system("pause");
    return 0;
}
