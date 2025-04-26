#ifndef DININGHALL_H
#define DININGHALL_H

#include <iostream>
#include <vector>

using namespace std;
class DiningHall
{
    int hall_id;
    string name;
    string address;
    int capacity;

public:
    DiningHall();
    DiningHall(int hall_id, string name, string address, int capacity);
    void print();
    void sethall_id(int hall_id);
    void setname(string name);
    void setaddress(string address);
    void setcapacity(int capacity);
    int gethall_id();
    string getname();
    string getaddress();
    int getcapacity();
};

#endif DININGHALL_H