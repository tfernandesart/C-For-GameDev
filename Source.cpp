#include <iostream>
using namespace std;

int main()
{
	char myCharacter;
	myCharacter = 'Y';

	int myInt;
	myInt = 98237210;

	cout << myCharacter << endl;
	cout << myInt << endl;
	cout << "You Died! Now, you will be able to restart...\n";

	myCharacter = 'T';
	myInt = 99999999;

	cout << myCharacter << endl;
	cout << myInt << endl;
	cout << "You Died Again! Now, you will be able to restart...\n";

	system("pause");

}