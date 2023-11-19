#include"Moderator.h"

void Moderator::Delete_Post(Post* post, Social_Network& Network)
{
	Network.Delete_Post(Network.Post_Search(post));
}
