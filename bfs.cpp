#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<int> bfs(const vector<vector<int>>& adj_list,int start)
{
    int n=adj_list.size();
    vector<int> order;   //array to maintain the traversal
    vector<bool>visited(n,false);  //a boolean array to track the vertices
    queue<int> q;
    q.push(start);
    visited[start]=true ;   //mark the starting vertex as visited
    while(!q.empty())
    {
        int u=q.front();  //the vertex is copied in u
        q.pop();         //popping the element from the queue
        order.push_back(u);  //adding the element to the order array which is used for the traversal purpose
        //add all the unvisited neighbours to the queue
        for(int v:adj_list[u])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v]=true;
            }
        }
    }
  
   return order;
    }

int main()
{
   vector<vector<int>> adj_list={
    {1,2,3},
    {0,2},
    {0,1},
    {0}    
   };   //here we have taken the vertices to the vector
   vector<int>order=bfs(adj_list,0);  //calling the bfs function which is going to return the vector array as output
   cout<<"bfs traversal"<<endl;
   for(int i:order)
   {
    cout<<i<<"->";
   }
   cout<<endl;
   return 0;
}
