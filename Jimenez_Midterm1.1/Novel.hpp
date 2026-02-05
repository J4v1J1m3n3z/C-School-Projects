#ifndef NOVEL_HPP_INCLUDED
#define NOVEL_HPP_INCLUDED

#include <string>



namespace Publications

{

    class Novel
     {

    public:
    //Empty Constructor
     Novel();
    //Constructor
     Novel(const std::string &newTitle,  const int newTotalPages, const std::string &newGenre);
    //Set and gets
     void setTitle(const std::string &newTitle);

     std::string getTitle() const;

     void setTotalPages(const int newTotalPages);

     int getTotalPages() const;

    void setGenre(const std::string &newGenre);

     std::string getGenre() const;

     void printData() const;

     std::string description()const;

    private:

        std::string title;//Holds title of novel

        int totalPages; //Holds number of pages

        std::string genre; //holds genre

    };

}


#endif // NOVEL_HPP_INCLUDED
