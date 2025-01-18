#ifndef TD543_H
#define TD543_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

struct date {
	int day;
	int month;
	int year;
};

struct students {
	string studentID;
	string studentName;
	string studentYear;
	int studentBorrows;

};

struct borrows {
	int borrowID;
	date borrowDate;
	date returnDate;
	int studentIndex;
};

vector<students> createStudents(int input);
int displayStudents(vector<students> list);
int displayBorrows(vector<borrows> list);
date createDate();
string dateToString(date initDate);
borrows addBorrow(int studentID, vector<borrows> list);


#endif