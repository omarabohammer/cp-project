#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class BookManager {

private:

	string department;
	string title;
	string author;
	int bookID;

public:

	BookManager() {
		department = "";
		title = "";
		author = "";
		bookID = 0;
	}

	BookManager(string dep, string tit, string auth, int ID) {
		department = dep;
		title = tit;
		author = auth;
		bookID = ID;
	}

	void addBook() {
		// Majors: Computer, Electrical, Civil, Electronics, Mechanical and Architecture

		if (department == "Electronics") {
			ofstream file("Electronics.txt", ios_base::app);
			file << title << "\t" << author << "\t" << bookID << endl;
			file.close();
		}

		else if (department == "Computer") {
			ofstream file("Computer.txt", ios_base::app);
			file << title << "\t" << author << "\t" << bookID << endl;
			file.close();
		}

		else if (department == "Electrical") {
			ofstream file("Electrical.txt", ios_base::app);
			file << title << "\t" << author << "\t" << bookID << endl;
			file.close();
		}

		else if (department == "Civil") {
			ofstream file("Civil.txt", ios_base::app);
			file << title << "\t" << author << "\t" << bookID << endl;
			file.close();
		}

		else if (department == "Mechanical") {
			ofstream file("Mechanical.txt", ios_base::app);
			file << title << "\t" << author << "\t" << bookID << endl;
			file.close();
		}

		else if (department == "Architecture") {
			ofstream file("Architecture.txt", ios_base::app);
			file << title << "\t" << author << "\t" << bookID << endl;
			file.close();
		}

	}

	void viewBooks(string department) { // Not Working
		string path = "";
		path += department;
		path += ".txt";

		ifstream file(path);

		string title, author;
		int id;

		cout << "[ ";

		while (file >> title >> author >> id)
		{
			// file >> title >> author >> id;
			cout << title << " , ";
		}
		file.close();

		cout << " ]";
	}


};


class StudentRecordManager { // Not Complete
	string studentName;
	string department;
	int studentID;
	int bookID;

};


int main() {

	BookManager test1("Electronics", "THE DEAD", "AMMAR AYMAN", 235103);
	test1.addBook();

	BookManager test2("Electronics", "BRUH", "OMAR AYMAN", 56187);
	test2.addBook();

	BookManager test3("Electronics", "NIGGA", "WHAAT", 219561);
	test3.addBook();

	cout << "Added" << endl;

	test1.viewBooks("Electronics");

	return 0;
}
