#include "../include/DiningHall.hpp"

DiningHall :: DiningHall()
{
    
}

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
    if (hall_id < 0)
    {
        cout << "Invalid hall id" << endl;
        return;
    }
    this->hall_id = hall_id;
}

void DiningHall::setname(string name)
{
    if (name=="")
    {
        cout << "Invalid name" << endl;
        return;
    }
    this->name = name;
}

void DiningHall::setaddress(string address)
{
    if (address=="")
    {
        cout << "Invalid address" << endl;
        return;
    }
    this->address = address;
}

void DiningHall::setcapacity(int capacity)
{
    if (capacity < 0)
    {
        cout << "Invalid capacity" << endl;
        return;
    }
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
