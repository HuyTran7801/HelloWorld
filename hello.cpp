#include <iostream>
#include <vector>
using namespace std;


int main() {
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> a(5);
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }
    for (int i = 4; i >= 0; --i) {
        cout << a[i] << " ";
    }
    int sum = 0;
    for (int i = 0; i < 10; i++) sum += i;
    cout << "\nSum: " << sum << endl;
    return 0;
}
