#include<iostream>
#include<iomanip>
#include<random>
#include<ctime>
using namespace std;
int main() {

	default_random_engine engine(static_cast<unsigned int> (time(0)));
	uniform_int_distribution<unsigned int> random(1, 6);
	for (unsigned int i = 1; i <= 20; ++i) {
		cout << setw(10) << random(engine);
		if (i % 5 == 0) {
			cout << endl;
		}

	}
}