#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab1.2/Droby.h"
#include "../OOP Lab1.2/Droby.cpp"
#include "../OOP Lab1.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestSimplify)
		{
			Droby fraction;

			fraction.Init(12, 18);
			fraction.Simplify();

			Assert::AreEqual(fraction.GetNumerator(), 2);
			Assert::AreEqual(fraction.GetDenominator(), 3);
		}

	};
}