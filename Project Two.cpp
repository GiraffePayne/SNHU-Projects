#include <iostream>
#include "InterestCalc.h"
#include <vector>
#include <conio.h>
#include <iomanip>

using namespace std;

InterestCalc InitialDisplay(InterestCalc inputData) {
	double deposit;
	double monthly;
	double interest;
	int years;

	cout << "******************************" << endl;
	cout << "**********Data Input **********" << endl;
	cout << "Initial Investment Amount:" << endl;
	cin >> deposit;inputData.setInitialDeposit(deposit);
	cout << "Monthly Deposit:" << endl;
	cin >> monthly;inputData.setMonthlyDeposit(monthly);
	cout << "Annual Interest:" << endl;
	cin >> interest;inputData.setPercentInterest(interest);
	cout << "Number of years:" << endl;
	cin >> years;inputData.setNumberYears(years);
	cout << "Press any key to continue..." << endl;

	return inputData;
}

int main() {
	char ch;

	do {
		InterestCalc inputData;
		inputData = InitialDisplay(inputData);
		ch = _getch();

		inputData = InitialDisplay(0);
		cout << endl << endl;

		inputData.showReport(inputData.getMonthlyDeposit());

		ch = _getch();
	} while (ch != NULL);
}