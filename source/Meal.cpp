#include "../include/Meal.hpp"

Meal :: Meal()
{
    
}

Meal::Meal(int meal_id, string name, float price, Meal_type meal_type, vector<SideItem> side_items)
{
    setmeal_id(meal_id);
    setname(name);
    setprice(price);
    setmeal_type(meal_type);
    setside_items(side_items);
}

void Meal::print()
{
    cout << "Name: " << name << "\tPrice: " << price << "\tMeal Type: ";
    switch (meal_type)
    {
    case Breakfast:
        cout << "Breakfast";
        break;
    case Lunch:
        cout << "Lunch";
        break;
    case Dinner:
        cout << "Dinner";
        break;
    default:
        cout << "Unknown Meal Type";
        break;
    }

    cout << "\nSide Items: ";
    for (auto item : side_items)
    {
        cout << item << " ";
    }
    cout << endl;
}


void Meal::setmeal_id(int meal_id)
{
    if (meal_id < 0)
    {
        cout << "Invalid meal id" << endl;
        return;
    }
    this->meal_id = meal_id;
}

void Meal::setname(string name)
{
    if (name == "")
    {
        cout << "Invalid name" << endl;
        return;
    }
    this->name = name;
}

void Meal::setprice(float price)
{
    if (price < 0)
    {
        cout << "Invalid price" << endl;
        return;
    }
    this->price = price;
}

void Meal::setmeal_type(Meal_type meal_type)
{
    if (meal_type != Breakfast && meal_type != Lunch && meal_type != Dinner)
    {
        cout << "Invalid meal type" << endl;
        return;
    }
    this->meal_type = meal_type;
}

void Meal::setside_items(vector<SideItem> side_items)
{
    this->side_items = side_items;
}

void Meal::set_isActive(bool isActive)
{
    if (isActive == true)
    {
        cout << "Meal is active" << endl;
    }
    else
    {
        cout << "Meal isn't active" << endl;
    }
    this->_isActive = isActive;
}

void Meal::setReerveDay(ReserveDay day)
{
    reserve_day = day;
}

int Meal::getmeal_id()
{
    return meal_id;
}

string Meal::getname()
{
    return name;
}

float Meal::getprice()
{
    return price;
}

Meal_type Meal::getmeal_type()
{
    return meal_type;
}

bool Meal::get_isActive()
{
    return _isActive;
}

ReserveDay Meal::getReserveDay()
{
    return reserve_day;
}

vector<SideItem> Meal::getside_items()
{
    return side_items;
}

void Meal::update_price(float new_price)
{
    price = new_price;
}

void Meal::add_side_item(SideItem item)
{
    side_items.push_back(item);
}

bool Meal::isActive()
{
    return get_isActive();
}