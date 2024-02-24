#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.3/Money.h"
#include "../lab1.3/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money mon1, mon2, mon3, test;
			mon1.Init();
			mon2.Init();
			mon3.Init();
			mon1.setFifty(2);
			mon1.setFiftyCoins(1);
			double t1 = mon1.calculateTotalAmount();
			mon2.setFive(2);
			mon2.setOne(7);
			double t2 = mon2.calculateTotalAmount();
			mon3.setTwoHundred(3);
			mon3.setOneCoin(9);
			double t3 = mon3.calculateTotalAmount();
			test = Money::divideBy(mon3, mon2);
			double t4 = test.getTotal();
			mon2.divideBy(10);
			double t5 = mon2.getTotal();
			Assert::IsFalse(mon1.comparison(mon1, mon3));
			Assert::AreEqual(1.7, t5, 0.1);
			Assert::AreEqual(35.2994, t4, 0.0001);
			Assert::AreEqual(100.5, t1, 0.1);
		}
	};
}
