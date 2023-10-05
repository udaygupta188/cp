#include <iostream>
using namespace std;

int main() {
    unsigned long long n;
    cin >> n;

    int expected_sum = (n * (n + 1)) / 2; // Sum of all numbers from 1 to n
    int actual_sum = 0;

    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;
        actual_sum += num;
    }

    int missing_number = expected_sum - actual_sum;
    cout << missing_number << endl;

    return 0;
}
