class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
         if(N==1) return 1L;
        return (N*N)+squaresInChessBoard(N-1);
    }
};
