#include <iostream>
#include <Windows.h>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
/*SetConsoleTextAttribute(handle, 0x0);
*/

int main()
{
	double v = 30;
	double t = 5;
	double a = 10;
	cout << "S = " << v * t + (a * (t * t)) / 2 << endl;
	system("pause");
	return 0;
}