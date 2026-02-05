#ifndef TEXTBOOK_HPP_INCLUDED
#define TEXTBOOK_HPP_INCLUDED
#include <string>



namespace Publications

{

    class Textbook {

    public:
    //Empty Constructor
     Textbook();
    //Constructor
     Textbook(const std::string &newTitle,  const int newTotalPages, const std::string &newCourseId);
    //Set and get
     void setTitle(const std::string &newTitle);

     std::string getTitle() const;

     void setTotalPages(const int newTotalPages);

     int getTotalPages() const;

    void setCourseId(const std::string &newCourseId);

     std::string getCourseId() const;

     void printData() const;

     std::string description()const;

    private:

        std::string title;//Holds title

        int totalPages;//Holds number of pages

        std::string courseId;//Holds course id

    };

}


#endif // TEXTBOOK_HPP_INCLUDED
