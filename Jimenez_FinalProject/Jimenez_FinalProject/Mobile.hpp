#ifndef MOBILE_HPP
#define MOBILE_HPP
#include"Electronics.hpp"


namespace electronics//namespace for the Mobile class, Computer class, and Printer class derived from the Electronics class
{
	
	class Mobile : public Electronics//Mobile class derived from the Electronics class
	{
	private:
		std::string plan;//string variable to store the plan of the mobile phone
	public:
		Mobile();//default constructor
		//parameterized constructor
		Mobile(std::string newMade, std::string newName, double newPrice, int newQuantity, std::string newPlan);
		std::string description();//function to return the description of the mobile phone
		std::string toString();//function to return the string representation of the mobile phone
		std::string getPlan();//function to return the plan of the mobile phone
		void setPlan(std::string newPlan);//function to set the plan of the mobile phone
	};//end of the Mobile class
}//end of the electronics namespace
#endif // !MOBILE_HPP
