#pragma once
#include <iostream>

struct database {
	std::string title;
	int notesNumbers = 0;
	std::string notes;

};


void addNote(database &DB);

void showDatabase(database& DB);

void clearNotes(database& DB);