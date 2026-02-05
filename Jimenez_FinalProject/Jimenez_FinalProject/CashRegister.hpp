#ifndef CASHREGISTER_HPP
#define CASHREGISTER_HPP

#include "Inventory.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "InvalidDataException.hpp"

namespace electronicStore // namespace for the Inventory class, CashRegister class, and ElectronicStore class
{
    template<typename Electronics> // template for the CashRegister class
    class CashRegister
    {
    private:
        std::vector<std::pair<Electronics*, int>> purchase; // vector of pairs of Electronics* and int
        electronicStore::Inventory<Electronics>& inventory; // reference to the Inventory class
        void CheckInventory(Electronics* item, int quantity); // private member function to check the inventory

    public:
        CashRegister(electronicStore::Inventory<Electronics>& inventory); // constructor
        void setInventory(electronicStore::Inventory<Electronics>& inventory); // member function to set the inventory
        void addItemToPurchase(Electronics* item, int quantity); // member function to add an item to the purchase
        void printSelectedList(); // member function to print the selected list
        double computePrice(); // member function to compute the price
        double computeTax(); // member function to compute the tax
        double computeTotal(); // member function to compute the total Price
    }; // End CashRegister class

    // CashRegister class constructor
    template<typename Electronics>
    CashRegister<Electronics>::CashRegister(electronicStore::Inventory<Electronics>& inventory)
        : inventory(inventory)
    {
    }

    // setInventory member function
    template<typename Electronics>
    void CashRegister<Electronics>::setInventory(electronicStore::Inventory<Electronics>& inventory)
    {
        this->inventory = inventory; // set the inventory
    }

    // addItemToPurchase member function
    template<typename Electronics>
    void CashRegister<Electronics>::addItemToPurchase(Electronics* item, int quantity)
    {
        // Check if quantity is positive and throw an exception if not
        if (quantity <= 0)
        {
            throw exception::InvalidDataException("Quantity must be greater than zero.");
        }

        CheckInventory(item, quantity); // check the inventory
        purchase.push_back(std::make_pair(item, quantity)); // add the item to the purchase
    }

    // printSelectedList member function
    template<typename Electronics>
    void CashRegister<Electronics>::printSelectedList()
    {
        if (purchase.empty())
        {
            throw exception::InvalidDataException("No items in the purchase list.");
        }

        // Print the selected list of items
        for (const auto& item : purchase)
        {
            std::cout << item.second << " " << item.first->toString() << std::endl;
        } // End for loop
    }

    // computePrice member function
    template <typename Electronics>
    double CashRegister<Electronics>::computePrice()
    {
        if (purchase.empty())
        {
            throw exception::InvalidDataException("No items in the purchase list.");
        }

        double totalPrice = 0.0; // initialize totalPrice to 0
        // Compute the total price of the purchase
        for (const auto& item : purchase)
        {
            totalPrice += item.first->getPrice() * item.second; // calculate the total price
        } // End for loop
        return totalPrice; // return the total price
    }

    // computeTax member function
    template <typename Electronics>
    double CashRegister<Electronics>::computeTax()
    {
        if (purchase.empty())
        {
            throw exception::InvalidDataException("No items in the purchase list.");
        }

        // Using syracuse tax rate of 8%
        return computePrice() * 0.08;
    }

    // computeTotal member function
    template <typename Electronics>
    double CashRegister<Electronics>::computeTotal()
    {
        if (purchase.empty())
        {
            throw exception::InvalidDataException("No items in the purchase list.");
        }

        return computePrice() + computeTax(); // return the total price plus the tax
    }

    // CheckInventory member function
    template <typename Electronics>
    void CashRegister<Electronics>::CheckInventory(Electronics* item, int quantity)
    {
        // Check if the item is in the inventory and throw an exception if not
        for (const auto& it : inventory.inventoryList)
        {
            if (it.first == item)
            {
                if (it.second < quantity)
                {
                    throw exception::InvalidDataException("Insufficient inventory.");
                }
                return;
            }
        }
        throw exception::InvalidDataException("Item not found in inventory.");
    }
} // End namespace electronicStore

#endif // CASHREGISTER_HPP