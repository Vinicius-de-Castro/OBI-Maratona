class Solution {
public:
    void reverseString(vector<char>& s) {
        char aux;
        int i = 0, j = s.size()-1;
        while (i < j){
            aux = s[i];
            s[i] = s[j];
            s[j] = aux;
            i++;
            j--;
        }
    }
};