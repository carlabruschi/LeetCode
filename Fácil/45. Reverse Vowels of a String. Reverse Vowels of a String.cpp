/*45. Reverse Vowels of a String

Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once. */

class Solution {
public:
    bool Vogal(int ascii) {
        return ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 || 
               ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117;
    }

    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            while (i < j && !Vogal(int(s[i]))) i++;
            while (i < j && !Vogal(int(s[j]))) j--;

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};
