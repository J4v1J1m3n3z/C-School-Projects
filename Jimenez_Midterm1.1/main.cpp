/**-------------------------------------------------------

// Author: Javier Jimenez

// Date: 10/28/2024

// Source Name: main.cpp

// Description: Creates 3 objects of Textbook and 2 objects of notebook. Allows user to input data into these objects. Then program prints
out all data.

// Program Logic(pseudo code)

// 1.Create int numTxt, for num of textbook objects

// 2.Create int numNov, for num of novel objects

// 3. Create pointer textbooks and create 3 objects of textbook

// 4. Create pointer novels and create 2 objects of novel

// 5. Create for loop to populate the three objects of textbook

// 6. Create another for loop to populate the two objects of novel

// 7. Create for loop to print out all objects of Textbook

// 8. Create for loop to print out all objects of novel

// 9. Deallotcate all pointers
//----------------------------------------*/
#include <iostream>
#include "Textbook.hpp"
#include "Novel.hpp"

using namespace std;

int main()
{
    //Use constant int to be edited for later use
    const int numTxt{3};
    const int numNov{2};

    Publications::Textbook *textbooks = new Publications::Textbook[numTxt];
    Publications::Novel *novels = new Publications::Novel[numNov];

   /*
   *For loop that uses local variables to fill object of Textbook using pointer textbooks
   */

    for (int i = 0; i < numTxt; ++i)
    {
        std::string title;
        std::string courseID;
        int totalPages;


        cout << "Enter details for Textbook #" << i + 1 << ":" << std::endl;
        cout << "Title: ";
        cin>> title;
        cout << "Total Pages: ";
        cin >> totalPages;
        cout << "Course ID: ";
        cin >> courseID;

        textbooks[i] = Publications::Textbook(title, totalPages, courseID);
    }//End of for loop filling textbook

     /*
   *For loop that uses local variables to fill object of Novel using pointer textbooks
   */

    for (int i = 0; i < numNov; ++i)
    {
        std::string title;
        std::string genre;
        int totalPages;


        cout << "Enter details for Novel #" << i + 1 << ":" << std::endl;
        cout << "Title: ";
        cin >> title;
        cout << "Total Pages: ";
        cin >> totalPages;
        cout << "Genre: ";
        cin>> genre;

        novels[i] = Publications::Novel(title, totalPages, genre);
    }//End of for loop filling novel

    // Display the data from textbook objects
    cout << "Textbook Data: "<< endl;
    for (int i = 0; i < numTxt; ++i)
    {
        textbooks[i].printData();
        cout << endl;
    }
    //Display the data from novel objects
    cout << "Novel Data: " <<endl;
    for (int i = 0; i < numNov; ++i)
    {
        novels[i].printData();
        cout << endl;
    }

    // Deallocate pointers
    delete[] textbooks;
    delete[] novels;

    return 0;
}
