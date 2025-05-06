#include "../include/DiningHall.hpp"

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
