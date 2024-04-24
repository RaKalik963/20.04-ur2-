#include <iostream>
#include <Windows.h>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
/*SetConsoleTextAttribute(handle, 0x0);
*/

int main()
{
	double R1 = 3;
	double R2 = 5;
	double R3 = 9;
	cout << "R0 = " << 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3) << endl;
}