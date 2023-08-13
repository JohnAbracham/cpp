#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
	float x,y,z;
	cout << "Vvedi x:" << endl;
	cin >> x;
	cout << "Vvedi y:" << endl;
	cin >> x;
	cout << "Vvedi z:" << endl;
	cin >> z;
	float vec = sqrt(pow(x,2)+y*y+z*z);
	cout << "Vector raven: " << vec << endl;
    system("pause");
    return 0;
}
