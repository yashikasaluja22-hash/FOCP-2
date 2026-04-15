#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0)); // ensures different output each run

    string name;

    cout << "Enter student name: ";
    getline(cin, name);

    // Handle empty input
    while (name.empty()) {
        cout << "Name cannot be empty. Enter again: ";
        getline(cin, name);
    }

    // Excuse templates
    vector<string> excuses = {
        "{name} couldn't complete the assignment because the laptop battery died.",
        "{name} was about to finish, but the Wi-Fi suddenly stopped working.",
        "{name}'s file mysteriously disappeared before submission.",
        "{name} tried completing the homework, but the system crashed.",
        "{name} was working hard when the power went out unexpectedly.",
        "{name}'s keyboard stopped working right before finishing.",
        "{name} accidentally deleted the assignment file.",
        "{name} couldn't submit because the internet was extremely slow.",
        "{name} was ready to submit but forgot to save the file.",
        "{name} got stuck debugging one small issue for hours."
    };

    // Pick random excuse
    int index = rand() % excuses.size();
    string excuse = excuses[index];

    // Replace {name} with actual name
    size_t pos = excuse.find("{name}");
    while (pos != string::npos) {
        excuse.replace(pos, 6, name);
        pos = excuse.find("{name}");
    }

    cout << "\n📚 Excuse Generator 📚\n";
    cout << excuse << endl;

    return 0;
}