#include <iostream>
using namespace std;            // http://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
void wybor();                   // wrzuc od razu do osobnego pliku - im na mniej kodu sie patrzy na raz, tym lepiej

int main()
{
	wybor();
	system("pause");
}

void wybor()
{
	char wybor;
	cout << "Wybierz metoda wprowadzania:\n m - manualnie\n l - losowo\n f - z pliku\n";
	wybor = getchar();          // ta funkcja jest z <cstdio>, a nie masz tego zaincludowanego - to ze dziala to tylko dobra wola visuala

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
		cout << "nada\n";       // na bank tego zapomnisz zmienic przed oddaniem
		break;
	}
}