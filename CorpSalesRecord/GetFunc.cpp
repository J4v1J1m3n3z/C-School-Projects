// -------------------------------------------------------

// Author: Javier Jimenez

// Date: 10/2/2024

// Source Name: main.cpp

// Description: Contains functions for file main

// Program Logic(pseudo code)

// 1. Create string Divisions function to get the division name from the rows int of the array

// 2. Create string Quarters function to get the Quarter number from the column in of the array

// 3. Create double GetTotal function to get total of the whole 2D array

// 3a. Create instant int size to hold the number of quarters per Division

// 3b. Create return double total to hold value of the total

// 3c. Create an outer for loop and an inner for loop to grab all values in the 2D array

// 3d. Use formula: total += array[i][n]

// 3e. Return double total

// 4. Create double GetAverage function to get average of the total 2D array

// 4a.Create int size to hold the number of quarters per Division

// 4b.Create double total to hold all the added value in the 2D array

// 4c.Create double average to hold the average of the 2D array

// 4d.Create two for loop to go through the whole 2D array

// 4e.Have total += array[i][n] in the inner for loop

// 4f. Outside the outer loop, average = total/16

// 4g. Return average

// 5. Create double GetRowTotal function with parameters of the 2D array and int row

// 5a.Create int size to hold the number of quarters per Division

// 5b.Create double rowTotal to hold the row total

// 5c.Create if else statement to verify the input for testing

// 5d. Create for loop to go through the columns of the selected row

// 5e. Inside the for loop: rowTotal += array[row][i]

// 5f. Return rowTotal

// 6. Create double GetColumnTotal function with parameter of the 2D array and int column

// 6a. Create int size to hold the number of Divisions

// 6b. Create double columnTotal

// 6c. Create if else statement to verify the input for testing

// 6d. Create for loop to go through the rows of the selected column

// 6e. Inside the for loop: columnTotal += array[i][column]

// 6f. Return columnTotal

// 7. Create double GetHighest function with parameters of 2D array, int& rows, and int& column

// 7a.Create int size for the number of quarters and division

// 7b.Create double highValue and have it equal to array[0][0]

// 7c.Create int x and int y to print out the division and quarter of the highest sale

// 7d. Create two for loops go through the 2D array

// 7e. Within the inner for loop, create an if statement if there is a value greater than current value

// 7f. If so, store the higher of the two values and it's position with x and y

// 7g. Print out function Division with int x

// 7h. Print out function Quarters with int y

// 7i. Return highValue

// 8. Create double GetLowest function with parameters of 2D array, int& rows, and int& column

// 8a.Create int size for the number of quarters and division

// 8b.Create double lowValue and have it equal to array[0][0]

// 8c.Create int x and int y to print out the division and quarter of the lowest sale

// 8d. Create two for loops go through the 2D array

// 8e. Within the inner for loop, create an if statement if there is a value greater than current value

// 8f. If so, store the lower of the two values and it's position with x and y

// 8g. Print out function Division with int x

// 8h. Print out function Quarters with int y

// 8i. Return lowValue

// 9. Create void PrintOut function with parameters of 2D array

// 9a. Create int size for the number of quarters and division

// 9b.Create double temp to hold total of the Division

// 9c. Create for loop to store all division total in the 2D array

// 9d. Print out the number of Quarters and Division total

// 9e. Create two for loops to go through array

// 9f. Inside the inner for loop, call function Division and print out array in a format

// 9g. After outer for loop, print out Quarter totals

//----------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;
/**********************************************************
*Function name: Divisions
***********************************************************
*Parameters: int x
***********************************************************
*Returns: string div
***********************************************************
*Description: Finds out what division based of the int x.
*Array[x][y]
***********************************************************/
string Divisions(int x)
{
    string div{};
    if(x==0)
          div ="North Division: ";
    else if(x==1)
        div= "South Division: ";
    else if (x==2)
        div= "East Division: " ;
    else
        div = "West Division: ";

 return div;
}//End of Divisions

/**********************************************************
*Function name: Quarters
***********************************************************
*Parameters: int y
***********************************************************
*Returns: string qua
***********************************************************
*Description: Finds out what Quarter based of the int y.
*Array[x][y]
***********************************************************/
string Quarters(int y)
{
    string qua{};
    if(y==0)
        qua = "Quarter 1";
    else if(y==1)
        qua = "Quarter 2";
    else if (y==2)
        qua = "Quarter 3";
    else
        qua = "Quarter 4";

return qua;
}//End of Quarters

/**********************************************************
*Function name: GetTotal
***********************************************************
*Parameters: double array [5][5]
***********************************************************
*Returns: double total
***********************************************************
*Description: Calculate total of all sales inside the array
*besides the Quarter totals and Division total.
*total += array[i][n]
***********************************************************/
double GetTotal(double array[5][5])
{
    int size{4};
    double total{0};
    for(int i = 0; i < size; i++)
    {
        for(int n = 0; n< size;n++)
        {
            total += array[i][n];
        }//end inner for loop
    }//end outer for loop
    return total;
}//End of GetTotal

