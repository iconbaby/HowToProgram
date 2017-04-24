#include<iostream>
using namespace std;
unsigned  int valume(unsigned int longth = 1, unsigned int wid = 1, unsigned int hei = 1);

int main() {
	cout << valume(2, 2, 2) << endl;
	cout << valume(2) << endl;
	cout << valume(2, 2) << endl;

}
unsigned int valume(unsigned longth, unsigned wid, unsigned hei) {
	return longth *wid*hei;
}
