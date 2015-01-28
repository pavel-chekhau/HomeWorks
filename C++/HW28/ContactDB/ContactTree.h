#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class ContactTree
{
public:
	ContactTree();
	virtual ~ContactTree();

	struct Subscriber {
		int number;
		int name;
		Subscriber* left;
		Subscriber* right;
		Subscriber* parent;
		Subscriber(const int index) :name(index), left(NULL), right(NULL), parent(NULL) {}
		~Subscriber() {}
	};

	int& operator[](const int);
	Subscriber* searchByName(const int);
	//////////////////////////////////////////
	/*string& operator[](const string&);
	void editNumber(const string&, const string&);
	void editName(const string&, const string&);
	Subscriber* searchByName(const string&);
	void searchByNumber(const string&, Subscriber*);
	void deleteContact(const string&);*/
	void deleteContact(const int);
	void print(Subscriber*);
	void showFromLeft(Subscriber*);
	void showFromRight(Subscriber*);
	Subscriber* max(Subscriber*);
	Subscriber* min(Subscriber*);
	Subscriber* next(Subscriber*);
	Subscriber* prev(Subscriber*);
	friend Subscriber* getRoot(ContactTree*);
private:
	Subscriber* root;
	size_t sizeOfTree;
};
