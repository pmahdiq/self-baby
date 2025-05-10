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
    DiningHall *dHall;
    Meal *meal;
    Status status;
    time_t created_at = time(0);

public:
    Reservation(int reservation_id, DiningHall &dHall, Meal &meal, Status status);
    void setreservation_id(int reservation_id);
    void setdiningHall(DiningHall &dHall);
    void setmeal(Meal &meal);
    void setstatus(Status status);
    void setcreated_at(time_t created_at);
    int getreservation_id();
    DiningHall getdininghall();
    Meal getmeal();
    Status getstatus();
    time_t gettime();
    bool cancle();
    void print();
};
