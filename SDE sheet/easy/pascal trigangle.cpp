Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

class Solution {
public:
    vector<vector<int>> generate(int n) {

       vector<vector<int>>v(n);
       for(int i=0;i<n;i++){
         v[i].push_back(1);
        for(int j=0;j<i-1;j++){
            v[i].push_back(v[i-1][j]+v[i-1][j+1]);
        }
        if(i>0){
            v[i].push_back(1); 
        }
       } 
       return v;
    }
};

python
class Solution:
    def generate(self, n: int) -> List[List[int]]:
        v=[[] for _ in range(n)]
        for i in range(n):
            v[i].append(1)
            for j in range(i-1):
                v[i].append(v[i-1][j]+v[i-1][j+1])
            if i>0:
                v[i].append(1)
        return v
