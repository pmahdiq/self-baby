#include <iostream>

using namespace std;
int main()
{

}
class Student
{
    int user_id;
    string student_id,name,email;
    float balance;
    bool is_active;
    public:
        void setuser_id(int us_id);
        void setstudent_id(string stu_id);
        void setname(string name);
        void setemail(string email);
        void setbalance(float balance);
        void setis_active(bool is_act);
        int getuser_id();
        int getstudent_id();
        int getname();
        int getemail();
        int getbalance();
        int getis_active();
        Student();
        void print();
        void reserve_meal(Meal meal);
        bool cancle_reservation(Reservation res);

};




