class Solution {
public:
    int appendCharacters(string s, string t) {
        int j = 0, n = s.size(), m = t.size();
        for (int i = 0; i < n; i++){
            if (s[i] == t[j]) j++;
        }
        return m - j;
    }
};