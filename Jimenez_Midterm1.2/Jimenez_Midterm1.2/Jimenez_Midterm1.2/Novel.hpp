#ifndef NOVEL_HPP_INCLUDED
#define NOVEL_HPP_INCLUDED

#include <string>



namespace Publications

{

    class Novel {

    public:

        Novel();

        Novel(const std::string& newTitle, const int newTotalPages, const std::string& newGenre);

        void setTitle(const std::string& newTitle);

        std::string getTitle() const;

        void setTotalPages(const int newTotalPages);

        int getTotalPages() const;

        void setGenre(const std::string& newGenre);

        std::string getGenre() const;

        void printData() const;

        std::string description()const;

    private:

        std::string title;

        int totalPages;

        std::string genre;

    };

}


#endif // NOVEL_HPP_INCLUDED
