class Solution {
public:
    int smallestRepunitDivByK(int K) {
        for (int i = 0, N = 1; N <= K; ++N)
            if ((i = (i * 10 + 1) % K) == 0)
                return N;
        return -1;
    }
};