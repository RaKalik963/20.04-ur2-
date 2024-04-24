#include <iostream>
#include <Windows.h>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
/*SetConsoleTextAttribute(handle, 0x0);
*/
/*S = pi*R2  L=2*pi *R.
*/
int main()
{
	double pi = 3.14;
	double R = 5;
	cout << "S = " << pi * (R * R) << endl;
	cout << "L = " << 2 * pi * R << endl;
	system("pause");
	return 0;
}