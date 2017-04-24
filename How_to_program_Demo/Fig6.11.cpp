#include<iostream>
#include<ctime>
#include<cstdlib>
unsigned int sumOfDice();
using namespace std;
int main() {
	srand(static_cast<unsigned int>(time(0)));
	enum class Status:unsigned int { WIN, LOST, CONTINUE };
	Status  myStatus = Status::CONTINUE;
	unsigned int diceSum = sumOfDice();
	unsigned int myPoint = 0;
	switch (diceSum)
	{
	case 7:
	case 11:
		myStatus = Status::WIN;
		break;
	case 2:
	case 3:
	case 12:
		myStatus = Status::LOST;
		break;
	case 4:
	case 5:
	case 6:
	case 8:
	case 9:
	case 10:
		myPoint = diceSum;
		myStatus = Status::CONTINUE;
		break;
	default:
		break;
	}
	while (myStatus == Status::CONTINUE) {
		diceSum = sumOfDice();
		if (diceSum == myPoint) {
			myStatus = Status::WIN;
		}
		else if (diceSum == 7) {
			myStatus = Status::LOST;
		}

	}
	if (Status::WIN == myStatus) {
		cout << "player wins" << endl;
	}
	else {
		cout << "player losses" << endl;
	}
}

unsigned int sumOfDice() {
	unsigned int dice1 = 1 + rand() % 6;
	unsigned int dice2 = 1 + rand() % 6;
	unsigned sum = dice1 + dice2;
	cout << "dice1 :" << dice1 << endl;
	cout << "dice2 :" << dice2 << endl;
	cout << sum << endl;
	return sum;
}