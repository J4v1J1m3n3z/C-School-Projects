/*
* Author: Javier Jimenez
* Date:12/6/2024
* Source File: main.cpp
* Description: This program simulates an electronic store that sells computers, mobiles, and printers.
* Program Logic:
* 1. Create an ElectronicStore object, store.
* 2. Create Computer, Mobile, and Printer objects, comp1, mobile1, and printer1.
* 3. Create const int variables to store the number of computers, mobiles, and printers.
* 4. Fill the store inventory with the created items.
* 5. Create an Inventory object, inventory, and add the items to the inventory.
* 6. Create a CashRegister object, cashRegister, and set the inventory.
* 7. Declare a constant int variable, INDEX, and set it to 1 for the loop.
* 8. Create a for loop to display the menu and get the user's input.
* 9.Use try-catch block to handle exceptions.
* 10. Display the selected list of items.
* 11. Have user input the quantity of items and item they which to purchase.
* 12. Remove the purchased items from the store inventory and update the inventory.
* 13. Print the selected list of items of purchase.
* 14. Compute the total price, tax, and total amount of the purchase.
* 15. Display the total price, tax, and total amount.
* 16. Display the inventory after the purchase.
* 17. Clean up dynamically allocated memory.
*/
#include <iostream>
#include <vector>
#include <string>
#include "ElectronicStore.hpp"
#include "Computer.hpp"
#include "Mobile.hpp"
#include "Printer.hpp"
#include "Inventory.hpp"
#include "CashRegister.hpp"

/*
* Function: displayMenu
* Description: Display the menu of items available for purchase.
* Parameters: Inventory<electronics::Electronics>& inventory
* Returns: void
*/
void displayMenu(electronicStore::Inventory<electronics::Electronics>& inventory) 
{
    std::cout << "Available items for purchase:\n";
    inventory.printAllItems();
    std::cout << "1. Computer\n" << "2. Mobile\n" << "3. Printer\n" << std::endl;
    std::cout << "Enter the item number to purchase or -1 to finish: \n";
}

int main() 
{
    const int numOfCom{ 5 };// Number of computers
    const int numOfMob{ 10 };// Number of mobiles phones
    const int numOfPri{ 7 };// Number of printers

    // Create an ElectronicStore object
    ElectronicStore store;

    // Create Computer, Mobile, and Printer objects
    electronics::Computer* comp1 = new electronics::Computer("BrandA", "Computer", 1200.0, numOfCom, 8);
    electronics::Mobile* mobile1 = new electronics::Mobile("BrandB", "IPhone", 800.0, numOfMob, " PlanA");
    electronics::Printer* printer1 = new electronics::Printer("BrandC", "Pritner", 300.0, numOfPri, true);

    // Use the addInventory method to add the items to the store inventory
    store.addInventory(comp1, numOfCom);
    store.addInventory(mobile1, numOfMob);
    store.addInventory(printer1, numOfPri);

    // Create an Inventory object
    electronicStore::Inventory<electronics::Electronics> inventory;

    // Add the items to the inventory
    inventory.addItem(std::make_pair(comp1, numOfCom));
    inventory.addItem(std::make_pair(mobile1, numOfMob));
    inventory.addItem(std::make_pair(printer1, numOfPri));

    // Create a CashRegister object and set the inventory
    electronicStore::CashRegister<electronics::Electronics> cashRegister(inventory);

    bool INDEX = false; // for loop variable

    // Loop to display the menu and get the user's input
    while (!INDEX)
    {
        displayMenu(inventory); // Display the menu

        int itemNumber; // User input
        std::cin >> itemNumber; // Get the user's input

        // Check if the user wants to exit loop
        if (itemNumber == -1)
        {
            INDEX = true; // Exit loop
        }
        else
        {
            int quantity; // Quantity of items user wants to purchase
            std::cout << "Enter quantity: \n"; // Prompt user to enter quantity
            std::cin >> quantity;

            // Try block to handle exceptions
            try
            {
                // Switch statement to add the item to the purchase list
                switch (itemNumber)
                {
                case 1:
                    cashRegister.addItemToPurchase(comp1, quantity); // Add computer to purchase list
                    store.removeInventory(comp1->getName(), quantity); // Remove computer from store inventory
                    inventory.deleteItem(comp1, quantity); // Update inventory
                    break;
                case 2:
                    cashRegister.addItemToPurchase(mobile1, quantity); // Add mobile to purchase list
                    store.removeInventory(mobile1->getName(), quantity); // Remove mobile from store inventory
                    inventory.deleteItem(mobile1, quantity); // Update inventory
                    break;
                case 3:
                    cashRegister.addItemToPurchase(printer1, quantity); // Add printer to purchase list
                    store.removeInventory(printer1->getName(), quantity); // Remove printer from store inventory
                    inventory.deleteItem(printer1, quantity); // Update inventory
                    break;
                default:
                    std::cout << "Invalid item number.\n";
                    break;
                } // End switch

            } // End try
            catch (const std::exception& e) // Catch block to handle exceptions
            {
                std::cout << "Error: " << e.what() << std::endl;
            }
        } // End else
    } // End while loop

    // Print the purchase list
    cashRegister.printSelectedList();

    // Compute and display the total price, tax, and total amount
    double price = cashRegister.computePrice();
    double tax = cashRegister.computeTax();
    double total = cashRegister.computeTotal();
    
    std::cout << "Total Price: $" << price << std::endl;
    std::cout << "Total Tax: $" << tax << std::endl;
    std::cout << "Total Amount: $" << total << std::endl;

    // Display the inventory after purchase items
    store.displayInventory();

    // Clean up dynamically allocated memory
    delete comp1;
    delete mobile1;
    delete printer1;

    return 0;
}// End main
