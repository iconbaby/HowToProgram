#include<iostream>
#include "GradeBook.h"
#include<string>
GradeBook::GradeBook(std::string name) :maxGrade(0) {
	GradeBook::setCourseName(name);
}

std::string GradeBook::getCourseName()const {
	return courseName;
}
void GradeBook::setCourseName(std::string name) {
	courseName = name;
}
void GradeBook::inputgrade() {
	int grade1, grade2, grade3;
	std::cout << "please input three num" << std::endl;
	std::cin >> grade1 >> grade2 >> grade3;
	if (grade1 > grade2) {
		maxGrade = grade1;
	}
	else {
		maxGrade = grade2;
	}

	if (grade3 > maxGrade) {
		maxGrade = grade3;
	}
	reportMaxum();
}

void GradeBook::reportMaxum()const {

	std::cout << "the max value of your intput is " << maxGrade << std::endl;
}