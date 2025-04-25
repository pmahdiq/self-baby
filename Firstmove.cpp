#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
enum Meal_type
{
    Breakfast,
    Lunch,
    Dinner
};
enum SideItem
{
    Salad,
    Soup,
    yougurt,
    Drink,
    fries
};
class Meal
{
    int meal_id;
    string name;
    float price;
    
    Meal_type meal_type;
    vector <SideItem> side_items;
    public:
        Meal();
        void print();
        void update_price(float new_price);
        void add_side_item(string item);
        void setmeal_id(int meal_id);
        void setname(string name);
        void setprice(float price);
        void setmeal_type(Meal_type meal_type);
        void setside_items(vector <SideItem> side_items);
        int getmeal_id();
        string getname();
        float getprice();
        Meal_type getmeal_type();
        vector <SideItem> getside_item();
};
void Meal::setmeal_id(int meal_id)
{
    this-> meal_id = meal_id;
}
void Meal::setname(string name)
{
    this -> name = name;
}
void Meal::setprice(float price)
{
    this -> price = price;
}
void Meal::setmeal_type(Meal_type meal_type1)
{
    this -> meal_type = meal_type1;
}
void Meal::setside_items(vector <SideItem> side_items)
{
    this -> side_items = side_items;
}
int Meal::getmeal_id()
{
    return meal_id;
}
string Meal::getname()
{
    return name;
}
float Meal::getprice()
{
    return price;
}
Meal_type Meal::getmeal_type()
{
    return meal_type;
}
vector <SideItem> Meal::getside_item()
{
    return side_items;
}
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

void DiningHall::sethall_id(int hall_id)
{
    this -> hall_id = hall_id;
}
void DiningHall::setname(string name)
{
    this -> name = name;
}
void DiningHall::setaddress(string address)
{
    this -> address = address;
}
void DiningHall::setcapacity(int capacity)
{
    this -> capacity = capacity;
}
int DiningHall::gethall_id()
{
    return hall_id;
}
string DiningHall::getname()
{
    return name;
}
string DiningHall::getaddress()
{
    return address;
}
int DiningHall::getcapacity()
{
    return capacity;
}

class Student
{
    int user_id;
    string student_id,name,email;
    float balance;
    bool is_active;
    public:
        Student(int us_id , string st_id , string name , string email = "" , float balance = 0 , bool is_ac = false);
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
        void print();
        void reserve_meal(Meal meal);
        bool cancle_reservation(Reservation res);
};
void Student::setuser_id(int us_id)
{
    user_id = us_id;
}
void Student::setstudent_id(string stu_id)
{
    student_id = stu_id;
}
void Student::setname(string name)
{
    this -> name = name;
}
void Student::setemail (string email)
{
    this -> email = email;
}
void Student::setis_active (bool is_active)
{
    this -> is_active = is_active;
}
int Student::getuser_id()
{
    return user_id;
}
string Student::getstudent_id()
{
    return student_id;
}
string Student::getname()
{
    return name;
}
string Student::getemail()
{
    return email;
}
bool Student::getis_active()
{
    return is_active;
}
Student::Student(int us_id , string st_id , string name , string email = "" , float balance = 0 , bool is_ac = false)
{
    setuser_id(us_id);
    setstudent_id(st_id);
    setname(name);
    setemail(email);
    setbalance(balance);
    setis_active(is_ac);
}
void Student::print()
{
    cout << "user ID : " << user_id << endl;
    cout << "name : " << name << "\temail : " << email << endl;
    cout << "is active ? " << is_active << "\tbalance : " << balance << endl;
}
enum Status
{
    cancle,
    pendding,
    confirmed
};
class Reservation
{
    int reservation_id;
    Student student;
    DiningHall dHall;
    Meal meal;
    Status status;
    time_t created_at = time(0);
    public:
        Reservation(int reservaton_id ,const Student& student , DiningHall , Meal meal , Status status);
        void setreservation_id(int res_id);
        void setstudent(Student student);
        void setdiningHall(DiningHall dHall);
        void setmael(Meal meal);
        void setstatus(Status status);
        void setcreated_at(time_t time);
        int getreservation_id(); 
        Student getstudent();
        DiningHall getdininghall();
        Meal getmeal();
        Status getstatus();
        time_t gettime();
        void print();
        bool cancel();    
};
void Reservation::setreservation_id(int res_id)
{
    reservation_id = res_id;
}
void Reservation::setstudent(Student student)
{
    this -> student = student;
}
void Reservation::setdiningHall(DiningHall dHall)
{
    this -> dHall = dHall; 
}
void Reservation::setmael(Meal meal)
{
    this -> meal = meal;
}
void Reservation::setstatus(Status status)
{
    this -> status = status;
}
void Reservation::setcreated_at(time_t created_at)
{
    this -> created_at = created_at;
}
int Reservation::getreservation_id()
{
    return reservation_id;
}
Student Reservation::getstudent()
{
    return student;
} 
DiningHall Reservation::getdininghall()
{
    return dHall;
} 
Meal Reservation::getmeal()
{
    return meal;
} 
Status Reservation::getstatus()
{
    return status;
} 
time_t Reservation::gettime()
{
    return created_at;
}
Reservation::Reservation(int reservation_id , const Student& student , DiningHall dHall , Meal meal , Status status)
: student(student), dHall(dHall), meal(meal), status(status)
{
    setreservation_id(reservation_id);
    setstatus(status);
}
void Reservation::print()
{
    student.print();
    dHall.print();
    meal.print();
    cout << "created at : " << created_at;
}





