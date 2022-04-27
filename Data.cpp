
#include "Data.h"
#include <iostream>
#include "string"

void addNote(database& DB)
{
	std::cout << "������� ����� ������: ";
	std::string newNote;
	std::getline(ctd::cin, newNote);
	DB.notes += std:: to_string (DB.notesNumber) + " . " + newNote + "\n";
	std::cout << " ������ ���������";
	system(pause);
}

void showDatabase(database& DB)
{
	std::cout << "��������: " << DB.title << std::endl;
	std::cout << "���������� �������:  " << DB.notesNumbers<< std::endl;
	std::cout << "������:\n " << DB.notes << std::endl;
	system(pause);
}

void clearNotes(database& DB)
{
	DB.notes = "";
	DB.notesNumbers = 0;
	std::cout << "������ ������� \n";
	system(pause);
}
