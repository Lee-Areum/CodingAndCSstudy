#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int T; cin>>T;
    for(int t=0;t<T;t++){
        int N,M; cin>>N>>M;
        vector<vector<int>> list(N,vector<int>(N,0));
        for(int i = 0;i<M;i++){
            int a,b; cin>>a>>b;
        }
        cout<<N-1<<endl;
    }
    return 0;
}
