#pragma once
#include <iostream>
#include <vector>
#include <string>

class implementVector {
public:
	implementVector();
	void add(std::string str); 
	int getSize(void);
	void print(void);
private:
	std::vector<std::string> myList;
};

void learnVectors(void);