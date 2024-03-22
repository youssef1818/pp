#include <iostream>
#include <string>
#include <fstream>
#include <bitset>
#include <cctype>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>

using namespace std;
 
 int main() {
     int num;
    vector <int> numbers;
    for(int i=0;i<numbers.size();i++){
        cin>>num;
        numbers.push_back(num);
    }
        sort(numbers.begin(), numbers.end());
    for(int j=1;j<numbers.size();j++)
    {
        
        cout<<numbers.at(j);
    
    
    }
    // Sort numbers 
    // sort(numbers.begin(), numbers.end());

    // Print the sorted array
    // cout << "Numbers in ascending order:" << endl;
    // for (int i = 0; i < size; ++i) {
    //     cout << numbers[i] << " ";
    // }
    // cout << endl;

    return 0;
}

 


