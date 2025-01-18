#include "5.4-3.h"

vector<students> createStudents(int input) {
	vector<students> list{};
	vector<string> yearNames = { "1st Grade", "2nd Grade", "3rd Grade", "4th Grade", "5th Grade", "6th Grade", "7th Grade", "8th Grade", "9th Grade", "10th Grade", "11th Grade", "12th Grade" };
	vector<string> names = { "Sophia","Sanjay","Jacob","Jon","Isabella","Guido","Emma","William","Jayden","Mehmet","Emily","Mia","Noah","Michael", "Ethan","Chloe","Aiden","Daniel","Elizabeth","Ava","Avery","Benjamin","Gennady","David","Sofia","Grace","Andrew","Bjarne","Logan","Zoey","Alexis","Lucas","Gabriel","Kaylee","Isaac","Taylor","Evan","Landon","Jack","Alexa","Fabrice","Aaron","Brandon","Linus","Steve","Dough","Connor","Arianna","Scarlett","Eva", "bourne","Dennis","James","Adam","John","Anders","Stephen","Jeff","Ian","Tim","Brian","Ken","Ferhat","Richard","Petr","Donald" };
	vector<string> surnames = { "Smith","Johnson","Williams","Brown","Jones","Rossum","Watson","Stone","Miller","Davis","Torvalds","Garcia","Rodrigez","Wilson", "Ethan","Anderson","Clarke","Thomas","Lee","Ava","White","Moore","Hernandez","Harris","Sofia","Grace","Lewis","Stroustrup","Hall","Zoey","Walker","Perez","Gabriel", "Lopez","Newton","Edison","Evan","Robinson","Dorsey","Alexa","Fabrice","Eder","Fischer","Clark","Jobs","Doug","Connor","Arianna","Scarlett","Eva","Again","Schwarz", "Maier","Mayr","Egger","Claes","Nielsen","Petersen","Madsen","Ilves","Robert","Leroy","Lion","Martin","Hawking","Meyer","Weber","Schulz","Becker","Hoffmann","Samaras","koufos","Kritikos","Papp","Jensen","Waage","Kvaran","Rossi","Russo","Ferrari","Esposito", "Bianchi","Romano","Emine","Egzon","Arben","Yilmaz","Demir","Sahin","Celik","Kaya","Aydin","Ozdemir","Arslan","Dogan","Kilic","Yildiz","Ozturk","Yildirim","Melnyk","Kovalenko","Boyko","Koval","Moroz","Petrenko","Robinson","Wood","Ritchie","Gosling","Gontier","John","Anders","Bezos","Ian","Cook","Brian","Gecdogan","Richard","Petr","Donald" };
	students newStudent;
	for (int i = 0; i < input; i++) {
		if (i <= 9) {
			newStudent.studentID = "E00"+to_string(i+1);
		}
		else if (i <= 99) {
			newStudent.studentID = "E0"+to_string(i+1);
		}
		else {
			newStudent.studentID = "E"+to_string(i+1);
		};
		newStudent.studentName = surnames[rand()%(120)]+ " " + names[rand() % (66)];
		newStudent.studentYear = yearNames[rand()%(12)];
		newStudent.studentBorrows = (rand()%10);
		list.push_back(newStudent);
	}
	return list;
}

int displayStudents(vector<students> list) {
	int i = 0;
	if (list.empty()) {
		cout << "\n\n\nNo students listed.";
	}
	for (auto const& v : list) {
		i = i + 1;
		cout << "\n [ Student #" << i << " ]\n------------------\n ID: " << v.studentID << "\n Name: " << v.studentName << "\n Year: " << v.studentYear << "\n Borrows: " << v.studentBorrows << "\n------------------\n\n";
	}
	return 0;
}

int displayBorrows(vector<borrows> list) {
	int i = 0;
	if (list.empty()) {
		cout << "\n\n\nNo borrowals registered.";
	}
	for (auto const& v : list) {
		i = i + 1;
		cout << "\n          [ Borrow #" << i << " ]\n----------------------------------\n ID: " << v.borrowID << "\n Student: E" << v.studentIndex+1 << "\n Date of Borrowal: " << dateToString(v.borrowDate) << "\n Date of Return: " << dateToString(v.returnDate) << "\n----------------------------------\n\n";
	}
	return 0;
}

date createDate() {
	date initDate;
	initDate.day = 40;
	initDate.month = 20;
	while (initDate.day > 31 or initDate.day < 1)
	{
		cout << "\n[Date]\nDay: "; cin >> initDate.day;
		if (initDate.day > 31 or initDate.day < 1) { cout << "Error, try again.\n"; }
	}
	while (initDate.month > 12 or initDate.month< 1)
	{
		cout << "Month: "; cin >> initDate.month;
		if (initDate.month > 12 or initDate.month < 1) { cout << "Error, try again.\n"; }
	}
	cout << "Year: "; cin >> initDate.year;
	return initDate;
}

string dateToString(date initDate) {
	return to_string(initDate.day) + "/" + to_string(initDate.month) + "/" + to_string(initDate.year);
}

borrows addBorrow(int studentID, vector<borrows> list) {
	borrows newBorrow;

	newBorrow.studentIndex = studentID; // Gives the index of the student from the student list to our new borrow

	if (!list.empty()) { //Check if borrows already exist
		newBorrow.borrowID = list.back().borrowID + 1; //If so, take the last element's .borrowID and add 1
	}
	else {
		newBorrow.borrowID = 1; //Otherwise, give it the defaut ID of 1
	}

	date date = createDate();
	newBorrow.borrowDate = date;
	
	if (date.day > 16) { //Check if itself + 15 is over 31
		date.day = (date.day + 15) - 31;
		
		if (date.month = 12) { //Checks if it's the last month (12th)
			date.month = 1;
			date.year = date.year + 1;
		} else {
			date.month = date.month + 1;
		}
	} else {
		date.day = date.day + 15;
	}
	newBorrow.returnDate = date;

	return newBorrow;
}