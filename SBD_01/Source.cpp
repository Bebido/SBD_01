#include <iostream>
using namespace std;

int main()
{
	char wybor;
	wybor = getchar();

	switch (wybor)
	{
	case 'l':
		cout << "los\n";
		break;
	case 'm':
		cout << "manual\n";
		break;
	default:
		cout << "plik\n";
		break;
	}

	system("pause");
}