#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_map<int,int> m;
    for(int n : nums){
        if(!m[n]){
            answer++;
        }
        m[n]++;
    }
    return min(answer,(int)(nums.size())/2);
}
