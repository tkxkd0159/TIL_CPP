
#include "array.h"

void day7(string file_name) {

    ifstream myfile(file_name);
    if (!myfile.is_open()) {
        cout << "Fail to open file";
    }
    else {
        string n_temp;
        getline(myfile, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));
        string arr_temp_temp;
        getline(myfile, arr_temp_temp);
        myfile.close();

        vector<string> arr_temp = split(rtrim(arr_temp_temp));
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);    // string to int
            arr[i] = arr_item;
        }
        // Complete to load test case  //

        // start main algorithm

        for (int i = n; i > 0; i--) {
            cout << arr[i - 1] << " ";
        }
        cout << "\n";
    }
}