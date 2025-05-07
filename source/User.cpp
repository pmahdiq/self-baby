#include "../include/User.hpp"

User::User()
{
   
}

void User:: print() const
{
    cout << "User ID : " << get_UserID() << "\nname : " << get_name() << "\t" << get_lastname();
}
void getType()
{

}
void set_UserID(int ID)
{
    _UserID = ID;
}
void set_name(string name)
{
    _name = name;
}
void set_lastname(string lastname)
{
    _lastname = lastname;
}
void set_hPassword(string hpassword)
{
    _hPassword = hpassword;
}
string get_name()
{
    return _name;
}
string get_lastname()
{
    return _lastname;
}
string get_hPassword()
{
    return _hashedPassword;
}
{
    return _UserID;
}