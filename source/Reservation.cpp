#include "../include/Reservation.hpp"

Reservation::Reservation(int reservation_id, DiningHall &dHall, Meal &meal, Status status)
{
    setreservation_id(reservation_id);
    setdiningHall(dHall);
    setmeal(meal);
    setstatus(status);
}

void Reservation::setreservation_id(int reservation_id)
{
    this->reservation_id = reservation_id;
}

void Reservation::setdiningHall(DiningHall &dHall)
{
    this-> dHall = &dHall;
}

void Reservation::setmeal(Meal &meal)
{
    this->meal = &meal;
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

DiningHall Reservation::getdininghall()
{
    return *dHall;
}

Meal Reservation::getmeal()
{
    return *meal;
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
    dHall -> print();
    meal -> print();
    cout << "Status: " << status << "\nCreated At: " << ctime(&created_at);
}
bool Reservation::cancle()

{
    if (status == Pending)
    {
        status = Cancelled;
        return true;
    }
    return false;
}
