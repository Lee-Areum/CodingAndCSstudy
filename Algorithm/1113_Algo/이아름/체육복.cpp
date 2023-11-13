#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> judge(n+2,1);
    for(int r : reserve){
        judge[r]++;
    }
    sort(lost.begin(),lost.end());
    for(int l : lost){
        judge[l]--;
    }
    int answer = 0;
    for(int i = 1;i<=n;i++){
        if(judge[i]) answer++;
        else if (judge[i-1] > 1){
            judge[i-1]--;
            answer++;
        } else if(judge[i+1]>1){
            judge[i+1]--;
            answer++;
        }
    }
    
    return answer;
}
