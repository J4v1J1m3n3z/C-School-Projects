#include"Computer.hpp"

// Default constructor
electronics::Computer::Computer():numOfCores{0}
{

}
// Parameterized constructor
electronics::Computer::Computer(std::string newMade, std::string newName, double newPrice, int newQuantity, int newNumOfCores)
	:Electronics(newMade, newName, newPrice, newQuantity), numOfCores(newNumOfCores)
{
	made = newMade;
	name = newName;
	price = newPrice;
	quantity = newQuantity;
	numOfCores = newNumOfCores;
}
// get and set functions
int electronics::Computer::getNumOfCores()
{
	return numOfCores;
}

void electronics::Computer::setNumOfCores(const int newNumOfCores) 
{
	numOfCores = newNumOfCores;
}

// Description function
std::string electronics::Computer::description()
{
	
	Electronics::description();// Call the base class description function
	std::cout << "Number of Cores: " << numOfCores << "\n" << std::endl;
	return "This is a computer!!!!!!";
}
// toString function
std::string electronics::Computer::toString()
{
	std::string temp;// Temporary string to hold the information
	temp = "Computer: " + name + " Date created: " + made + " Number of Cores: "
		+std::to_string( numOfCores)+" Ammount: " +std::to_string(quantity)+ " Price: $" + std::to_string(price);
	return temp;

}