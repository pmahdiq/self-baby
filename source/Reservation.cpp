#include "../include/Reservation.hpp"

Reservation::Reservation(int reservation_id, const Student &student, const DiningHall &dHall, const Meal &meal, Status status)
{
    setreservation_id(reservation_id);
    setstudent(student);
    setdiningHall(dHall);
    setmeal(meal);
    setstatus(status);
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
