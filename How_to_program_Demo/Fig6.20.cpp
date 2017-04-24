#include<iostream>
using namespace std;
int squareByValue(int);
void squareByRef(int &);
int main() {

	int x = 2;
	int y = 2;
	cout << "x before square" << x << endl;
	squareByValue(x);
	cout << "x after square" << x << endl;

	cout << "y before square" << y << endl;
	squareByRef(y);
	cout << "y after square" << y << endl;
}
int squareByValue(int value) {
	return value *= value;
}
void squareByRef(int &ref) {
	ref *= ref;
}