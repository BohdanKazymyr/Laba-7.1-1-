#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 7.1(1)/Laba 7.1(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Low = -23;
			int High = 26;
			int rowCount = 6;
			int colCount = 8;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];
			Create(a, rowCount, colCount, Low, High);
			Print(a, rowCount, colCount);
			Sort(a, rowCount, colCount);
			Print(a, rowCount, colCount);
			int S = 0;
			int k = 0;
			Calc(a, rowCount, colCount, S, k);
			Print(a, rowCount, colCount);
		}
	};
}
