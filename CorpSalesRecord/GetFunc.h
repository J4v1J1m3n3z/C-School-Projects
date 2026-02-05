#ifndef GETFUNC_H_INCLUDED
#define GETFUNC_H_INCLUDED

double GetTotal(double array [5][5]);
double GetAverage(double array [5][5]);
double GetRowTotal(double array[5][5], int row);
double GetColumnTotal(double array[5][5], int column);
double GetHighest(double array[5][5],int& row, int& column);
double GetLowest(double array [5][5],int& row,int& column);
void PrintOut(double array[5][5]);


#endif // GETFUNC_H_INCLUDED
