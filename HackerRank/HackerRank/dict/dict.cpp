#include "dict.h"


void day8(string file_name) {

	ifstream my_file(file_name);
	map<string, int> phone_book;


	if (!my_file.is_open()) {
		cout << "Fail to open" << endl;
	}
	else {
		string n_temp;
		getline(my_file, n_temp);
		int n = stoi(ltrim(rtrim(n_temp)));

		for (int i = 0; i < n; i++) {
			string l_temp;
			string k;
			int v;

			getline(my_file, l_temp);
			
			istringstream ss(l_temp);
			ss >> k;
			ss >> v;
			//phone_book[k] = v;  // 무조건 overwriting
			pair<map<string, int>::iterator, bool> ret;
			ret = phone_book.insert(make_pair(k, v)); // 이미 해당 key 있으면 추가 안함.
			if (ret.second == false) {
				cout << "key '" << k << "' already exist" << '\n';
				cout << "=> value : " << ret.first->second << endl;
			}
		}
		// test start

		string case_temp;
		while (getline(my_file, case_temp)) {
			try {
				int target_v = phone_book.at(case_temp);
				cout << case_temp << "=" << target_v << endl;
			}
			catch (const out_of_range& e) {
				cerr << "Not found" << '\n';
			}
		}
	}


	phone_book["test"] = 20;
	
	for (map<string, int>::iterator itr = phone_book.begin(); itr != phone_book.end(); itr++) {
		cout << "key : " << itr->first << ", ";
		cout << "value : " << itr->second << endl;
	}
}