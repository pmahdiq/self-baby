#include "../include/Student.hpp"
Student :: Student()
{
    
}

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