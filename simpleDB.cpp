// Персон6альный шаблон С++
#include < iostream>
#include "Data.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	database page1 = ("ShopList");
		int answer;



		do {
			system(cls);
			cout << "Выберите действие \n";
			cout << "1 Добавить запись \n";
			cout << "2 Вывести базу данных \n";
			cout << "3 Завершение работы \n";
			cout << "Ввод --> ";
			cin >> answer;
			cin.ignore;
			switch (answer) {
			case1: addNote(page1); break;
			case2: showDatabase(page1); break;
			case3: clearNotes(page1); break;
			case4:"Завершение заботы \n"system(pause);
			}default cout << "Такой команды не существует"

		} while (answer != 4);


	return 0;
}