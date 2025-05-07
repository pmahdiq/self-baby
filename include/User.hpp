#include <iostream>

using namespace std;
class User
{
    protected:
        int _UserID;
        string _name, _lastName, _hashedPassword;
    public:  
        User();  
        virtual void print() const;
        virtual void getType();
        void set_UserID(int ID);
        void set_name(string name);
        void set_lastname(string lastname);
        void set_hPassword(string hpassword);
        int get_UserID();
        string get_name();
        string get_lastname();
        string get_hPassword(); 
};