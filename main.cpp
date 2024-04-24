#include <iostream>
#include <Windows.h>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
/*SetConsoleTextAttribute(handle, 0x0);
*/
/*              Name       : 
                Avtor      :   L.N. Tolstoj
                Izdatelstvo:  Piter
                Pages      : 500
*/
int main()
{
    cout << "Name       : ";
    SetConsoleTextAttribute(handle, 0x06);
    cout << "\"The war and the peace\"" << endl;
    SetConsoleTextAttribute(handle, 0x0F);
    cout << "Avtor      : L.N. Tolstoj" << endl;
    cout << "Izdatelstvo: Piter" << endl;
    cout << "Pages      : ";
    SetConsoleTextAttribute(handle, 0x05);
    cout << "500" << endl;
	system("pause");
	return 0;
}
