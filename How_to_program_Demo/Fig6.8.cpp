#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	unsigned int int1 = 0;
	unsigned int int2 = 0;
	unsigned int int3 = 0;
	unsigned int int4 = 0;
	unsigned int int5 = 0;
	unsigned int int6 = 0;
	unsigned int seed = 0;
	//cout << "please enter the  seed" << endl;
	//cin >> seed;
	srand(static_cast<unsigned int> (time(0)));

	for (unsigned int i = 0; i < 20; ++i) {
		unsigned int face = rand() % 6 + 1;
		cout << setw(10) << face;
		switch (face)
		{
		case 1:
			++int1;
			break;
		case 2:
			++int2;
			break;
		case 3:
			++int3;
			break;
		case 4:
			++int4;
			break;
		case 5:
			++int5;
			break;
		case 6:
			++int6;
			break;
		default:
			break;
		}
		if ((i + 1) % 5 == 0) {
			cout << endl;
		}
	}

	cout << "the number 1 : " << int1 << endl;
	cout << "the number 2 : " << int2 << endl;
	cout << "the number 3 : " << int3 << endl;
	cout << "the number 4 : " << int4 << endl;
	cout << "the number 5 : " << int5 << endl;
	cout << "the number 6 : " << int6 << endl;

	return 0;
}