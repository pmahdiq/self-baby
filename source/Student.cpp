#include "../include/Student.hpp"
Student :: Student()
{
    
}

Student::Student(int user_id, string student_id, string name,string phone, string email, float balance, bool is_active)
{
    setuser_id(user_id);
    setstudent_id(student_id);
    set_name(name);
    setemail(email);
    set_phone(phone);
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

void Student::setemail(string email)
{
    this->email = email;
}

void Student::setbalance(float balance)
{
    this->balance = balance;
}

void Student::set_phone(string phone)
{
    if(phone.length() == 11)
        _phone = phone;
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

string Student::getemail()
{
    return email;
}

string Student::get_phone()
{
    return _phone;
}

float Student::getbalance()
{
    return balance;
}

bool Student::getis_active()
{
    return is_active;
}

bool Student::isActive()
{
    if( getis_active() == true)
    return true;
    else 
    return false;  
}

void Student::activate()
{
    setis_active(true);
}

void Student::diactivate()
{
    setis_active(false);
}

vector<Reservation> Student::getreservations()
{
    return reservations;
}

void Student::reserve_meal(Meal meal)
{

}

bool Student::cancle_reservation(Reservation reservation)
{

}


void Student::print()
{
    cout << "User ID: " << user_id << "\nName: " << name << "\tEmail: " << email << "\nIs Active: " << is_active << "\tBalance: " << balance << endl;
}