#include <iostream>
#include <string>
#include <vector>
#include "vectors.h"

using namespace std; 

implementVector::implementVector() {}

void implementVector::add(string str) {
	myList.push_back(str);
	//cout << str << " was added to list" << endl;
}

int implementVector::getSize(void) {
	return myList.size();
}

void implementVector::print(void) {
	for (auto i : myList) {
		cout << i << ' '; 
	}
}

void learnVectors(void) {
	implementVector vObj;
	string s;
	string s1 = "Done";
	int count = 0;
	cout << "Enter list of Entries: Enter 'Done' When Finished" << endl;
	while (getline(cin, s)) {
		if (s == s1) {
			break;
		}
		else {
			vObj.add(s);
		}
	}
	vObj.print();
	cout << endl << "The amount of objects placed in the vector were: " << vObj.getSize();
}