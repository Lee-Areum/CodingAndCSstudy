#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int> m;
    for(string c : completion){
        m[c]++;
    }
    for(int i = 0;i<participant.size();i++){
        if(m[participant[i]] == 0){
            return participant[i];
        }else{
            m[participant[i]]--;
        }
    }
    return answer;
}
