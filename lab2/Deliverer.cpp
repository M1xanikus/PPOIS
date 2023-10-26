#include "pch.h"
#include "Deliverer.h"

void Deliverer::Deliver(Post_Office& From, Post_Office& To) {
	To.Set_mail(From.Get_mail());
	From.Set_mail(NULL);
}
