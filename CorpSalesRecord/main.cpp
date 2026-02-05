// *******************************************************

// Author: Javier Jimenez

// Date: 10/2/2024

// Source Name: main.cpp

// Description: This program takes in sales
// records and display the sales and calculate
//totals,averages,and highest/lowest value

// Program Logic(pseudo code)

// 1. Declare double array as sales

// 2. Declare variable rows as int

// 3. Declare variable column as int

// 4. Output prompt to user to input sale records

// 5. Use outer for loop to change division's sale reports

// 6. Use inner for loop to intake quarter's sale reports

// 7. Call PrintOut function to format sale report

// 8. Print out average with the GetAverage function

// 9. Print out lowest sale with GetLowest function

// 10. Print out highest sale with GetHighest function

//********************************************************


#include <iostream>
#include "GetFunc.h"

using namespace std;

int main()
{

    double sales[5][5];
    int rows =0;
    int column = 0;

    cout<< "Fill all Quarters of the North division's sales, then same for the other division."<<std::endl;
    /*
    *Out for loop will be use to change divisions when the previous division is finished
    */
    for(int i =0; i< 4;i++)
    {
        /*
        *Inner for loop will take in each Quarter's sale of a division
        */
        for(int n = 0; n<4; n++)
        {

            cout << "Enter next Quarter income: " << std::endl;
            cin >> sales[i][n];

        }//End of inner for loop
    }//End of outer for loop


    PrintOut(sales);
    cout << "Average: $" << GetAverage(sales)<<std::endl;
    cout << "Lowest sale: $" << GetLowest(sales,rows,column)<< std::endl;
    cout << "Highest sale: $" << GetHighest(sales,rows,column)<<std::endl;
    return 0;
}
