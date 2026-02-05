#include "ElectronicStore.hpp"

// Constructor
ElectronicStore::ElectronicStore()
{
    inventory = {};
}

// Add an item to the inventory
void ElectronicStore::addInventory(electronics::Electronics* item, int quantity)
{
    // for loop to iterate through the inventory
    for (auto& pair : inventory)
    {
        // if statement to check if the item is already in the inventory
        if (pair.first->getName() == item->getName())
        {
            pair.second += quantity; // add the quantity to the item
            return; // return after updating the quantity
        } // end of if statement
    } // end of for loop

    // add the item to the inventory
    inventory.emplace_back(std::make_pair(item, quantity));
}

// Remove an item from the inventory
void ElectronicStore::removeInventory(const std::string& itemName, int quantity)
{
    // for loop to iterate through the inventory
    for (auto item = inventory.begin(); item != inventory.end();)
    {
        
            // if statement to check if the item is in the inventory
            if (item->first->getName() == itemName)
            {
                // if statement to check if the quantity is greater than or equal to the quantity
                if (item->second >= quantity)
                {
                    // subtract the quantity from the item
                    item->second -= quantity;
                    // if statement to check if the quantity is equal to 0
                    if (item->second == 0)
                    {
                        // erase the item from the inventory
                        item = inventory.erase(item);
                    } // End of if statement
                    return; // return after updating the inventory
                } // End of if statement
                else
                {
                    // Handle insufficient inventory
                    std::cout << "Insufficient inventory for " << itemName << std::endl;
                    return; // return after handling insufficient inventory
                } // End of else statement
            } // End of if statement
            else
            {
                ++item;
            } // End of else statement
       
       
    } // End of for loop
    // Handle item not found in inventory
    std::cerr << "Item not found in inventory: " << itemName << std::endl;
}

// Check if an item is in the inventory
bool ElectronicStore::checkInventory(const std::string& itemName, int quantity)
{
    for (const auto& pair : inventory) // for loop to iterate through the inventory
    {
        if (pair.first->getName() == itemName && pair.second >= quantity) // if statement to check if the item is in the inventory
        {
            return true;
        } // End of if statement
    } // End of for loop
    return false;
}

// Display the inventory
void ElectronicStore::displayInventory()
{
    std::cout << "Inventory:\n";
    for (const auto& pair : inventory) // for loop to iterate through the inventory
    {
        std::cout << "- " << pair.first->getName() << ": " << pair.second << " units\n";
    } // End of for loop
}

// Process a purchase
void ElectronicStore::processPurchase(const std::vector<std::pair<std::string, int>>& purchaseList)
{
    for (const auto& item : purchaseList) // for loop to iterate through the purchase list
    {
        if (!checkInventory(item.first, item.second)) // if statement to check if the item is in the inventory
        {
            std::cout << "Insufficient inventory for " << item.first << std::endl;
            return; // return after handling insufficient inventory
        } // End of if statement
        else
        {
            removeInventory(item.first, item.second); // remove the item from the inventory
        } // End of else statement
    } // End of for loop

    // Display a message indicating the purchase was successful
    std::cout << "Purchase processed successfully.\n";
}
