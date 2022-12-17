#pragma once
#ifndef Project_Two_Header_InterestCalc_H_
#define Project_Two_Header_InterestCalc_H_

class InterestCalc {
	public:
		InterestCalc();

		void setInitialDeposit(double t_initialDeposit);
		void setMonthlyDeposit(double t_monthlyDeposit);
		void setPercentInterest(double t_percentInterest);
		void setNumberYears(int t_numberYears);

		double getInitialDeposit();
		double getMonthlyDeposit();
		double getPercentInterest();
		int getNumberYears();

		double monthlyBalance(int t_months, double t_monthDeposit);

		double monthlyInterest(int t_months, double monthDeposit);

		double annualBonus(int t_numYears, double t_depositAmount);

		double annualInterest(int t_numYears, double t_depositAmount);

		void showReport(double t_monthlyDep);

	private:
		double initialDeposit;
		double monthlyDeposit;
		double percentInterest;
		int numberYears;
};

#endif
