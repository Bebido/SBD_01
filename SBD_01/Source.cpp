#include <iostream>
using namespace std;
void wybor();

int main()
{
	wybor();
	system("pause");
}

void wybor()
{
	char wybor;
	cout << "Wybierz metoda wprowadzania:\n m - manualnie\n l - losowo\n f - z pliku\n";
	wybor = getchar();

	switch (wybor)
	{
	case 'l':
		cout << "los\n";
		break;
	case 'm':
		cout << "manual\n";
		break;
	case 'f':
		cout << "plik\n";
		break;
	default:
		cout << "nada\n";
		break;
	}
}