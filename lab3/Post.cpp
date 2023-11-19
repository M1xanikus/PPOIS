#include "pch.h"
#include "Post.h"

void Post::Set_Text(std::string text)
{
	text_ = text;
}

void Post::Set_Author(User* author)
{
	author_ = author;
}

User* Post::Get_Author()
{
	return author_;
}
