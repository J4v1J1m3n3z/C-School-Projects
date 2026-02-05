#ifndef TEXTBOOK_HPP_INCLUDED
#define TEXTBOOK_HPP_INCLUDED
#include <string>



namespace Publications

{

    class Textbook {

    public:

        Textbook();

        Textbook(const std::string& newTitle, const int newTotalPages, const std::string& newCourseId);

        void setTitle(const std::string& newTitle);

        std::string getTitle() const;

        void setTotalPages(const int newTotalPages);

        int getTotalPages() const;

        void setCourseId(const std::string& newCourseId);

        std::string getCourseId() const;

        void printData() const;

        std::string description()const;

    private:

        std::string title;

        int totalPages;

        std::string courseId;

    };

}


#endif // TEXTBOOK_HPP_INCLUDED
