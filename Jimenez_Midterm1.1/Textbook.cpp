#include <iostream>

#include "Textbook.hpp"





using namespace std;

using namespace Publications;

//Empty Constructor
Textbook::Textbook()
{

     totalPages = 0;

     title = "";

     courseId = "";

}


//Constructor
Textbook::Textbook(const std::string &newTitle,  const int newTotalPages, const std::string &newCourseId)

{

    title = newTitle;

    totalPages = newTotalPages;

    courseId = newCourseId;

}
//Set and gets
void Textbook::setTitle(const std::string &newTitle)
{

    title = newTitle;

}



std::string Textbook::getTitle() const
{

    return title;

}

void Textbook::setTotalPages(const int newTotalPages)
{

    totalPages = newTotalPages;

}



int Textbook::getTotalPages() const
{

    return totalPages;

}

void Textbook::setCourseId(const std::string &newCourseId)
{

    courseId = newCourseId;

}



std::string Textbook::getCourseId() const
{

    return courseId;

}
//Description
std::string Textbook::description() const
{

    return "This is a Textbook!";

}


//Prints object
void Textbook::printData() const

{

    std::cout << "***************" << std::endl;

    std::cout << "Textbook's title: " << title << std::endl;

    std::cout << "Textbook's pages: " << totalPages << std::endl;

    std::cout << "Textbook's Genre: " << courseId<< std::endl;

    std::cout << "***************" << std::endl;

}
