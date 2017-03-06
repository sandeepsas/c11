/*
@author: Sandeep Sasidharan

*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){

	vector<string> v;
	v.push_back("Sandeep");
	v.push_back("cat");
	v.push_back("dog");

	string val = "cat";

	auto index = find(begin(v),end(v), val);

	if (index != std::end(v)) {
        std::cout << "v contains: " << *index << '\n';
    } else {
        std::cout << "v does not contain: " << val << '\n';
    }

	return 1;

}
