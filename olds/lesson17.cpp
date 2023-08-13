//Попытка создать fixed and setprecision()

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]){
	float a,a1;
	a1 = 456.54465;
	cout << fixed << setprecision(2) << endl;
	cout << "VVedi chislo" << endl;
	cin >> a;
	cout << a << ";To chislo " << a1 << " - 456,54465";
}
