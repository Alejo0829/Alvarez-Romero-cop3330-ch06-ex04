#include "Header.h"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rafael Alvarez-Romero
 */


class Name_value {
public:
	int number;
	string name;
};

vector<Name_value > PersonAdd(vector<Name_value > Storage, int i) {
	Name_value  add;
	cout << "Please enter the Name:";
	cin >> add.name;

	for (int j = 0; j < i; j++) {
		if (Storage.at(j).name == add.name) {
			cout << "This name has been previously been entered. Exiting.";
			for (int j = 0; j < i; j++) {
				cout << "\n( " << Storage.at(j).name << " , " << Storage.at(j).number << " )\n";
			}
			exit(1);
		}
	}

	cout << "Please enter the Number:";
	cin >> add.number;

	Storage.insert(Storage.begin() + i, add);

	return Storage;
}

int main()
{
	vector<Name_value> Storage;
	int i = 0;
	int j = 0;
	while (1) {
		Storage = PersonAdd(Storage, i);
		if (Storage.at(i).name == "NoName" && Storage.at(i).number == 0) {
			break;
		}
		i += 1;
	}

	for (int j = 0; j < i; j++) {
		cout << "\n( " << Storage.at(j).name << " , " << Storage.at(j).number << " )\n";
	}

	return 0;

}