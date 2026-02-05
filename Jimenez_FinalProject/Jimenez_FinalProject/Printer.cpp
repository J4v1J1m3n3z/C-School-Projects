#include "Printer.hpp"
//default constructor
electronics::Printer::Printer():colored{false}
{

}
//parameterized constructor
electronics::Printer::Printer(std::string newMade, std::string newName, double newPrice, int newQuantity, bool color) :Electronics(newMade, newName,
	newPrice, newQuantity), colored(color)
{
	made = newMade;
	name = newName;
	price = newPrice;
	quantity = newQuantity;
	colored = color;
}
//description function to display the printer's description
std::string electronics::Printer::description()
{
	Electronics::description();//call the base class description function
	if (getColor() == false)//if the printer is not colored
		std::cout << "The no color for the printer!!!!!" << "\n" << std::endl;
	else//if the printer is colored
		std::cout << "There is color for the printer!!!!!" << "\n" << std::endl;

	return "This is a printer!!!!!!!!!";
}
//toString function to display the printer's information
std::string electronics:: Printer::toString()
{
	std::string temp;//temporary string variable to hold the printer's information
	temp = "Model: " + name + " Created: " + made + 
		" Ammount:" + std::to_string(quantity) + " Color: " + std::to_string(colored) + " Price: $" + std::to_string(price);
	return temp;
}
//setter and getter functions
bool electronics::Printer::getColor()
{
	return colored;
}
void electronics::Printer::setColor(bool color)
{
	colored = color;
}