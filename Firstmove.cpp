#include <iostream>
<<<<<<< HEAD
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
    int getters();
    void setters();


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
    int getters();
    void setters();

};
int main()
{
    
}
=======

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




>>>>>>> 9d8ee5a59dbc4079924b75fb224e5483528e5d03
