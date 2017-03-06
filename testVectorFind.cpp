/*
@author: Sandeep Sasidharan

*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

bool isSandeep(string str);

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


    auto index2 = find_if(begin(v),end(v), isSandeep);

	if (index2 != std::end(v)) {
        std::cout << "v contains: " << *index2 << '\n';
    } else {
        std::cout << "v does not contain: Sandeep" << '\n';
    }


    auto index3 = find_if(begin(v),end(v), [](string str){
    	return (str == "dog");
    });

    if (index3 != std::end(v)) {
        std::cout << "v contains: " << *index3 << '\n';
    } else {
        std::cout << "v does not contain: Dog" << '\n';
    }


	return 1;

}

bool isSandeep(string str){

	if(str == "Sandeep")
		return true;

	return false;
}