/**********************************************************
*Function name: GetAverage
***********************************************************
*Parameters: double array [5][5]
***********************************************************
*Returns: double average
***********************************************************
*Description: Calculate average of all sales inside the array
*besides the Quarter totals and Division totals. Then divide
*by the total of input, 16.
*total += array[i][n]
*average = total/16
***********************************************************/
double GetAverage(double array[5][5])
{
    int size{5};
    double total{0};
    double average{0};
    for(int i = 0; i < size-1; i++)
    {
        for(int n = 0; n< size-1;n++)
        {
            total += array[i][n];
        }//End of inner for loop
    }//End of outer for loop
    average = total/16;

    return average;

}//end of GetAverage

/**********************************************************
*Function name: GetRowTotal
***********************************************************
*Parameters: double array [5][5], int row
***********************************************************
*Returns: double rowTotal
***********************************************************
*Description: Calculate total of all sales of the row require
*by the parameters.Except the Quarter totals and Division total.
*rowTotal += array[row][n]
***********************************************************/
double GetRowTotal(double array[5][5],int row)
{
    int size{4};
    double rowTotal{0};

     if((row > 3)||(row <0))
        {
         cout<< "Please enter a correct input!!!" << std::endl;
        }//end of if
     else
        {
            for(int i = 0; i < size ;i++)
            {

                rowTotal += array[row][i];

            }//end of for loop
        }//end of else
    return rowTotal;
}//End of GetRowTotal

/**********************************************************
*Function name: GetColumnTotal
***********************************************************
*Parameters: double array [5][5], int column
***********************************************************
*Returns: double columnTotal
***********************************************************
*Description: Calculate total of all sales of required column
*inside the array. Except the Quarter totals and Division total.
*columnTotal += array[i][column]
***********************************************************/
double GetColumnTotal(double array[5][5],int column)
{
    int size{4};
    double columnTotal{0};

    if((column > 3)||(column <0))
    {
        cout<<"Please enter a correct input!!!" << std::endl;
    }//end of if
    else
    {
            for(int i = 0; i < size  ;i++)
            {
                columnTotal += array[i][column];
            }//end of for loop
    }//end of else
    return columnTotal;
}//end of GetColumnTotal

/**********************************************************
*Function name: GetHighest
***********************************************************
*Parameters: double array [5][5], int& row, int& column
***********************************************************
*Returns: double highValue
***********************************************************
*Description: Finds the highest sale within the array and
*prints out the Quarter and Division it was found in.
***********************************************************/
double GetHighest(double array[5][5],int& row,int& column)
{
    int size{4};
    double highValue = array[0][0];
    int x = 0;
    int y= 0;

    for(int i = 0; i < size; i++)
    {
        for(int n = 0;n< size;n++)
        {
            if(array[i][n] > highValue)
            {
                highValue = array[i][n];
                x = i;
                y = n;
            }//end of if
        }//end of inner for loop
    }//end of outer for loop
    cout<< Divisions(x)<< std::endl;
    cout << Quarters(y)<< std::endl;

    return highValue;
}//end of GetHighest

/**********************************************************
*Function name: GetLowest
***********************************************************
*Parameters: double array [5][5], int& row, int& column
***********************************************************
*Returns: double lowValue
***********************************************************
*Description: Finds the lowest sale within the array and
*prints out the Quarter and Division it was found in.
***********************************************************/
double GetLowest(double array[5][5],int& row,int& column)
{
    int size{4};
    double lowValue = array[0][0];
    int x{0};
    int y{0};

    for(int i = 0; i < size; i++)
    {
        for(int n = 0;n< size;n++)
        {
            if(array[i][n] < lowValue)
            {
                lowValue = array[i][n];
                x=i;
                y=n;
            }//end if
        }//end inner for loop
    }//end outer for loop
    cout<< Divisions(x)<< std::endl;
    cout << Quarters(y)<< std::endl;
    return lowValue;
}//end of GetLowest

/**********************************************************
*Function name: PrintOut
***********************************************************
*Parameters: double array [5][5]
***********************************************************
*Returns: nothing
***********************************************************
*Description: Fills the total portion of the 2D array and
*and print out everything in an ok format.
***********************************************************/
void PrintOut(double array [5][5])
{
    int size{4};
    double temp{0};
    for(int j = 0; j <4;j++)
    {
        temp = GetRowTotal(array,j);
        array [j][4]= temp;
    }//end of first for loop

    cout << setw(30) << "Quarter 1:"<<setw(20) <<"Quarter 2:"<< setw(20)
    <<"Quarter 3:" <<setw(20)<<"Quarter 4:" << setw(25)<<"Division Total: "<< std::endl;

    for(int i = 0; i < size; i++)
    {
        for(int n = 0; n < 1; n++)
        {
            cout<<setw(0)<<Divisions(i)<<setw(10) << "$ "<< array[i][n]<< setw(20) << "$ " <<array[i][n+1] <<
            setw(20) << "$ "<<array[i][n+2] << setw(20) <<"$ "<<array[i][n+3] << setw(20)
            << "$ " << array[i][n+4] << std::endl;
        }// end of inner for loop
    }//end of outer for loop
    cout<< "Quarter Total: "<< setw(15)<< "$ " << GetColumnTotal(array,0) << setw(20)<< "$ " << GetColumnTotal(array,1)
    << setw(20)<<"$ "<< GetColumnTotal(array,2) << setw(20) << "$ " << GetColumnTotal(array,3) <<std::endl;
}//end of PrintOut
