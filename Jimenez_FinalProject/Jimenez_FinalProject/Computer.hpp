#ifndef COMPUTER_HPP
#define COMPUTER_HPP
#include "Electronics.hpp"

namespace electronics//namespace for the Electronics, Computer, Mobile, and Printer classes
{
	
	class Computer : public Electronics//Computer class that inherits from the Electronics class
	{
	private:
		int numOfCores;//number of cores in the computer
	public:
		Computer();//default constructor
		//parameterized constructor
		Computer(std::string newMade, std::string newName, double newPrice, int newQuantity, int newNumOfCores);
		std::string description();//description of the computer
		std::string toString();//returns the computer object as a string
		int getNumOfCores();//returns the number of cores in the computer
		void setNumOfCores(const int newNumOfCores);//sets the number of cores in the computer

	};//end of Computer class
}//end of electronics namespace
#endif // !COMPUTER_HPP
