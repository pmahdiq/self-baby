#pragma once

#include <iostream>
#include <vector>
#include "DiningHall.hpp"
#include "Student.hpp"
#include "Reservation.hpp"
using namespace std;
enum Meal_type
{
    Breakfast,
    Lunch,
    Dinner
};

enum SideItem
{
    Salad,
    Soup,
    Yogurt,
    Drink,
    Fries
};

class Meal
{
    int meal_id;
    string name;
    float price;
    Meal_type meal_type;
    vector<SideItem> side_items;

public:
    Meal(int meal_id, string name, float price, Meal_type meal_type, vector<SideItem> side_items);
    void update_price(float new_price);
    void add_side_item(SideItem item);
    void setmeal_id(int meal_id);
    void setname(string name);
    void setprice(float price);
    void setmeal_type(Meal_type meal_type);
    void setside_items(vector<SideItem> side_items);
    int getmeal_id();
    string getname();
    float getprice();
    Meal_type getmeal_type();
    vector<SideItem> getside_items();
    void update_price(float new_price);
    void add_side_item(SideItem side_item);
    void print();
};