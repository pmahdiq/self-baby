#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <ctime>
#include "Reservation.hpp"
#include <string.h>

using namespace std;
class Student : User
{
    int user_id;
    string student_id, email , _phone;
    float balance;
    bool is_active;
    vector<Reservation> reservations;

public:
    Student();
    Student(int user_id, string student_id, string name, string phone, string email = "", float balance = 0, bool is_active = false);
    void setuser_id(int user_id);
    void setstudent_id(string student_id);
    void setemail(string email);
    void setbalance(float balance);
    void setis_active(bool is_active);
    void set_phone(string phone);
    int getuser_id();
    string getstudent_id();
    string getemail();
    string get_phone();
    float getbalance();
    bool getis_active();
    vector<Reservation> getreservations();
    bool isActive();
    void activate();
    void diactivate();
    void reserve_meal(Meal meal);
    bool cancle_reservation(Reservation reservation);
    void print();
};
#endif STUDENT_H