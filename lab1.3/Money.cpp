#include "Money.h"

#include <iostream>
#include <string>
#include <sstream>

int Money::setFiveHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 500 hryvnia banknotes cannot be negative.\n";
        exit(1); 
    }
    fiveHundred = n;
    return 0;
}

int Money::setTwoHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 200 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    twoHundred = n;
    return 0; 
}

int Money::setOneHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 100 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    oneHundred = n;
    return 0; 
}

int Money::setFifty(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 50 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    fifty = n;
    return 0; 
}

int Money::setTwenty(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 20 hryvnia banknotes cannot be negative.\n";
        exit(1); 
    }
    twenty = n;
    return 0; 
}

int Money::setTen(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 10 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    ten = n;
    return 0; 
}

int Money::setFive(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 5 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    five = n;
    return 0; 
}

int Money::setTwo(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 2 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    two = n;
    return 0; 
}

int Money::setOne(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 1 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    one = n;
    return 0;
}

int Money::setFiftyCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 50 kopiyka coins cannot be negative.\n";
        exit(1); 
    }
    fiftyCoins = c;
    return 0; 
}

int Money::setTwentyFiveCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 25 kopiyka coins cannot be negative.\n";
        exit(1); 
    }
    twentyFiveCoins = c;
    return 0; 
}

int Money::setTenCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 10 kopiyka coins cannot be negative.\n";
        exit(1); 
    }
    tenCoins = c;
    return 0; 
}

int Money::setFiveCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 5 kopiyka coins cannot be negative.\n";
        exit(1); 
    }
    fiveCoins = c;
    return 0; 
}

int Money::setTwoCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 2 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    twoCoins = c;
    return 0;
}

int Money::setOneCoin(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 1 kopiyka coins cannot be negative.\n";
        exit(1); 
    }
    oneCoin = c;
    return 0;
}

std::string Money::toString() const {
    std::stringstream sout;
    sout << "500 uah: " << fiveHundred << ", ";
    sout << "200 uah: " << twoHundred << ", ";
    sout << "100 uah: " << oneHundred << ", ";
    sout << "50 uah: " << fifty << ", ";
    sout << "20 uah: " << twenty << ", ";
    sout << "10 uah: " << ten << ", ";
    sout << "5 uah: " << five << ", ";
    sout << "2 uah: " << two << ", ";
    sout << "1 uah: " << one << ", ";
    sout << "50 kopiyka: " << fiftyCoins << ", ";
    sout << "25 kopiyka: " << twentyFiveCoins << ", ";
    sout << "10 kopiyka: " << tenCoins << ", ";
    sout << "5 kopiyka: " << fiveCoins << ", ";
    sout << "2 kopiyka: " << twoCoins << ", ";
    sout << "1 kopiyka: " << oneCoin;

    return sout.str();
}

bool Money::Init() {
    setFiveHundred(0);
    setTwoHundred(0);
    setOneHundred(0);
    setFifty(0);
    setTwenty(0);
    setTen(0);
    setFive(0);
    setTwo(0);
    setOne(0);

    setFiftyCoins(0);
    setTwentyFiveCoins(0);
    setTenCoins(0);
    setFiveCoins(0);
    setTwoCoins(0);
    setOneCoin(0);

    return true;
}

void Money::Read() {

    int fiveHundredO, twoHundredO, oneHundredO, fiftyO, twentyO, tenO, fiveO, twoO, oneO;

    int fiftyCoinsO, twentyFiveCoinsO, tenCoinsO, fiveCoinsO, twoCoinsO, oneCoinO;

    std::cout << "Enter the number of banknotes for each denomination:\n";
    std::cout << "500: "; std::cin >> fiveHundredO; setFiveHundred(fiveHundredO);
    std::cout << "200: "; std::cin >> twoHundredO; setTwoHundred(twoHundredO);
    std::cout << "100: "; std::cin >> oneHundredO; setOneHundred(oneHundredO);
    std::cout << "50: "; std::cin >> fiftyO; setFifty(fiftyO);
    std::cout << "20: "; std::cin >> twentyO; setTwenty(twentyO);
    std::cout << "10: "; std::cin >> tenO; setTen(tenO);
    std::cout << "5: "; std::cin >> fiveO; setFive(fiveO);
    std::cout << "2: "; std::cin >> twoO; setTwo(twoO);
    std::cout << "1: "; std::cin >> oneO; setOne(oneO);

    std::cout << "Enter the number of coins for each denomination:\n";
    std::cout << "50 kopiyka: "; std::cin >> fiftyCoinsO; setFiftyCoins(fiftyCoinsO);
    std::cout << "25 kopiyka: "; std::cin >> twentyFiveCoinsO; setTwentyFiveCoins(twentyFiveCoinsO);
    std::cout << "10 kopiyka: "; std::cin >> tenCoinsO; setTenCoins(tenCoinsO);
    std::cout << "5 kopiyka: "; std::cin >> fiveCoinsO; setFiveCoins(fiveCoinsO);
    std::cout << "2 kopiyka: "; std::cin >> twoCoinsO; setTwoCoins(twoCoinsO);
    std::cout << "1 kopiyka: "; std::cin >> oneCoinO; setOneCoin(oneCoinO);
}


void Money::Display() const {
    std::cout << "Banknotes:\n";
    std::cout << "500: " << getFiveHundred() << std::endl;
    std::cout << "200: " << getTwoHundred() << std::endl;
    std::cout << "100: " << getOneHundred() << std::endl;
    std::cout << "50: " << getFifty() << std::endl;
    std::cout << "20: " << getTwenty() << std::endl;
    std::cout << "10: " << getTen() << std::endl;
    std::cout << "5: " << getFive() << std::endl;
    std::cout << "2: " << getTwo() << std::endl;
    std::cout << "1: " << getOne() << std::endl;

    std::cout << "Coins:\n";
    std::cout << "50 kopiyka: " << getFiftyCoins() << std::endl;
    std::cout << "25 kopiyka: " << getTwentyFiveCoins() << std::endl;
    std::cout << "10 kopiyka: " << getTenCoins() << std::endl;
    std::cout << "5 kopiyka: " << getFiveCoins() << std::endl;
    std::cout << "2 kopiyka: " << getTwoCoins() << std::endl;
    std::cout << "1 kopiyka: " << getOneCoin() << std::endl;
}

Money Money::divideBy(Money m1, Money m2) {
    Money res;
    res.total = m1.total / m2.total;
    return res;
}

void Money::divideBy(double divisor) {
    if (divisor == 0.0) {
        std::cerr << "Error: Division by zero.\n";
        return;
    }
    total /= divisor;
}

double Money::calculateTotalAmount() {
    total = 0.0;

    total += fiveHundred * 500;
    total += twoHundred * 200;
    total += oneHundred * 100;
    total += fifty * 50;
    total += twenty * 20;
    total += ten * 10;
    total += five * 5;
    total += two * 2;
    total += one;

    total += fiftyCoins * 0.5;
    total += twentyFiveCoins * 0.25;
    total += tenCoins * 0.1;
    total += fiveCoins * 0.05;
    total += twoCoins * 0.02;
    total += oneCoin * 0.01;

    return total;
}

bool Money::comparison(Money m1, Money m2) {
    return m1.calculateTotalAmount() == m2.calculateTotalAmount();
}

std::string Money::displayTotal() const {
    std::stringstream sout;

    std::string totalStr = std::to_string(total);
    size_t decimalPos = totalStr.find('.');
    if (decimalPos != std::string::npos) {
        totalStr[decimalPos] = ',';
    }

    sout << "Total amount: " << totalStr;
    return sout.str();
}
