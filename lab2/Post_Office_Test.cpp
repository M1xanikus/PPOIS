#include "pch.h"
#include "CppUnitTest.h"
#include"../Post_Office_Test/Union_headers.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PostOfficeTest
{
	TEST_CLASS(PostOfficeTest)
	{
	public:

		TEST_METHOD(Test_Post_Office_Class)
		{
			Mail* mail;
			Letter Test;
			mail = &Test;
			Post_Office Test1("Lida");
			Post_Office Test2;
			Test2.Set_address("NeLida");
			Assert::AreEqual("NeLida", est2.Get_adress());
			Test2.Set_mail(mail);
			Assert::AreEqual(mail,Test2.Get_mail());
		}
		TEST_METHOD(Test_Person_and_Client)
		{
			Client client1;
			Person* one = &client1;
			one->Set_name("Mixail");
			one->Set_surname("Chaplia");
			one->Set_patronymic("Dmitrievich");
			one->Set_postcode("231300");
			one->Set_address("Lida city,Krupskoi St.");
			one->Set_cash(100);
			Assert::AreEqual(one->Get_name(),client1.Get_name());
			Assert::AreEqual(one->Get_surname(),client1.Get_surname());
			Assert::AreEqual(one->Get_patronymic(),client1.Get_patronymic());
			Assert::AreEqual(one->Get_postcode(),client1.Get_postcode());
			Assert::AreEqual(one->Get_address(),client1.Get_address());
			Assert::AreEqual(one->Get_cash(),client1.Get_cash());
			Mail* mail;
			Letter letter;
			mail = &letter;
			client1.Write_letter(*mail, "Nikita", "Narkevich", "Mikhailovich", "231300", "Lida city, Kosmonavtov St.");
		}
		TEST_METHOD(Test_Letter_and_Parcel)
		{
			Mail* mail[2];
			Letter letter;
			Parcel parcel;
			mail[0] = &letter;
			mail[1] = &parcel;
			parcel.Set_Weight(500);
			mail[1]->Set_cost_per_km(1);
			Assert::AreEqual(25,mail[1]->Get_cost_per_km() );
			mail[0]->Set_cost_per_km(10);
			Assert::AreEqual(10,mail[0]->Get_cost_per_km());
			mail[0]->Set_addressee_name("Nikita");
			mail[0]->Set_addresser_name("Mikhail");
			mail[0]->Set_addressee_surname("Narkevich");
			mail[0]->Set_addresser_surname("Chaplia");
			mail[0]->Set_addressee_address("Lida city, Kosmonavtov St.");
			mail[0]->Set_addresser_address("Minsk city, L. Bedi st.");
			mail[0]->Set_addressee_patronymic("Mikhalovich");
			mail[0]->Set_addresser_patronymic("Dmitrievich");
			mail[0]->Set_addressee_postcode("231300");
		}
		TEST_METHOD(Test_Cashier)
		{
			Post_Office From("Lida city,Krupskoi St.");
			Post_Office To("Minsk city, L. Bedi st.");
			Client client1;
			Cashier cashier;
			Person* Persons[3]; 
			Persons[0] = &client1;
			Persons[0]->Set_name("Mixail");
			Persons[0]->Set_surname("Chaplia");
			Persons[0]->Set_patronymic("Dmitrievich");
			Persons[0]->Set_postcode("231300");
			Persons[0]->Set_address("Lida city,Krupskoi St.");
			Persons[0]->Set_cash(15000);
			Mail* mail;
			Letter letter;
			mail = &letter;
			client1.Write_letter(*mail, "Nikita", "Narkevich", "Mikhailovich", "231300", "Lida city, Kosmonavtov St.");
			Persons[1] = &cashier;
			Distance_between_post_office evaluate(From, To);
			cashier.Evaluate_mail_cost(evaluate, *mail);
			Assert::AreEqual(mail->Get_cost(),cashier.Get_mail_cost(*mail));
			client1.Pay(*mail,From);
			From.Set_mail(mail);
			Assert::AreEqual(mail,From.Get_mail() );
			Deliverer deliverer;
			Persons[2] = &deliverer;
			deliverer.Deliver(From, To);
			Assert::AreEqual(mail,To.Get_mail());
			deliverer.Set_cash(100);
			deliverer.Set_salary(400);
			Assert::AreEqual(500,deliverer.Get_cash() + deliverer.Getter_salary());
			
			
		}
	};
}