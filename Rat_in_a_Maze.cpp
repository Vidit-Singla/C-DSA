class Solution {
  public:
  
    bool isSafe(int newx, int newy, vector<vector<int>>&m, vector<vector<bool>>&visited, int n){
        if(newx < 0 || newy < 0 || newx >= n || newy >= n){
            return false;
        }
        if(visited[newx][newy] == true){
            return false;
        }
        if(visited[newx][newy] == 0){
            return false;
        }
        return true;
    }
  
    void solve(vector<vector<int>>&m, vector<vector<bool>>&visited, int n, vector<string>&ans, int srcx, int srcy, int destx, int desty, string output){
        if(srcx == destx && srcy == desty){
            ans.push_back(output);
            return;
        }
        
        int newx = srcx -1;
        int newy = srcy;
        if(isSafe(newx,newy)){
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx,desty,output+"U");
            visited[newx][newy] = false;
        }
        
        newx = srcx+1;
        newy = srcy;
        if(isSafe(newx,newy)){
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx,desty,output+"D");
            visited[newx][newy] = false;
        }
        
        newx = srcx;
        newy = srcy-1;
        if(isSafe(newx,newy)){
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx,desty,output+"L");
            visited[newx][newy] = false;
        }
        
        newx = srcx;
        newy = srcy+1;
        if(isSafe(newx,newy)){
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx,desty,output+"R");
            visited[newx][newy] = false;
        }
        
    }  
  
    vector<string> ratInMaze(vector<vector<int>>& m, int n) {
        
        vector<string>ans;
        vector<vector<bool>>visited (n,vector<bool>(n,0));
        visited[0][0] = true;
        int srcx = 0;
        int srcy = 0;
        int destx = n-1;
        int desty = n-1;
        string output = "";
        if(m[0][0] == 0){
            return ans;
        }
        solve(m,visited,n,ans,srcx,srcy,destx,desty,output);
        return ans; 
    }
};