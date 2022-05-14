#ifndef HEADER_H
#define HEADER_H

#include <string>
#include <iostream>

using namespace std;

class Student {
private:

	string firstName;
	string lastName;
	string age;

public:
	
	Student();
	~Student();
	void setfirstName(string name);
	void setlastName(string name);
	void setAge(string name);
	string getfirstName() const;
	string getlastName() const;
	string getAge() const;
	friend ostream& operator<<(ostream&, const Student&);
	friend istream& operator>>(istream&, Student&);
	Student& operator=(const Student&);
};

#endif