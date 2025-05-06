#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <ctime>
#include "Reservation.hpp"

using namespace std;
class Student
{
    int user_id;
    string student_id, name, email;
    float balance;
    bool is_active;
    vector<Reservation> reservations;

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
    void reserve_meal(Meal meal);
    bool cancle_reservation(Reservation reservation);
    void print();
};
#endif STUDENT_H