#include"../include/Panel.hpp"
void panel::addReservation(Reservation reservation)
{

}
void Panel::cancelReservation(int reservationId) 
{
    
}

void Panel::checkBalance() 
{
    
}
void Panel::increaseBalance() 
{
    
}
void Panel::addToShoppingCart() 
{
    
}
void Panel::confirmShoppingCart() 
{
    
}
void Panel::removeShoppingCartItem() 
{
    
}

void Panel::showMenu() 
{
    
}

void Panel::showStudentInfo() 
{
    
}

void Panel::viewRecentTransactions() 
{
    
}

void Panel::viewReservations() 
{
    
}
void Panel::Action(int choice) {
    switch (choice) {
        case 1:
        addReservation(Reservation()); 
        break;
        case 2:
        addToShoppingCart();
        break;
        case 3:
        cancelReservation(0);
        break;
        case 4:
        checkBalance();
        break;
        case 5:
        confirmShoppingCart();
        break;
        case 6:
        exit();
        break;
        case 7:
        increaseBalance();
        break;
        case 8:
        removeShoppingCartItem();
        break;
        case 9:
            showMenu();
            break;
            case 10:
            showStudentInfo();
            break;
            case 11:
            viewRecentTransactions();
            break;
            case 12:
            viewReservations();
            break;
            default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
    void Panel::exit() 
    {
        
    }