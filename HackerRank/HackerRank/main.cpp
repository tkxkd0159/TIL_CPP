#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "array/array.h"

using namespace std;

enum class Cases {
    Day7,
    Day8
};

int main()
{
    Cases choice = Cases::Day7;
    
    switch (choice) {
    case Cases::Day7:
    {
        string file_name = "array/test.txt";
        day7(file_name);
        break;
    }
    default:
        cout << "Default case" << endl;
    }


    return 0;
}


