#include <bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[], int s, int e){
    adj[s].push_back(e);
    adj[e].push_back(s);
}

void printedge(vector<int> adj[], int v){
    
    for(int i=0;i<v;i++){
            cout<<"for "<<i<<": ";
        for(auto i: adj[i])
        cout<<i<<" ";
        
            cout<<endl;

    }
}
int main() {
    int v = 5;
    
    vector<int> adj[v];
    
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,3);
    addedge(adj,2,1);
    addedge(adj,3,0);
    addedge(adj,4,3);
    
    printedge(adj,v);

    return 0;
}
