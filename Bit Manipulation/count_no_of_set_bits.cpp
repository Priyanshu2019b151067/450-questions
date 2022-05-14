class Solution {
  public:
    int setBits(int N) {
        
        int count = 0;
        while(N!=0)
        {
            int rsbn = N&-N;
            N= N- rsbn;
            count += 1;
        }
        return count;
        
    }
};