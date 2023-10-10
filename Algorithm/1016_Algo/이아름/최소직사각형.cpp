#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w=1,h=1;
    for(vector<int> size : sizes){
        w = max(w,min(size[0],size[1]));
        h = max(h,max(size[0],size[1]));
    }
    return w*h;
}
