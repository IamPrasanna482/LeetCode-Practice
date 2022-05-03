class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // topological sort using BFS(Kahns algo)
        vector<int> adj[numCourses];
        for(auto it:prerequisites){
            // make the adjacenency list
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
        }
        
        queue<int> q;
        vector<int> indegree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        
        for(int i=0;i<numCourses;i++){
        if(indegree[i]==0){
            q.push(i);
        }    
        }
        
        int cnt=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cnt++;
            
            for(auto it:adj[node]){
                indegree[it]--;
                
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(cnt==numCourses) return 1;
        else return 0;
    }
};