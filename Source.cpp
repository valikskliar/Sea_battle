#include<iostream>
#include<time.h>
using namespace std;
//������� ����� �������� char(127)
//������������ ������ ������ �
//������ ��� "����" char(126)
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
	cout << "\t    ������� ���\n";
	/*int menu;
	cout << "�������� � ��� ������ ������:\n1 - ���������\n2 - ������ �����" << endl;
	cin >> menu;
	switch (menu)
		case 1: 
			cout << "��������, �� ������� ���� � ���������� =)" << endl;
			menu = 2; break;
		case 2: 
			srand(time(NULL));
			int temp = 0;
			cout << "���������� ��� ����� �1, � ��� �2 � ������� Enter" << endl;
			system("CLS");
			system("pause");
			for (int i = 0; i < 2; i++)
			{
				temp = rand() % 2;
				if (temp == false)
				{
					cout << "������ ����� ����� �1";
					system("pause");
					system("CLS");
				}
				else
				{
					cout << "������ ����� ����� �2";
					system("pause");
					system("CLS");
				}
			}; break;*/
	pole();

}