                        // bfs
// #include<iostream>
// #include<vector>
// #include <queue>
// using namespace std;

// class sol{
//     public:
//     vector<int> bfs(int v, vector<vector<int>>& adj){
//         vector<int> bfs;
//         vector<bool> vis(v,false);

//         for(int i=0;i<v;i++){
//             if(!vis[i]){
//                 queue<int> q;
//                 q.push(i);
//                 vis[i]=true;

//                 while(!q.empty()){
//                     int node=q.front();
//                     q.pop();
//                     bfs.push_back(node);

//                     for(int bes:adj[node]){
//                         if(!vis[bes]){
//                             q.push(bes);
//                             vis[bes]=true;
//                         }
//                     }
//                 }
//             }
//         }
//         return bfs;
//     }
// };
// int main(){
//     int v=5;
//     vector<vector<int>> adj(v);
//     adj[0].push_back(1);
//     adj[1].push_back(0);

//     adj[0].push_back(2);
//     adj[2].push_back(0);

//     adj[1].push_back(3);
//     adj[3].push_back(1);

//     adj[2].push_back(4);
//     adj[4].push_back(2);
//     sol s;
//     vector<int> bfs= s.bfs(v,adj);
//     cout<<"bfs traversal: ";
//     for(int node:bfs){
//         cout<<node<<" ";
//     }
//     cout<<endl;

//     return 0;

// }

// ====================================================
                            // bfs
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// vector<int> bfsgraph(int v,vector<int> adj []){
//     int vis[v]={0};
//     vis[0]=1;
//     queue<int>q;
//     q.push(0);
//     vector<int> bfs;

//     while(!q.empty()){
//         int node=q.front();
//         q.pop();
//         bfs.push_back(node);

//         for(auto n: adj[node]){
//             if(!vis[n]){
//                 vis[n]=1;
//                 q.push(n);
//             }
//         }
//     }
//     return bfs;

// }

// =======================================================

//                  dfs

// #include<iostream>
// #include<vector>
// using namespace std;

// void dfs(vector<int>& res,int node,vector<vector<int>>& adj, vector<bool>& vis){
//     vis[node]=true;
//     res.push_back(node);
//     for(int neighbour: adj[node]){
//         if(!vis[neighbour]){
//             dfs(res,neighbour,adj,vis);
//         }
//     }
// }
// int main(){
//     int v=5;
//     vector<vector<int>> adj(v);

//     adj[0]={1,2,3};
//     adj[2].push_back(4);
//     adj[4].push_back(2); 
//     adj[1].push_back(0);
//     adj[3].push_back(0);

//     vector<bool> vis(v,false);
//     vector<int> res;

//     dfs(res,0,adj,vis);
//     for(int node:res){
//         cout<<node<<" ";
//     }
//     // cout<<"\n";

//     return 0;
// }

// ====================================================================

//                  rotten oranges

// #include <iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// int rottenorange(vector<vector<int>> & grid){
//     if(grid.empty()) return 0;
//     int m=grid.size(),n=grid[0].size(),total=0,rotten=0,time=0;
//     queue<pair<int,int>> q;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(grid[i][j]!=0) total++;
//             if(grid[i][j]==2) q.push({i,j});
//         }
//     }
//     vector<pair<int,int>> direction= {{0,1},{0,-1},{1,0},{-1,0}};

//     while(!q.empty()){
//         int rottenlvl=q.size();
//         rotten+=rottenlvl;

//         for(int i=0;i<rottenlvl;i++){
//             auto [x,y]= q.front();
//             q.pop();

//             for(auto[dx,dy]:direction){
//                 int nx=x+dx , ny= y+dy;

//                 if(nx >= 0 && ny >= 0 && nx < m && ny < n && grid[nx][ny] == 1){
//                     grid[nx][ny]=2;
//                     q.push({nx,ny});
//                 }
//             }
//         }
//         time++;
//     }
//     return rotten==total? time : -1;
// }
// int main() {
//     vector<vector<int>> grid= {{2,1,1}, {1,1,0}, {0,1,1}};
//     int rottenoranges=rottenorange(grid);
//     cout<<"total time:"<<rottenoranges<<endl;
//     return 0;
// }

