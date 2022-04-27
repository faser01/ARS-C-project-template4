
#include "Data.h"
#include <iostream>
#include "string"

void addNote(database& DB)
{
	std::cout << "Введите новую запись: ";
	std::string newNote;
	std::getline(ctd::cin, newNote);
	DB.notes += std:: to_string (DB.notesNumber) + " . " + newNote + "\n";
	std::cout << " Запись добавлена";
	system(pause);
}

void showDatabase(database& DB)
{
	std::cout << "Страница: " << DB.title << std::endl;
	std::cout << "Количество записей:  " << DB.notesNumbers<< std::endl;
	std::cout << "записи:\n " << DB.notes << std::endl;
	system(pause);
}

void clearNotes(database& DB)
{
	DB.notes = "";
	DB.notesNumbers = 0;
	std::cout << "Записи удалены \n";
	system(pause);
}
