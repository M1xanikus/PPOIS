#include "pch.h"
#include"Social_Network.h"
#include"User.h"


bool Social_Network::CheckPassword(std::string password){
int n = password.length();
bool hasLower = false, hasUpper = false, hasDigit = false;

for (int i = 0; i < n; i++) {
    if (islower(password[i]))
        hasLower = true;
    if (isupper(password[i]))
        hasUpper = true;
    if (isdigit(password[i]))
        hasDigit = true;
}

return hasUpper && hasDigit && hasLower && (n >= 6);
    }
User* Social_Network:: Login(std::string username, std::string password)
{
    for (int i = 0; i < users_.size(); i++) {
        if (users_[i]->Get_Username() == username && users_[i]->Get_Password() == password) {
            users_[i]->Authorize(true);
            return users_[i];
        }
    }
    std::cout << "Invalid username or password!" << std::endl;
    return nullptr;
}
User* Social_Network::Logout(User* user)
{
    user->Authorize(false);
    return nullptr;
}
void Social_Network::Add_Group(Group* group)
{
    groups_.push_back(group);
}
void Social_Network::Add_Post(Post* post)
{
    posts_.push_back(post);
}
void Social_Network::Add_Chat(Chat* chat)
{
    chats_.push_back(chat);
}
void Social_Network::Delete_Chat(Chat* user)
{
    for (int i = 0; i < chats_.size(); i++)
    {
        if (user == chats_[i]) { chats_.erase(chats_.begin() + i); }
    }
    std::cout << "This chat doesn't exist in social network";
}
void Social_Network::Delete_Group(Group* group)
{
    for (int i = 0; i < groups_.size(); i++)
    {
        if (group == groups_[i]) { groups_.erase(groups_.begin() + i); }
    }
    std::cout << "This group doesn't exist in social network";
}
void Social_Network::Delete_Post(Post* post)
{
    for (int i = 0; i < posts_.size(); i++)
    {if (post == posts_[i]) { posts_.erase(posts_.begin() + i); }}
    std::cout << "This post doesn't exist in social network";
}
void Social_Network::Delete_User(User* user)
{
    for (int i = 0; i < users_.size(); i++)
    {
        if (user == users_[i]) { users_.erase(users_.begin()+ i ); }
    }
    std::cout << "This user doesn't exist in social network";
}
Social_Network::~Social_Network()
{
    for (int i = 0; i < users_.size(); i++) { delete users_[i]; }
    for (int i = 0; i < posts_.size(); i++) { delete posts_[i]; }
    for (int i = 0; i < groups_.size(); i++) { delete groups_[i]; }
    for (int i = 0; i < chats_.size(); i++) { delete chats_[i]; }
}
User* Social_Network::RegisterUser(std::string username, std::string password,Social_Network example)
{
    if (!example.CheckPassword(password)) {
        std::cout << "Password is not strong enough!" << std::endl;
        return nullptr;
    }
    User* newUser = new User(username, password);
    users_.push_back(newUser);
    Profile* profile = new Profile(newUser);
    newUser->Set_Profile(profile);
    return newUser;
}
//User* user = network.registerUser("username", "password");
