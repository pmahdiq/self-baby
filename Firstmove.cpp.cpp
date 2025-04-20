#include <iostream>
#include <vector>
using namespace std;
enum ghaza
{
   
};

class Meal
{
    private:
    int meal_id;
    string name;
    float price;
    enum meal_type
    {

    };
    vector <ghaza> side_items;

    public:
    Meal();
    void print();
    void update_price(float new_price);
    void add_side_item(string item);
    int getters();
    void setters();


};
class DiningHall
{
    private:
    int hall_id;
    string name;
    string address;
    int capacity;

    public:
    DiningHall();
    void print();
    int getters();
    void setters();

};
int main()
{
    
}
