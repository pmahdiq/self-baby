#include "../include/User.hpp"

User::User()
{
    
}

void User:: print()
{
    cout << "User ID : " << get_UserID() << "\nname : " << get_name() << "\t" << get_lastname();
}

void getType()
{
    
}

void User::set_UserID(int ID)
{
    _UserID = ID;
}

void User::set_name(string name)
{
    _name = name;
}

void User::set_lastname(string lastname)
{
    _lastName = lastname;
}

void User::set_hPassword(string hpassword)
{
    _hashedPassword = hpassword;
}

int User::get_UserID()
{
    return _UserID;
}

string User::get_name()
{
    return _name;
}

string User::get_lastname()
{
    return _lastName;
}

string User::get_hPassword()
{
    return _hashedPassword;
}