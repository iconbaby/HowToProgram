#include<iostream>
#include<string>
class GradeBook {
public:
	explicit GradeBook(std::string);
	void setCourseName(std::string);
	std::string getCourseName()const;
	void disPlayMessage()const;
	void inputgrade();
	void reportMaxum()const;
	int maximum(int, int, int)const;
private:
	std::string courseName;
	int maxGrade;
};
