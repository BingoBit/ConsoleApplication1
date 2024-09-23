#include <iostream> 
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a1, b1, c1, s1, v1;
	string d1, f1, g1;
	cout << "Введите команду для действий:" << endl << "0 для сложения\n1 для суммы слов\n2 для умножения\n3 для деления\n4 для деления с остатком" << endl;
	cin >> a1;
	cout << (a1 == 1) << endl;
	if (a1 == 0)
	{
		cout << "1 число" << endl;
		cin >> b1;
		cout << "2 число" << endl;
		cin >> c1;
		s1 = b1 + c1;
		cout << "Сумма = " << s1 << endl;
	}
	else
		if (a1 == 1)
		{
			cout << "1 слово" << endl;
			cin >> d1;
			cout << "2 слово" << endl;
			cin >> f1;
			g1 = d1 + " " + f1;
			cout << "Cумма слов = " << g1 << endl;
		}
		else
			if (a1 == 2)
			{
				cout << "1 число" << endl;
				cin >> b1;
				cout << "2 число" << endl;
				cin >> c1;
				s1 = b1 * c1;
				cout << "Произведение = " << s1 << endl;
			}
			else
				if (a1 == 3)
				{
					cout << "1 число" << endl;
					cin >> b1;
					cout << "2 число" << endl;
					cin >> c1;
					s1 = b1 / c1;
					cout << " Частное = " << s1 << endl;
				}
				else
					if (a1 == 4)
					{
						cout << "1 число" << endl;
						cin >> b1;
						cout << "2 число" << endl;
						cin >> c1;
						s1 = b1 / c1;
						v1 = b1 % c1;
						if (s1 != v1)
						{
							cout << "Частное = " << s1 << endl;
							cout << "Остаток = " << v1 << endl;
						}
						else
						{
							cout << "Частное = " << s1 << endl;
						}
					}
}
