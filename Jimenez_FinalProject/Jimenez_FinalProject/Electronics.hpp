#ifndef ELECTRONICS_HPP
#define ELECTRONICS_HPP
#include <string>
#include <iostream>

namespace electronics//namespace for Electronics class , Computer class, Mobile class, Printer class
{
	
	class Electronics//abstract class
	{
	protected:
		std::string made;//made in or brand
		std::string name;//name of the product
		double price;//price of the product
		int quantity;//quantity of the product
	public:
		Electronics();//default constructor
		//Parameterized constructor
		Electronics(const std::string &newMade,const std::string &newName,const double newPrice,const int newQuantity);
		//Destructor
		virtual ~Electronics() = default;
		//Pure virtual function
		virtual std::string description() = 0;
		virtual std::string toString();
		//Setters and Getters
		void setMade(std::string& newMade);
		std::string getMade() const;
		void setName(std::string& newName);
		std::string getName() const;
		void setPrice(const double newPrice);
		double getPrice()const;
		void setQuantity(const int newQuantity);
		int getQuantity()const;

	};//end of Electronics class
}//end of electronics namespace
#endif // !ELECTRONICS_HPP
