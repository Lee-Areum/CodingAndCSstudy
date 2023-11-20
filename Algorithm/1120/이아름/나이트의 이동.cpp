#include <iostream>
#include <queue>
using namespace std;
int X[] = { -1, 1, 2, 2, 1, -1, -2, -2 };
int Y[] = { 2, 2, 1, -1, -2, -2, -1, 1 };

int main() {
    int T; cin >> T;
    for (int t = 1; t <= T; t++) {
        queue<vector<int>> q;
        int L; cin >> L;
        int stX, stY; cin >> stX >> stY;
        int edX, edY; cin >> edX >> edY;
        bool visit[301][301] = { false };
        q.push(vector<int>{ stX, stY, 0 });
        while (true) {
            int x = q.front()[0];
            int y = q.front()[1];
            int cost = q.front()[2];
            q.pop();
            visit[x][y] = true;
            if (x == edX && y == edY) {
                cout << cost << endl;
                break;
            }
            for (int i = 0; i < 8; i++) {
                int xx = x + X[i];
                int yy = y + Y[i];
                if (!visit[xx][yy] && 0 <= xx && xx < L && 0 <= yy && yy < L) {
                    visit[xx][yy] = true;
                    q.push(vector<int> { xx, yy, cost + 1 });
                }
            }
        }
    }
    return 0;
}
