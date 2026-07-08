class Solution {
public:
    string reverseVowels(string s) {
         auto isVowel = [](char c) {
            c = tolower(c);
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        
        // Step 1: collect all vowels
        vector<char> vowels;
        for (char c : s) {
            if (isVowel(c)) vowels.push_back(c);
        }
        
        // Step 2: walk through string, replace vowels with collected ones in reverse order
        int idx = vowels.size() - 1;
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                s[i] = vowels[idx];
                idx--;
            }
        }
        return s;
    
    }
};