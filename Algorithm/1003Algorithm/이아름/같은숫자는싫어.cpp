#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int before = arr[0];
    answer.push_back(before);
    for(int i = 1;i<arr.size();i++){
        if(arr[i] != before){
            before = arr[i];
            answer.push_back(before);
        }
    }
    return answer;
}
