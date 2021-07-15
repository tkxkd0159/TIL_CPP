#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "array/array.h"
#include "dict/dict.h"

using namespace std;

enum class Cases {
    Day7,
    Day8,
    Day9
};

int main()
{
    Cases choice = Cases::Day8;
    
    switch (choice) {
    case Cases::Day7:
    {
        string file_name = "array/test.txt";
        day7(file_name);
        break;
    }
    case Cases::Day8:
    {
        string file_name = "dict/test.txt";
        day8(file_name);
        break;
    }
    default:
        cout << "Default case" << endl;
    }


    return 0;
}


