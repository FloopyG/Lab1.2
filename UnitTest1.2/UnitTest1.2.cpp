#include "pch.h"
#include "CppUnitTest.h"
#include "../Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x = 1, y = 1, z = 1;
			Time g;
			bool t = g.Init(x, y, z);
			Assert::AreEqual(t, true);
		}
	};
}