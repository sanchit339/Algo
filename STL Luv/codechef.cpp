#include <bits/stdc++.h>
using namespace std;
int main() {
	// here ordering is done according to number so use it as key
	// and store the value in multiset for duplicate 
	map<int,multiset<string>> marks_map;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		int marks;
		string name;
		cin>>name>>marks;
		marks_map[marks].insert(name);
	}
	// we want to get marks in decresing order so use reverse loop
	auto cur_it = --marks_map.end(); // its the last iterator
	while(true){ //infinite loop
		auto &students = (*cur_it).second;
		int marks = (*cur_it).first;
        for(auto student : students){
		    cout << student << " " << marks <<endl;
		}
		if(cur_it==marks_map.begin()) break;
		cur_it--;
	}
    // return 0;
}