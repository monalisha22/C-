#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string );

int main(){
string s;
cout << "Enter a string\n";
cin >> s;
lengthOfLongestSubstring (s);
return 0;
}

int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int max_len = 0;
    vector<int> char_map(128, -1); // initialize the vector map with -1 values for all 128 ASCII characters
    int start = 0;
    for (int end = 0; end < n; end++) {
        if (char_map[s[end]] >= start) { // if the current character is already in the map and its index is within the current substring, update the start pointer to the next index of the character
            start = char_map[s[end]] + 1;
        }
        char_map[s[end]] = end; // update the index of the current character in the map
        max_len = max(max_len, end - start + 1); // update the maximum length of the substring
    }
    cout <<"The maximum length of the nonrepeated characters in the string is : "<< max_len <<"\n";
    return 0;
}

/*int lengthOfLongestSubstring(string s) {
        
        int stringlen =s.length(); 
        int counter=0, left=0, right=0;
        vector<int> mpp(256, -1);

       for (right = 0; right < stringlen; right++){
        
       if (mpp[s[right]] >= left) { // if the current character is already in the map and its index is within the current substring, update the start pointer to the next index of the character
        left = mpp[s[right]] + 1;
        }
        mpp[s[right]] = right; // update the index of the current character in the map
        counter = max(counter, right - left + 1); // update the maximum length of the substring
        } 
        return counter;
    }*/
