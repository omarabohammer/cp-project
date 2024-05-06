#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H
#include "BookManager.h"

class InputManager : public BookManager {

public:
	getData() {
		cout << "Type The Department: ";
		cin >> department;

		cout << "Type the Author: ";
		cin >> author;
	}

};


#endif