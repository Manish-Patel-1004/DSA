class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        int mini = 2;
        int x = max(a, max(b, c));
        int z = min(a, min(b, c));
        int y = a + b + c - x - z;
        if (x - z == 2)
            return {0, x - z - 2};
        if (x - y <= 2 || y - z <= 2)
            mini = 1;
        return {mini, x - z - 2};
    }
};