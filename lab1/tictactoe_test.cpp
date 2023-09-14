#include "pch.h"
#include "CppUnitTest.h"
#include"..\tic-tac-toe\tictactoe.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestDefaultConstruct)
		{
			Tictactoe test;
			Assert::IsTrue(test.get_size() == 3);
		}
		TEST_METHOD(TestConstruct)
		{
			Tictactoe test(4);
			Assert::IsTrue(test.get_size() == 4);
		}
		TEST_METHOD(TestPlacingX)
		{
			Tictactoe test;
			test.choosing_place(0, 0);
			Assert::IsTrue(test.get_place(0, 0) == 'X');

		}
		TEST_METHOD(WinnigTestGorisontal)
		{
			Tictactoe test;
			test.choosing_place(0, 0);//x
			test.choosing_place(1, 1);//0
			test.choosing_place(0, 1);//x
			test.choosing_place(2, 2);//0
			test.choosing_place(0, 2);//x
			Assert::IsTrue(test.win_check());
		}
		TEST_METHOD(WinnigTestFrontal)
		{
			Tictactoe test;
			test.choosing_place(0, 0);//x
			test.choosing_place(1, 1);//0
			test.choosing_place(1, 0);//x
			test.choosing_place(2, 2);//0
			test.choosing_place(2, 0);//x
			Assert::IsTrue(test.win_check());
		}
		TEST_METHOD(WinnigTestDiagonal)
		{
			Tictactoe test;
			test.choosing_place(0, 0);//x
			test.choosing_place(1, 0);//0
			test.choosing_place(1, 1);//x
			test.choosing_place(1, 2);//0
			test.choosing_place(2, 2);//x
			Assert::IsTrue(test.win_check());
		}
		TEST_METHOD(WinningTestAltDiagonal)
		{
			Tictactoe test;
			test.choosing_place(0, 2);//x
			test.choosing_place(1, 0);//0
			test.choosing_place(1, 1);//x
			test.choosing_place(0, 0);//0
			test.choosing_place(2, 0);//x
			Assert::IsTrue(test.win_check());
		}
		TEST_METHOD(DrawTest)
		{
			Tictactoe test;
			test.choosing_place(1, 1);//x
			test.choosing_place(2, 0);//0
			test.choosing_place(0, 1);//x
			test.choosing_place(2, 1);//0
			test.choosing_place(2, 2);//x
			test.choosing_place(0, 0);//0
			test.choosing_place(1, 0);//x
			test.choosing_place(1, 2);//0
			test.choosing_place(0, 2);//x
			Assert::IsTrue(test.win_check());
		}
	};
}
