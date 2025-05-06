#include"../include/Panel.hpp"
void Panel::Action(int choice) {
    switch (choice) {
        case 1:
            addReservation(Reservation); // Placeholder for actual reservation
            break;
        case 2:
            addToShoppingCart();
            break;
        case 3:
            cancelReservation(0); // Placeholder for actual reservation ID
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