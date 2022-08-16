/*
  Directed grpah using Vectors.
  Level :- Easy 

INPUT

 Enter the vertices size. 4
1 2 
2 3 
3 4
1 4

OUTPUT :- 

0--> 
1--> 2 4
2--> 3
3--> 4 
4--> 



*/

#include <iostream>
#include<vector>

#define vi vector<int> 
#define loop(n) for(int i = 0; i < n; i++)
#define print(arr) loop(arr.size()){cout<<arr[i]<<" "; } 
#define in(arr,n) loop(n){cin>>arr[i];}
#define ll long long int 

using namespace std;


int main() {

    // Start code from here 
    int n;
    cout<<" Enter the vertices size. ";
    cin>>n;
    vector<vector<int>> graph(n+1);
    loop(n){
        int e,v ;
        cin>>v>>e;
        graph[v].push_back(e);
    }

    loop(graph.size()){
        vi tem=graph[i];
        cout<<i<<"--> ";
        for(int j=0; j<tem.size(); j++){
            cout<<tem[j]<<" ";
        }
       cout<<endl;
    }
    
}