#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63rec
{
	TEST_CLASS(UnitTest63rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			int const n = 5;
			int a[n] = { 1,2,3,4,5 };
			z = Nep(a, n, 0, 1);
			Assert::AreEqual(z, 2);
		}
	};
}
