#include "pch.h"
#include "CppUnitTest.h"
#include"Graph.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PPOISLAB4
{
	TEST_CLASS(PPOISLAB4)
	{
	public:
		
		TEST_METHOD(TestRightUsing)
		{
			Graph<int> A(123);//vertex 0
			A.Add_Vertex(3);  //1
			A.Add_Vertex(13);//2
			A.Add_Edge(0, 1);
			Assert::IsTrue(A.Is_Vertex_In_Graph(13) == true);
			Assert::IsTrue(A.Is_Edge_Between(0, 1) == true);
			A.Add_Vertex(14);//3
			A.Add_Edge(0, 2);
			Assert::AreEqual(2, A.Vertex_Degree(0));
			A.Delete_Vertex(3);//2
			Assert::AreEqual(3, A.Get_Amount_Of_Vertices());
			Assert::AreEqual(2, A.Get_Amount_Of_Edges());
			A.Delete_Edge(0, 1);
			Assert::AreEqual(1, A.Get_Amount_Of_Edges());
			A.Clear_Graph();
			Assert::AreEqual(0, A.Get_Amount_Of_Vertices());
		}
		TEST_METHOD(TestNotRightUsing)
		{
			Graph<int> A(1);
			A.Add_Vertex(3);
			Assert::AreEqual(2, A.Get_Amount_Of_Vertices());
			A.Delete_Edge(0, 1);
			A.Add_Edge(0, 1);
			A.Delete_Vertex(2);
			A.Is_Edge_Between(0, 2);
			A.Add_Edge(0, 2);
			A.Add_Edge(0, 1);
		}
		
	};
}
