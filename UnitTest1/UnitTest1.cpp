#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.5.1/lab.5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(-1, 2);
			Assert::AreEqual(t, -0.4);
		}
	};
}
