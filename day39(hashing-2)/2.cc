// valid anagram
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;
    unordered_map<char,int> freq; //<char,freq>
    for(int i=0;i<s.length();i++){
        if(freq.count(s[i])){
            freq[s[i]]++;
        } else {
            freq[s[i]]=1;
        }
    }
    //2nd to look for t's chars in freq map
    for(int i=0;i<t.length();i++){
        if(freq.count(t[i])){
            freq[t[i]]--;
            if(freq[t[i]]==0){
                freq.erase(t[i]);
            }
        }else{
            return false;
        }
    }
    return freq.size()==0;
}

int main()
{
    string s="race";
    string t="care";
    
    return 0;
}
