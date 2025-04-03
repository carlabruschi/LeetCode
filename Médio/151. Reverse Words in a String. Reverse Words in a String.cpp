/*151. Reverse Words in a String
Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
Note that s may contain leading or trailing spaces or multiple spaces between two words. 
The returned string should only have a single space separating the words. Do not include any extra spaces. */

class Solution {
public:
    bool Espaco(int ascii) {
        return ascii == 32;
    }

    string reverseWords(string s) {
        int i = 0, j = s.size() - 1;
        
        while (i <= j && Espaco(s[i])) i++;
        while (j >= i && Espaco(s[j])) j--;

        string resultado, palavra;
        while (i <= j) {
            if (!Espaco(s[i])) {
                palavra += s[i];
            } else if (!palavra.empty()) {
                resultado = palavra + " " + resultado;
                palavra = "";
            }
            i++;
        }

        if (!palavra.empty()) resultado = palavra + " " + resultado;

        if (!resultado.empty() && resultado.back() == ' ') {
            resultado.pop_back();
        }

        return resultado;
    }
};