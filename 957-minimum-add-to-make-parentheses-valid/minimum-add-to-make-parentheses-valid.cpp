class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        int st = 0, end = 0, count = 0;
        for (char& x : s) {
            if (x == '(')
                st++;
            if (x == ')')
                st--;
            if (st < 0) {
                st++;
                count++;
            }
        }
        return st + count;
    }
};