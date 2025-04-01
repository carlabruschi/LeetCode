#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isDivisor(string &s, string &t) {
        int n = s.size(), m = t.size();
        if (n % m != 0) return false;
        
        string repeated = "";
        for (int i = 0; i < n / m; i++) {
            repeated += t;
        }
        return repeated == s;
    }

    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) return "";
        
        int gcdLength = __gcd(str1.size(), str2.size()); 
        string candidate = str1.substr(0, gcdLength);
        
        if (isDivisor(str1, candidate) && isDivisor(str2, candidate)) {
            return candidate;
        }
        return "";
    }
};