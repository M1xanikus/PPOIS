#include "pch.h"
#include"Social_Network.h"
#include"Moderator.h"
void Moderator::Set_Social_Network(Social_Network& network)
{
	social_network_ = network;
}
void Moderator::Delete_Post(Post* post, Social_Network& Network)
{
	Network.Delete_Post(post);
}
