#ifndef ELECTRONICSTORE_HPP
#define ELECTRONICSTORE_HPP

#include "CashRegister.hpp"
#include <vector>
#include <utility>

class ElectronicStore // ElectronicStore class 
{
public:
    ElectronicStore();//default constructor
    void addInventory(electronics:: Electronics* item, int quantity);//addInventory method
    void removeInventory(const std::string& itemName, int quantity);//removeInventory method
    bool checkInventory(const std::string& itemName, int quantity);//checkInventory method
    void displayInventory();//displayInventory method
    void processPurchase(const std::vector<std::pair<std::string, int>>& purchaseList);//processPurchase method

private:
    std::vector < std::pair < electronics:: Electronics* , int >> inventory;//vector of pairs of Electronics* and int
};//end of ElectronicStore class
#endif // !ELECTRONICSTORE_HPP
