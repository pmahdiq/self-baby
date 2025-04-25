#pragma once

#include <iostream>
#include <vector>
#include <ctime>
#include "Student.hpp"
#include "Meal.hpp"
#include "DiningHall.hpp"
using namespace std;

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
    bool cancle();
    void print();
};
