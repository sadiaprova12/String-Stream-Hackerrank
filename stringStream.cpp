#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> out;
    stringstream ss(str);
    
    
    char ch;
    int temp;
    
    while(ss  >>  temp)
    {
        out.push_back(temp);
        ss  >>  ch;
    }
    return out;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
