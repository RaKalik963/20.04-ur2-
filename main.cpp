#include <iostream>
#include <Windows.h>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
/*SetConsoleTextAttribute(handle, 0x0);
*/
/*"U lukomor'a dub zelenij,
 Zlataya zep na dupe tom,
 I dnem i nochju kot uchenij
 vse hodit po cepi krugom"
 */
int main()
{
	SetConsoleTextAttribute(handle, 0x06);
	cout << "\"U lukomor'a dub zelenij,\a" << endl;
    cout << "Zlataya zep na dupe tom,\a" << endl;
    cout << "I dnem i nochju kot uchenij\a" << endl;
    cout << "vse hodit po cepi krugom\a\"" << endl;
	system("pause");
	return 0;
}