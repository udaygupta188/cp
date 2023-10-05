#include <iostream>
#include <string>

using namespace std;

int main() {
    string dna;
    cin >> dna;

    int max_repetition = 1; // Minimum repetition is 1
    int current_repetition = 1;

    for (int i = 1; i < dna.length(); i++) {
        if (dna[i] == dna[i - 1]) {
            current_repetition++;
            if (current_repetition > max_repetition) {
                max_repetition = current_repetition;
            }
        } else {
            current_repetition = 1; // Reset repetition count
        }
    }

    cout << max_repetition << endl;

    return 0;
}
