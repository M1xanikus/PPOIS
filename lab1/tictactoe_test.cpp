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
			tictactoe test;
			Assert::IsTrue(test.get_size() == 3);
		}
		TEST_METHOD(TestConstruct)
		{
			tictactoe test(4);
			Assert::IsTrue(test.get_size() == 4);
		}
		TEST_METHOD(TestPlacingX)
		{
			tictactoe test;
			test.choosing_place(0, 0);
			Assert::IsTrue(test.get_place(0, 0) == 'X');

		}
		TEST_METHOD(WinnigTestGorisontal)
		{
			tictactoe test;
			test.choosing_place(0, 0);//x
			test.choosing_place(1, 1);//0
			test.choosing_place(0, 1);//x
			test.choosing_place(2, 2);//0
			test.choosing_place(0, 2);//x
			Assert::IsTrue(test.win_check());
		}
		TEST_METHOD(WinnigTestFrontal)
		{
			tictactoe test;
			test.choosing_place(0, 0);//x
			test.choosing_place(1, 1);//0
			test.choosing_place(1, 0);//x
			test.choosing_place(2, 2);//0
			test.choosing_place(2, 0);//x
			Assert::IsTrue(test.win_check());
		}
		TEST_METHOD(WinnigTestDiagonal)
		{
			tictactoe test;
			test.choosing_place(0, 0);//x
			test.choosing_place(1, 0);//0
			test.choosing_place(1, 1);//x
			test.choosing_place(1, 2);//0
			test.choosing_place(2, 2);//x
			Assert::IsTrue(test.win_check());
		}
		TEST_METHOD(WinningTestAltDiagonal)
		{
			tictactoe test;
			test.choosing_place(0, 2);//x
			test.choosing_place(1, 0);//0
			test.choosing_place(1, 1);//x
			test.choosing_place(0, 0);//0
			test.choosing_place(2, 0);//x
			Assert::IsTrue(test.win_check());
		}
		TEST_METHOD(DrawTest)
		{
			tictactoe test;
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
