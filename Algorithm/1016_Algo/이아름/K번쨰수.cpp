#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(vector<int> com : commands){
        vector<int> list(array.begin()+com[0]-1, array.begin()+com[1]);
        sort(list.begin(),list.end());
        answer.push_back(list[com[2]-1]);
    }
    return answer;
}
