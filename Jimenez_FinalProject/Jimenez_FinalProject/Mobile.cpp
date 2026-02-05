#include"Mobile.hpp"

//default constructor
electronics::Mobile::Mobile()
{
	std::string plan{ "" };
}
//constructor
electronics::Mobile::Mobile(std::string newMade, std::string newName, double newPrice, int newQuantity, std::string newPlan):Electronics(newMade,
	newName,newPrice,newQuantity),plan(newPlan)
{
	made = newMade;
	name = newName;
	price = newPrice;
	quantity = newQuantity;
	plan = newPlan;
}
//Description
std::string electronics::Mobile::description()
{
	Electronics::description();//call the base class description
	std::cout << "Plan: " << plan << "\n" << std::endl;
	return "This mobile phone!!!!!!!";
}
//toString
std::string electronics::Mobile::toString()
{
	std::string temp;//temp string to hold the information
	temp = "Model: " + name + " Date: " + made + " Ammount: "
		+ std::to_string(quantity) + " Plan: " + plan + "Price: $" + std::to_string(price);
	return temp;
}
//setters and getters
std::string electronics::Mobile::getPlan()
{
	return plan;
}
void electronics::Mobile::setPlan(std::string newPlan)
{
	plan = newPlan;
}