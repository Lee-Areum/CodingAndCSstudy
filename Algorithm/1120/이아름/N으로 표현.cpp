#include <string>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int solution(int N, int number) {
    vector<int> list[10];
    unordered_map<int,int> map;
    int n = N;
    for(int i = 0;i<=8;i++){
        list[i+1].push_back(n);
        map[n]++;
        n = n*10 + N;        
    }
    for(int i = 2;i<=8;i++){ //횟수
        for(int k = 1;k<=i;k++){ //k + a
            for(int j = 0;j<list[k].size();j++){
                if(list[k][j] == number) return k;
                for(int t = 0;t<list[i-k].size();t++){
                    if(map[list[i-k][t]+list[k][j]]<1){
                        list[i].push_back(list[i-k][t]+list[k][j]);
                        map[list[i-k][t]+list[k][j]]++;
                    }
                    if(map[list[i-k][t]-list[k][j]]<1){
                        list[i].push_back(list[i-k][t]-list[k][j]);
                        map[list[i-k][t]-list[k][j]]++;
                    }
                    if(map[list[i-k][t]*list[k][j]]<1){
                        list[i].push_back(list[i-k][t]*list[k][j]);
                        map[list[i-k][t]*list[k][j]]++;
                    }
                    if(list[k][j] > 0 && map[list[i-k][t]/list[k][j]]<1){
                        list[i].push_back(list[i-k][t]/list[k][j]);
                        map[list[i-k][t]/list[k][j]]++;
                    }
                }
            }
        }
    }
    return -1;
}
