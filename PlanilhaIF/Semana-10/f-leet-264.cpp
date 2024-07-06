class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);
        ugly[0]=1;
        int a = 0, b = 0, c = 0;
        for (int i = 1; i < n; i++){
            ugly[i] = min(ugly[a]*2, min(ugly[b]*3, ugly[c]*5));
            if (ugly[i] == 2*ugly[a]) a++;
            if (ugly[i] == 3*ugly[b]) b++;
            if (ugly[i] == 5*ugly[c]) c++;
        }
        return ugly[n-1];
    }
};