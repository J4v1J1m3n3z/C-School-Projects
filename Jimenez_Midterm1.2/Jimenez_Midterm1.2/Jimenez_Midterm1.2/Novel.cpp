#include <iostream>

#include "Novel.hpp"



using namespace Publications;

using namespace std;


//Empty Constructor

Novel::Novel()
{

    totalPages = 0;

    title = "";

    genre = "";

}


//Constructor
Novel::Novel(const std::string& newTitle, const int newTotalPages, const std::string& newGenre)

{

    title = newTitle;

    totalPages = newTotalPages;

    genre = newGenre;

}

void Novel::setTitle(const std::string& newTitle) {

    title = newTitle;

}



std::string Novel::getTitle() const {

    return title;

}

void Novel::setTotalPages(const int newTotalPages) {

    totalPages = newTotalPages;

}



int Novel::getTotalPages() const {

    return totalPages;

}

void Novel::setGenre(const std::string& newGenre) {

    genre = newGenre;

}



std::string Novel::getGenre() const {

    return genre;

}

std::string Novel::description() const {

    return "This is a novel!";

}



void Novel::printData() const

{

    std::cout << "***************" << std::endl;

    std::cout << "Novel's title: " << title << std::endl;

    std::cout << "Novel's pages: " << totalPages << std::endl;

    std::cout << "Novel's Genre: " << genre << std::endl;

    std::cout << "***************" << std::endl;

}
