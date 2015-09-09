#ifndef EXER_7_57_H
#define EXER_7_57_H
#include <string>

class Account{
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double newRate) { interestRate = newRate; }
private:
	std::string owner;
	double amount;
	static constexpr double todayrate = 42.22;
	static double interestRate;
	static double initRate(){ return todayrate; }
};

double Account::interestRate = initRate();
#endif
