#include "Electronics.hpp"

	// Default constructor
	electronics::Electronics::Electronics() :made{ "" }, name{ "" }, price{ 0.00 }, quantity{ 0 }
	{

	}
	// Parameterized constructor
	electronics::Electronics::Electronics(const std::string& newMade, const std::string& newName,
		const double newPrice, const int newQuantity) :made(newMade), name(newName), price(newPrice), quantity(newQuantity)
	{

	}
	//Setters and Getters
	void electronics::Electronics::setMade(std::string& newMade)
	{
		made = newMade;
	}
	std::string electronics::Electronics::getMade() const
	{
		return made;
	}
	void electronics::Electronics::setName(std::string& newName)
	{
		name = newName;
	}
	std::string electronics::Electronics::getName() const
	{
		return name;
	}
	void electronics::Electronics::setPrice(const double newPrice)
	{
		price = newPrice;
	}
	double electronics::Electronics::getPrice()const
	{
		return price;
	}
	void electronics::Electronics::setQuantity(const int newQuantity)
	{
		quantity = newQuantity;
	}
	int electronics::Electronics::getQuantity()const
	{
		return quantity;
	}
	// Description and toString methods
	std::string electronics::Electronics::description()
	{
		std::cout << "Name: " << name << "\n" << std::endl;
		std::cout << "Made: " << made << "\n" << std::endl;
		std::cout << "Price: " << price << "\n" << std::endl;
		std::cout << "Quantity: " << quantity << "\n" << std::endl;
		return "Electronic!!!!";
	}
	std::string electronics::Electronics::toString()
	{
		return "This is a Electronic!!!!!!!";
	}
