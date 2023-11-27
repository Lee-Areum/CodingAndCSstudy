#include <iostream>
using namespace std;
int main(){
    long long N; cin>>N;
    long long sum=0;
    long long i=0;
    while(N-sum>i){
        sum+=++i;
       }
    cout<<i<<endl;
    return 0;
    }
