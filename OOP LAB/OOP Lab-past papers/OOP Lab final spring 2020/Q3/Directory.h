#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <string>
using namespace std;

template <class T>
class Directory {

private:
	// your attributes/ private functions here

public:
	
	Directory(string outputFileName = "EmployeeDirectory.txt") {

	}

	void Add(T empID, string firstName, string lastName, string empContactNumber, string empAddress) {

	}

	bool SearchById(T empID, string &firstName, string &lastName, string& empContactNumber, string& address) {
		// return false if no such id exists
		// return true if id exists AND assign attributes to the passed references
	}

	void printDetails() {

	}

	~Directory() {

	}
};

#endif
