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
    Yogurt,
    Drink,
    Fries
};

class Meal
{
    int meal_id;
    string name;
    float price;
    Meal_type meal_type;
    vector<SideItem> side_items;

public:
    Meal(int meal_id, string name, float price, Meal_type meal_type, vector<SideItem> side_items);
    void print();
    void update_price(float new_price);
    void add_side_item(SideItem item);
    void setmeal_id(int meal_id);
    void setname(string name);
    void setprice(float price);
    void setmeal_type(Meal_type meal_type);
    void setside_items(vector<SideItem> side_items);
    int getmeal_id();
    string getname();
    float getprice();
    Meal_type getmeal_type();
    vector<SideItem> getside_items();
};

Meal::Meal(int meal_id, string name, float price, Meal_type meal_type, vector<SideItem> side_items)
{
    setmeal_id(meal_id);
    setname(name);
    setprice(price);
    setmeal_type(meal_type);
    setside_items(side_items);
}

void Meal::print()
{
    cout << "Name: " << name << "\tPrice: " << price << "\tMeal Type: ";
    switch (meal_type)
    {
    case Breakfast:
        cout << "Breakfast";
        break;
    case Lunch:
        cout << "Lunch";
        break;
    case Dinner:
        cout << "Dinner";
        break;
    default:
        cout << "Unknown Meal Type";
        break;
    }
    cout << "\nSide Items: ";
    for (auto item : side_items)
    {
        cout << static_cast<int>(item) << " ";
    }
    cout << endl;
}

void Meal::update_price(float new_price)
{
    price = new_price;
}

void Meal::add_side_item(SideItem item)
{
    side_items.push_back(item);
}

void Meal::setmeal_id(int meal_id)
{
    this->meal_id = meal_id;
}

void Meal::setname(string name)
{
    this->name = name;
}

void Meal::setprice(float price)
{
    this->price = price;
}

void Meal::setmeal_type(Meal_type meal_type)
{
    this->meal_type = meal_type;
}

void Meal::setside_items(vector<SideItem> side_items)
{
    this->side_items = side_items;
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

vector<SideItem> Meal::getside_items()
{
    return side_items;
}

class DiningHall
{
    int hall_id;
    string name;
    string address;
    int capacity;

public:
    DiningHall(int hall_id, string name, string address, int capacity);
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

DiningHall::DiningHall(int hall_id, string name, string address, int capacity)
{
    sethall_id(hall_id);
    setname(name);
    setaddress(address);
    setcapacity(capacity);
}

void DiningHall::print()
{
    cout << "Name: " << name << "\tAddress: " << address << "\nCapacity: " << capacity << endl;
}

void DiningHall::sethall_id(int hall_id)
{
    this->hall_id = hall_id;
}

void DiningHall::setname(string name)
{
    this->name = name;
}

void DiningHall::setaddress(string address)
{
    this->address = address;
}

void DiningHall::setcapacity(int capacity)
{
    this->capacity = capacity;
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
    string student_id, name, email;
    float balance;
    bool is_active;

public:
    Student(int user_id, string student_id, string name, string email = "", float balance = 0, bool is_active = false);
    void setuser_id(int user_id);
    void setstudent_id(string student_id);
    void setname(string name);
    void setemail(string email);
    void setbalance(float balance);
    void setis_active(bool is_active);
    int getuser_id();
    string getstudent_id();
    string getname();
    string getemail();
    float getbalance();
    bool getis_active();
    void print();
};

Student::Student(int user_id, string student_id, string name, string email, float balance, bool is_active)
{
    setuser_id(user_id);
    setstudent_id(student_id);
    setname(name);
    setemail(email);
    setbalance(balance);
    setis_active(is_active);
}

void Student::setuser_id(int user_id)
{
    this->user_id = user_id;
}

void Student::setstudent_id(string student_id)
{
    this->student_id = student_id;
}

void Student::setname(string name)
{
    this->name = name;
}

void Student::setemail(string email)
{
    this->email = email;
}

void Student::setbalance(float balance)
{
    this->balance = balance;
}

void Student::setis_active(bool is_active)
{
    this->is_active = is_active;
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

float Student::getbalance()
{
    return balance;
}

bool Student::getis_active()
{
    return is_active;
}

void Student::print()
{
    cout << "User ID: " << user_id << "\nName: " << name << "\tEmail: " << email << "\nIs Active: " << is_active << "\tBalance: " << balance << endl;
}

enum Status
{
    Cancelled,
    Pending,
    Confirmed
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
    Reservation(int reservation_id, const Student &student, const DiningHall &dHall, const Meal &meal, Status status);
    void setreservation_id(int reservation_id);
    void setstudent(const Student &student);
    void setdiningHall(const DiningHall &dHall);
    void setmeal(const Meal &meal);
    void setstatus(Status status);
    void setcreated_at(time_t created_at);
    int getreservation_id();
    Student getstudent();
    DiningHall getdininghall();
    Meal getmeal();
    Status getstatus();
    time_t gettime();
    void print();
};
Reservation::Reservation(int reservation_id, const Student &student, const DiningHall &dHall, const Meal &meal, Status status)
    : reservation_id(reservation_id), student(student), dHall(dHall), meal(meal), status(status) 
{

}

void Reservation::setreservation_id(int reservation_id)
{
    this->reservation_id = reservation_id;
}

void Reservation::setstudent(const Student &student)
{
    this->student = student;
}

void Reservation::setdiningHall(const DiningHall &dHall)
{
    this->dHall = dHall;
}

void Reservation::setmeal(const Meal &meal)
{
    this->meal = meal;
}

void Reservation::setstatus(Status status)
{
    this->status = status;
}

void Reservation::setcreated_at(time_t created_at)
{
    this->created_at = created_at;
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

void Reservation::print()
{
    student.print();
    dHall.print();
    meal.print();
    cout << "Status: " << status << "\nCreated At: " << ctime(&created_at);
}
