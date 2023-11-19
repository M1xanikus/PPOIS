#pragma once
#include<vector>
#include<string>
#include<iostream>
#include"Notification.h"
#include"Post.h"
#include"Social_Network.h"
#include"Group.h"
#include"Chat.h"
#include"Story.h"
class User{
public:
    User(std::string username, std::string password): username_(username),password_(password) {}
    std::string Get_Password();
    std::string Get_Username();
    void Write_Post(Post*,std::string,User*);
    void Delete_Post(Post*,User*, Social_Network& Network);
    void Add_Friend(User*,User*);
    void Delete_Friend(User*);
    void Block_User(User*);
    void Delete_Blocked_User(User*);
    void Authorize(bool);
     Group* Create_Group(Social_Network&,User*);
    void Delete_User_From_Group(User*,User*,Group*);//for Admin of group
    void Add_User_To_Group(User*,User*,Group*);
    void Delete_Group(User*,Group*, Social_Network&);
    Chat* Create_Chat(Social_Network&,User*,User*);
    void Write_Message(Chat*, User*,std::string);
    void Read_Messages(Chat*,User*);
    void Extract_Notification();
    void Set_Profile(Profile*);
    void Fill_Profile(std::string, std::string,std::string,std::string);
    void Create_Story(std::string info);
    ~User();
protected:
    
    void Set_Notification(Notification*);
    bool Is_Friend(User*);
    bool Is_Not_Blocked(User*);
    std::vector<User*> friends_;
    std::vector<Chat*> chats_;
    std::vector<User*> blocked_users_;
    std::vector<Notification*> notifications_;
    Profile* user_profile_;
    std::string username_;
    std::string password_;
    bool authorized_ = false;
};
