#include "5.4-3.h"

int main()
{
	int i=-1;
	vector<borrows> borrowalsList{};
	vector<students> studentsList{};
	studentsList = createStudents(500);
	bool loopingCheck = true;
	while (loopingCheck)
	{
		bool check = false;
		int reply = 0;
		string replyID = "0";
		date searchDate;
		if (i != -1) { cout << "\n\n\n\n\n\n"; };
		cout << "What would you like to do?: \n  1: [SHOW STUDENTS] | 2: [SHOW BORROWALS] | 3: [ADD BORROWAL] | 4: [RETURN BORROWAL] | 5: [SHOW TARDINESS] | 6: [EXIT] \n\n[Input]: ";
		i = 0;
		cin >> reply;
		switch (reply)
		{
		case 1:
			displayStudents(studentsList);
			continue;

		case 2:
			displayBorrows(borrowalsList);
			continue;

		case 3:
			while (!check) {
				cout << "\n\Who is borrowing?\n\nStudent ID: ";
				cin >> replyID;
				i = 0;
				for (auto const& v : studentsList) {
					if (v.studentID == replyID) {
						studentsList[i].studentBorrows = studentsList[i].studentBorrows + 1;
						borrowalsList.push_back(addBorrow(i, borrowalsList));
						check = true;
						cout << "\n\n\n\[Borrow Successful.]";
					};
					i = i + 1;
				};
				if (!check) {
					cout << "\n\n\n\n[Wrong ID, please try again.]\n\n\n\n";
				};
			}
			continue;

		case 4:
			while (!check) {
				cout << "\n\nWhich borrowal would you like to remove?\n\nBorrow ID: ";
				cin >> reply;
				i = 0;
				for (auto const& v : borrowalsList) {
					if (v.borrowID == reply) {
						studentsList[v.studentIndex].studentBorrows = studentsList[v.studentIndex].studentBorrows - 1;
						borrowalsList.erase(borrowalsList.begin() + i);
						check = true;
						cout << "\n\n\n[Successful Removal.]";
					};
					i = i + 1;
				};
				if (!check) {
					cout << "\n\n\n\n[Wrong ID, please try again.]\n\n\n\n";
				};
			}
			continue;

		case 5:
			while (!check) {
				cout << "\n\nBefore which date do you want to start checking?\n\n";
				searchDate=createDate();
				i = 0;
				for (auto const& v : borrowalsList) {
					if (  (v.borrowDate.day < searchDate.day && v.borrowDate.month == searchDate.month && v.borrowDate.year == searchDate.year) or (v.borrowDate.month < searchDate.month && v.borrowDate.year == searchDate.year) or (v.borrowDate.year < searchDate.year)  ) {
						cout << "\n[ Student #" << i + 1 << " ]\n------------------\n ID: " << studentsList[v.studentIndex].studentID << "\n Name: " << studentsList[v.studentIndex].studentName << "\n Year: " << studentsList[v.studentIndex].studentYear << "\n------------------\nBorrow ID: " << v.borrowID << "\n Expected Return Date: " << dateToString(v.returnDate) << "\n------------------\n\n";
						check = true;
					};
					i = i + 1;
				};
				if (!check) {
					cout << "\n\n\n\n[Wrong ID, please try again.]\n\n\n\n";
				};
			}
			continue;

		case 6:
			loopingCheck = false;
			break;
		}
	};
	return 0;
}