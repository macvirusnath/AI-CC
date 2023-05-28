#include<iostream>
using namespace std;
int isVisited(int arr[],int visited,int j)
{
  for(int i=0;i<=visited;i++)
  {
    if(arr[i]==j) 
    {
      return 0;
    }
  }
  return 1;
}


int main()
{
   int vertex=7;
   int graph[][7]={
    {1,0,3,4,235,2,5},
    {3,5,2,0,23,0,34},
    {23,5,34,23,2,34,5},
    {1,24,5,4,5,2,4},
    {23,5,2,5,26,1,2},
    {87,9,4,5,8,4,8},
    {65,2,3,4,26,6,2}
   };
  for(int i=0;i<vertex;i++)
  {
    for(int j=0;j<vertex;j++)
     {
       cout<<graph[i][j]<<" ";
     }
    cout<<endl;
  }
  int arr[vertex];
  int cost=0,visited=0;
  arr[0]=visited;
  while(vertex!=visited)
  {
    int min=500;
    int minindex=0;
    for(int i=0;i<=visited;i++)
    {
       for(int j=0;j<vertex;j++)
       {
          if(min>graph[arr[i]][j] && graph[arr[i]][j]!=0 && isVisited(arr,visited,j))
            {
               min=graph[arr[i]][j];
               minindex=j;
            }
       }
    }
   visited++;
   arr[visited]=minindex;
   cost=cost+min;
  }
  cout<<"Minimal cost is "<<cost-500;
 }

