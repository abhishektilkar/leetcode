class Solution {
public:
    int kInversePairs(int n, int q) {
        int v[2][1001] = { 1 };
        for (int N = 1; N <= n; ++N)
            for (int Q = 0; Q <= q; ++Q) {
                v[N % 2][Q] = (v[(N - 1) % 2][Q] + (Q > 0 ? v[N % 2][Q - 1] : 0)) % 1000000007;
                if (Q >= N)
                    v[N % 2][Q] = (1000000007 + v[N % 2][Q] - v[(N - 1) % 2][Q - N]) % 1000000007;
            }
        return v[n%2][q];
        
    
    }
};