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
