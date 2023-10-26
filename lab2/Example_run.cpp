#include<iostream>
#include"Union_headers.h"
using namespace std;
void main()
{
	Post_Office One("Uba");
	Post_Office Two("Duba");
	Distance_between_post_office evaluate(One, Two);
	Mail* Mail;
	Letter Letter; 
	Mail = &Letter;
	Person Persona("Misha", "Chaplia", "Dmitrievich", "RB, Lida city, Krupskoi street 9", "231300", 15000);

}
