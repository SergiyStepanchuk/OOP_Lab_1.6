#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/Money.h"
#include "../Program/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Money m1, m2;
			m1.Init(6, 0);
			m2.Init(2, 0);
			double D = Division(m1, m2);
			Assert::AreEqual(D, 3.);
		}
	};
}
