#include<iostream>
#include<string>
using namespace std;
class GradeBook {
public:
	void displayMessage(string courseName) const {
		cout << "welcome to gradeBook " + courseName << endl;
	}
};

int main() {
	string courseName;
	GradeBook gradeBook;
	cout << "please enter the your course name" << endl;
	cin >> courseName;
	//getline(cin,courseName);
	gradeBook.displayMessage(courseName);

}