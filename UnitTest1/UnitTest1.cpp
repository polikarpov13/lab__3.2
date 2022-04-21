#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/3/lab_3.2/lab_3.2/WindowHeader.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			WindowHeader wh("12");
			wh.setHeader("123");
			string a = "123";
			Assert::AreEqual(a, wh.getHeader());
		}
	};
}
