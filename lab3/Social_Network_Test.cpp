#include "pch.h"
#include "CppUnitTest.h"
#include"Union_headers.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SocialNetwork
{
	TEST_CLASS(SocialNetwork)
	{
	public:
		
		TEST_METHOD(TestMethodNetwork)
		{
			Social_Network Twitter;
			User* user = Twitter.RegisterUser("mixail23141", "Nigar1332");
			Assert::IsTrue("mixail23141" == user->Get_Username());
			Assert::IsTrue("Nigar1332" == user->Get_Password());
			User* user2 = Twitter.RegisterUser("Aboba", "Nilleto112");
			User* user3 = Twitter.Login("mixail23141", "Nigar1332");
			User* user4 = Twitter.Login("Aboba", "Nilleto112");
			user3->Fill_Profile("Mikhail", "Chaplia", "10.07.2004", "WHatman");
			Profile* userProfile = user->Get_Profile();
			Assert::IsTrue("Mikhail" == userProfile->Get_Name());
			Assert::IsTrue("Chaplia" == userProfile->Get_Surname());
			Assert::IsTrue("10.07.2004" == userProfile->Get_Date_Of_Birth());
			Assert::IsTrue("WHatman" == userProfile->Get_About_Me());
			Assert::IsTrue(userProfile == user3->Get_Profile());
			
			user3->Add_Friend(user3,user4);
			user4->Extract_Notification();
			user3->Delete_Friend(user4);
			user3->Block_User(user4);
			user3->Unblock_User(user4);
			user3->Add_Friend(user3, user4);
			user4->Add_Friend(user4, user3);
			Chat* chat = user3->Create_Chat(Twitter, user3, user4);
			user3->Write_Message(chat, user4, "HI!");
			user4->Read_Messages(chat, user3);
			user3->Create_Story("abobbaa");
			Group* group = user3->Create_Group(Twitter, user3);
			user3->Add_User_To_Group(user3, user4, group);
			user3->Delete_User_From_Group(user3, user4, group);
			user3->Delete_Group(user3, group, Twitter);
		Post* post = user3->Write_Post("HELLO", user3);
		user3->Delete_Post(post, user3, Twitter);

		}
	};
}
