#include<iostream>
#include<string>
using namespace std;
class GradeBook2 {
private:
	string courseName;
public:
	string getCourseName()const {
		return courseName;
	}
	void setCourseName(string name) {
		courseName = name;
	}
	void displayMessage()const {
		cout << "Welcome to the grade book" << getCourseName() << endl;
	}
};
int main() {
	string courseName;
	GradeBook2 gradebook2;
	getline(cin, courseName);
	gradebook2.setCourseName(courseName);
	gradebook2.displayMessage();
	
}