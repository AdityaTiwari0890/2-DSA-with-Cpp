class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &nums) {
        int n = nums.size();
        int m = nums[0].size();
        int check_row = 1;
        int check_col = 1;
        
        for(int i =0;i<m;i++){
            if(nums[0][i] == 0){check_col = 0;break;}
        }
        for(int i =0;i<n;i++){
            if(nums[i][0] == 0){check_row = 0;break;}
        }
        
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == 0){
                    nums[i][0] = 0;
                    nums[0][j] = 0;
                }
            }
        }
        
        for(int i =1;i<m;i++){
            if(nums[0][i]==0){
                for(int j = 1;j<n;j++){
                    nums[j][i] = 0;
                }
            }
        }
        for(int i =1;i<n;i++){
            if(nums[i][0] == 0){
                for(int j = 1;j<m;j++){
                    nums[i][j] = 0;
                }
            }
        }
        
        if(check_row == 0){
            for(int i =0;i<n;i++){
                nums[i][0] = 0;
            }
        }
        if(check_col == 0){
            for(int i =0;i<m;i++){
                nums[0][i] = 0;
            }
        }
        
    }
};