// ===========================================
// no of provinces

// #include<iostream>
// #include<vector>
// using namespace std;
// class sol{
//     private:
//     void dfs(int node,vector<int>adjls[],int vis[]){
//         vis[node]=1;
//         for(auto n:adjls[node]){
//             if(!vis[n]){
//                 dfs(n,adjls,vis);        
//             }
//         }
//     }
//     public:
//     int numprovinces(vector<vector<int>> adj, int v){
//         vector<int> adjls[v];
//         for(int i=0;i<v;i++){
//             for(int j=0;j<v;j++){
//                 if(adj[i][j]==1 && i!=j){
//                     adjls[i].push_back(j);
//                     adjls[j].push_back(i);
//                 }
//             }
//         }
//         int vis[v]={0};
//         int count=0;
//         for(int i=0;i<v;i++){
//             if(!vis[i]){
//                 count++;
//                 dfs(i,adjls,vis);
//             }
//         }
//         return count;
//     }
// };
// int main(){
//     vector<vector<int>> adj{
//         {1,0,1},
//         {0,1,0},
//         {1,0,1}
//     };

//     sol s;
//     cout<<s.numprovinces(adj,3)<<endl;
//     return 0;
// }

// =================================================================================
//                      flood fill
// #include<iostream>
// #include<vector>
// using namespace std;

// class sol{
//     private:
// void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int newcolor,int dprow[],int dpcol[],int initcolor){
//     ans[row][col]=newcolor;
//     int m=ans.size(),n=ans[0].size();
//     for(int i=0;i<4;i++){
//         int nrow=row+dprow[i];
//         int ncol= col+dpcol[i];
//         if(nrow>=0 && ncol>=0 && ncol<n && nrow<m && image[nrow][ncol]==initcolor && ans[nrow][ncol]!=newcolor){
//             dfs(nrow,ncol,ans,image,newcolor,dprow,dpcol,initcolor);
//         }
//     }

// }
// public:
// vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
//     int initcolor=image[sr][sc];
//     if(initcolor==color) return image;

//     vector<vector<int>> ans= image;

//     int dprow[]={-1,0,+1,0};
//     int dpcol[]={0,-1,0,+1};
//     dfs(sr,sc,ans,image,color,dprow,dpcol,initcolor);
//     return ans;

// }

// };
// int main(){
//     vector<vector<int>> image = {
//         {1, 1, 1},
//         {1, 1, 0},
//         {1, 0, 1}
//     };
//     int sr = 1, sc = 1, newColor = 2;
//     sol s;
//     vector<vector<int>> result = s.floodFill(image, sr, sc, newColor);

//     cout << "Flood filled image:\n";
//     for (auto& row : result) {
//         for (auto& val : row) {
//             cout << val << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// =========================================================

// distance of nearest cell having 1 in 0/1 matrix

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<vector<int>> nearest(vector<vector<int>> grid){
    int n=grid.size();
    int m=grid[0].size();

    vector<vector<int>> vis(n,vector<int>(m,0));
    vector<vector<int>> dist(n , vector<int>(m,0));
    //coordinates and steps 
    queue<pair<pair<int,int>,int>> q;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                q.push({{i,j},0});
                vis[i][j]=1;
            }
            else vis[i][j]=0;
        }
    }
    int dprow[]={-1,0,+1,0};
    int dpcol[]={0,+1,0,-1};

    while(!q.empty()){
        int row=q.front().first.first;
        int col= q.front().first.second;
        int steps= q.front().second;
        q.pop();
        dist[row][col]=steps;

        for(int i=0;i<4;i++){
            int nrow=row+dprow[i];
            int ncol=col+dpcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0){
                vis[nrow][ncol]=1;
                q.push({{nrow,ncol},steps+1});
            }
        }
    }
    return dist;
}

int main(){
    vector<vector<int>> grid{
        {1,0,0,1},
        {0,0,1,1},
        {1,1,0,0}
    };

    vector<vector<int>> res= nearest(grid);

    for(auto it: res){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<"\n";
    }
    return 0;
}