#pragma once
#include <string>

class Money
{
private:
	double total;

	int fiveHundred;
	int twoHundred;
	int oneHundred;
	int fifty;
	int twenty;
	int ten;
	int five;
	int two;
	int one;

	int fiftyCoins;
	int twentyFiveCoins;
	int tenCoins;
	int fiveCoins;
	int twoCoins;
	int oneCoin;

public:
	int setFiveHundred(int n);
	int setTwoHundred(int n);
	int setOneHundred(int n);
	int setFifty(int n);
	int setTwenty(int n);
	int setTen(int n);
	int setFive(int n);
	int setTwo(int n);
	int setOne(int n);

	int setFiftyCoins(int c);
	int setTwentyFiveCoins(int c);
	int setTenCoins(int c);
	int setFiveCoins(int c);
	int setTwoCoins(int c);
	int setOneCoin(int c);

	int getFiveHundred() const { return fiveHundred; };
	int getTwoHundred() const { return twoHundred; };
	int getOneHundred() const { return oneHundred; };
	int getFifty() const { return fifty; };
	int getTwenty() const { return twenty; };
	int getTen() const { return ten; };
	int getFive() const { return five; };
	int getTwo() const { return two; };
	int getOne() const { return one; };

	int getFiftyCoins() const { return fiftyCoins; };
	int getTwentyFiveCoins() const { return twentyFiveCoins; };
	int getTenCoins() const { return tenCoins; };
	int getFiveCoins() const { return fiveCoins; };
	int getTwoCoins() const { return twoCoins; };
	int getOneCoin() const { return oneCoin; };

	double getTotal() { return total; };

	double calculateTotalAmount();

	static Money divideBy(Money, Money);
	void divideBy (double divisor);
	bool comparison(Money, Money);

	bool Init();
	void Read();
	void Display() const;

	std::string displayTotal() const;
	std::string toString() const;
};

