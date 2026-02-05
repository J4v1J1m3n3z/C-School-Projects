#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include "Electronics.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace electronicStore // namespace electronicStore for the Inventory class, CashRegister class, and ElectronicStore class
{
    template<typename Electronics> // template for the Inventory class
    class Inventory
    {
    public:
        void addItem(std::pair<electronics::Electronics*, int> item); // addItem method
        void deleteItem(electronics::Electronics* item, int quantity); // deleteItem method
        void printAllItems(); // printAllItems method
        std::vector<std::pair<electronics::Electronics*, int>> inventoryList; // vector of pairs of Electronics* and int
    }; // end of Inventory class

    template<typename Electronics>
    // addItem method
    void Inventory<Electronics>::addItem(std::pair<electronics::Electronics*, int> item)
    {
            for (const auto& oldItem : inventoryList)
            {
                if (oldItem.first->getName() == item.first->getName()) 
                {
                    // Item already exists in the inventory, do not add it
                    return;
                }
            }
            // Item does not exist, add it to the inventory
            inventoryList.push_back(item);
        
    }

    template<typename Electronics>
    // deleteItem method
    void Inventory<Electronics>::deleteItem(electronics::Electronics* item, int quantity)
    {
        for (auto it = inventoryList.begin(); it != inventoryList.end(); ++it) // use an iterator to iterate through the inventoryList
        {
            if (it->first == item) // if Statement to check if the item is in the inventoryList
            {
                it->second -= quantity; // subtract the quantity from the item
                if (it->second <= 0) // if statement to check if the quantity is less than or equal to 0
                {
                    inventoryList.erase(it); // erase the item from the inventoryList
                }
                return; // exit the function once the item is found and processed
            }
        }
    }

    template<typename Electronics>
    // printAllItems method
    void Inventory<Electronics>::printAllItems()
    {
        for (const auto& item : inventoryList) // for loop to iterate through the inventoryList
        {
            std::cout << item.first->toString() << " Units: " << item.second << std::endl; // print the item and the quantity
        } // end of for loop
    }
} // end of namespace electronicStore

#endif // INVENTORY_HPP