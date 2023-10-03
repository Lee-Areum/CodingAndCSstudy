#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N, minN;
    cin>>N;
    vector<int> list;
    for(int i =0;i<N;i++){
        int n; cin>>n;
        list.push_back(n);
    }
    sort(list.begin(),list.end());
    int answer = 0;
    for(int i = 0;i<N;i++){
        int sum = list[i] * (N-i);
        answer = max(answer,sum);
    }
    cout<<answer<<endl;
    return 0;
}
