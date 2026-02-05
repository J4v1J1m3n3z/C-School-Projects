#ifndef PRINTER_HPP
#define PRINTER_HPP
#include"Electronics.hpp"

namespace electronics //namespace for the Printer class, Mobile class, and Computer class derived from the Electronics class
{
	
	class Printer : public Electronics//Printer class derived from the Electronics class
	
	{
	private:
		bool colored;//bool variable to determine if the printer is colored or not
	public:
		Printer();//default constructor
		//parameterized constructor
		Printer(std::string newMade, std::string newName, double newPrice, int newQuantity, bool color);
		std::string description();//description function to display the printer's description
		std::string toString();//toString function to display the printer's information
		bool getColor();//getColor function to get the printer's color
		void setColor(bool color);//setColor function to set the printer's color

	};//end of Printer class
}//end of electronics namespace
#endif // !PRINTER_HPP
