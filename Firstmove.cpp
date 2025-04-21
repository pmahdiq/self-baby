#include <iostream>
#include <vector>
using namespace std;
enum ghaza
{
   
};

class Meal
{
    private:
    int meal_id;
    string name;
    float price;
    enum meal_type
    {

    };
    vector <ghaza> side_items;

    public:
    Meal();
    void print();
    void update_price(float new_price);
    void add_side_item(string item);
    void setmeal_id(int meal_id);
    void setname(string name);
    void setprice(float price);
    void setmeal_type(enum meal_type meal_type);
    void setside_items(vector <ghaza> side_items);
    int getmeal_id();
    string getname();
    float getprice();
    enum meal_type getmeal_type();
    vector<ghaza> getside_item();


};
class DiningHall
{
    private:
    int hall_id;
    string name;
    string address;
    int capacity;

    public:
    DiningHall();
    void print();
    void sethall_id(int hall_id);
    void setname(string name);
    void setaddress(string address);
    void setcapacity(int capacity);
    int gethall_id();
    string getname();
    string getaddress();
    int getcapacity();
    

};
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
        string getstudent_id();
        string getname();
        string getemail();
        float getbalance();
        bool getis_active();
        Student();
        void print();
        void reserve_meal(Meal meal);
        bool cancle_reservation(Reservation res);
};
void Student :: setuser_id(int us_id)
{
    user_id = us_id;
}
void Student :: setstudent_id(string stu_id);
{
    student_id = stu_id;
}
void Student :: setname(string name)
{
    this -> name = name;
}
void Student :: setemail (string email)
{
    this -> email = email;
}
void Student :: setis_active (bool is_active)
{
    this -> is_active = is_active;
}
int Student :: getuser_id()
{
    return user_id;
}
string Student :: getstudent_id()
{
    return student_id;
}
string Student :: getname()
{
    return name;
}
string Student :: getemail()
{
    return email;
}
bool Student :: getis_active()
{
    return is_active;
}






class Reservation
{
    int reservation_id;
    Student student;
    DiningHall dHall;
    Meal meal;
    enum status
    {

    };
    time_t created_at;
    public:
        void setreservation_id(int res_id);
        void setstudent(Student student);
        void setdiningHall(DiningHall dHall);
        void setmael(Meal meal);
        void setstatus(status status);
        void setcreated_at(time_t time);
        int getreservation(); 
        Student getstudent();
        DiningHall getdininghall();
        Meal getmeal();
        status getstatus();
        time_t gettime();
        Reservation();
        void print();
        bool cancel();    
};




