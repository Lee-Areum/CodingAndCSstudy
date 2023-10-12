#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> map;
    int back = 0;
    for (int i = 1; i <= 10000; i++) {
        bool flag = true;
        if (map[i]) {
            flag = false;
        }
        for (int k = i; k > back; k--) {
            int sum = k;
            int n = k;
            while (n) {
                sum += n % 10;
                n /= 10;
            }
            map[sum]++;
            if (sum == i) {
                flag = false;
                break;
            }
        }
        if (flag) {
            back = i;
            cout << i << endl;
        }
    }
    return 0;
}
