#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int N,M; cin>>N>>M;
    int answer = 0;
    unordered_map<string,int> map;
    for(int i = 0;i<N;i++){
        string str; cin>>str;
        map[str]++;
    }
    for(int i = 0;i<M;i++){
        string str; cin>>str;
        if(map[str]) answer++;        
    }
    cout<<answer<<endl;
    return 0;
}
