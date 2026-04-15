#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0)); // for randomness

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    // Handle empty input
    while (name.empty()) {
        cout << "Name cannot be empty. Enter again: ";
        getline(cin, name);
    }

    // Roast templates
    vector<string> roasts = {
        "{name}'s code runs so slow, even a snail complained.",
        "If procrastination were a sport, {name} would win gold.",
        "{name} doesn't debug code — bugs debug themselves out of pity.",
        "{name}'s logic is like WiFi — weak and unstable.",
        "Even Google searches for help when {name} writes code.",
        "{name} writes code that even the compiler refuses to understand.",
        "If confusion had a face, it would be {name}.",
        "{name}'s coding speed makes turtles look like rockets.",
        "{name} doesn't fix bugs — they just rename them as features.",
        "Even AI gave up trying to understand {name}'s code."
    };

    // Pick random roast
    int index = rand() % roasts.size();
    string roast = roasts[index];

    // Replace {name} with actual name
    size_t pos = roast.find("{name}");
    while (pos != string::npos) {
        roast.replace(pos, 6, name);
        pos = roast.find("{name}");
    }

    cout << "\n🔥 Roast Generator 🔥\n";
    cout << roast << endl;

    return 0;
}