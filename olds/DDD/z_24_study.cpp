#include <windows.h>
using namespace std;
int main()
{
    ///������ ���� ������
    char buf[16],buf1[16],buf2[16],buf3[16],buf4[16],buf5[16],buf6[16],buf7[16];
    CharToOem("�����������",buf1);
    CharToOem("�������",buf2);
    CharToOem("�����",buf3);
    CharToOem("�������",buf4);
    CharToOem("�������",buf5);
    CharToOem("�������",buf6);
    CharToOem("�����������",buf7);
    cout<<"1. "<<buf1<<endl<<"2. "<<buf2<<endl<<"3. "<<buf3<<endl;
    <<"4. "<<buf4<<endl<<"5. "<<buf5<<endl<<"6. "<<buf6<<endl;
    <<"7. "<<buf7<<endl;
    CharToOem("������� �����: ",buf);
    cout<<buf;
    int number;
    cin>>number;
    switch(number)
    {
        case 1:
        {
            cout<<buf1;
            break;
        }
        case 2:
        {
            cout<<buf2;
            break;
        }
        case 3:
        {
            cout<<buf3;
            break;
        }
        case 4:
        {
            cout<<buf4;
            break;
        }
        case 5:
        {
            cout<<buf5;
            break;
        }
        case 6:
        {
            cout<<buf6;
            break;
        }
        case 7:
        {
            cout<<buf7;
            break;
        }
        default:
        {
            CharToOem("������",buf);
            cout<<buf;
            return 0;
        }
    }
    return 0;
}
