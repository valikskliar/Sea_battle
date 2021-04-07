#include<iostream>
#include<time.h>
using namespace std;
//корабли будут символом char(127)
//поврежденние ячейки символ х
//ячейки где "мимо" char(126)
void pole()
{
	char pole_show[10][10];
	cout << endl << "      =======================" << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			pole_show[i][j] = char(176);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << '\t';
		for (int j = 0; j < 10; j++)
			cout << pole_show[i][j] << ' ';
		cout << endl;
	}
	cout << "      =======================" << endl;
}
void main()
{
	setlocale(LC_ALL, "");
	cout << "\t    Морской бой\n";
	/*int menu;
	cout << "Выберите с кем будете играть:\n1 - компьютер\n2 - другой игрок" << endl;
	cin >> menu;
	switch (menu)
		case 1: 
			cout << "Извините, но функция пока в разработке =)" << endl;
			menu = 2; break;
		case 2: 
			srand(time(NULL));
			int temp = 0;
			cout << "Определите кто игрок №1, а кто №2 и нажмите Enter" << endl;
			system("CLS");
			system("pause");
			for (int i = 0; i < 2; i++)
			{
				temp = rand() % 2;
				if (temp == false)
				{
					cout << "Первым ходит игрок №1";
					system("pause");
					system("CLS");
				}
				else
				{
					cout << "Первым ходит игрок №2";
					system("pause");
					system("CLS");
				}
			}; break;*/
	pole();

}