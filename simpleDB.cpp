// ������6������ ������ �++
#include < iostream>
#include "Data.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	database page1 = ("ShopList");
		int answer;



		do {
			system(cls);
			cout << "�������� �������� \n";
			cout << "1 �������� ������ \n";
			cout << "2 ������� ���� ������ \n";
			cout << "3 ���������� ������ \n";
			cout << "���� --> ";
			cin >> answer;
			cin.ignore;
			switch (answer) {
			case1: addNote(page1); break;
			case2: showDatabase(page1); break;
			case3: clearNotes(page1); break;
			case4:"���������� ������ \n"system(pause);
			}default cout << "����� ������� �� ����������"

		} while (answer != 4);


	return 0;
}