#include "pch.h"
#include"Social_Network.h"
#include"Moderator.h"
void Moderator::Delete_Post(Post* post, Social_Network& Network)
{
	Network.Delete_Post(post);
}
