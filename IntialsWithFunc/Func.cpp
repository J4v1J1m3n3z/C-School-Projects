#include <iostream>

#include "func.h"

#include <iomanip>



using namespace std;


void jPrint()

{

    cout << fixed << "******************" << std::endl;

    cout << setw(9)<< "*" << std::endl;

    cout << setw(9)<< "*" << std::endl;

    cout << setw(9)<< "*" << std::endl;

    cout << setw(9)<< "*" << std::endl;

    cout << setw(8)<< "*   *" << std::endl;

    cout << setw(7)<< "*  *" << std::endl;

    cout << setw(6)<< "*" << std::endl;



}

void aPrint()

{
    cout<< fixed << "       *         " << std::endl;
    cout << setw(9) << "* *" << std::endl;
    cout << setw(9) <<"*  *" << std::endl;
    cout << setw(9) <<"*   *" << std::endl;
    cout << setw(9) << "*****" << std::endl;
    cout << setw(9) <<"*    *" << std::endl;
    cout << setw(9) <<"*      *" << std::endl;
}

