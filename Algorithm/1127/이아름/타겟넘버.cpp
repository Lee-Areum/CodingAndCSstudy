#include <string>
#include <vector>

using namespace std;

int dfs(int i, int sum, vector<int> numbers, int target){
    if(i == numbers.size()){
        if(sum == target) return 1;
        else return 0;
    }
    int answer = dfs(i+1,sum+numbers[i],numbers,target);
    answer += dfs(i+1, sum -numbers[i],numbers,target);
    return answer;
}

int solution(vector<int> numbers, int target) {
    int answer = dfs(0,0,numbers,target);
    return answer;
}
