#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));

    vector<string> roasts = {
        "{name} writes code so slow that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would have gold medals.",
        "{name}'s debugging style is just staring at the screen until the bug leaves.",
        "{name} doesn't write bugs, they create unexpected features.",
        "{name}'s code works... sometimes... accidentally.",
        "{name} once fixed a bug by deleting the whole project.",
        "{name}'s keyboard fears them more than bugs do.",
        "{name} compiles code just to see errors for fun.",
        "{name}'s logic is like WiFi --> weak and unreliable.",
        "{name} uses Google more than their brain.",
        "{name}'s code has more drama than a daily soap.",
        "{name} writes comments like they'll never read them again.",
        "{name} treats warnings like achievements unlocked.",
        "{name}'s programs crash faster than their motivation.",
        "{name} once debugged code by restarting the laptop.",
        "{name} writes code like it's a guessing game.",
        "{name}'s brain.exe has stopped working.",
        "{name} thinks Stack Overflow is a personality trait.",
        "{name}'s code is held together by hope and prayers.",
        "{name} debugs by adding more bugs."
    };

    while (true) {
        string name;
        cout << "Enter your name (or press X to exit): ";
        getline(cin, name);

        if (name == "X") {
            // Exit roast (generic, since no name now)
            vector<string> exitRoasts = {
                "Leaving already? Even your code stays longer than you do.",
                "Exiting so soon? Guess commitment isn't your strong suit.",
                "Goodbye! Even bugs will miss you… maybe.",
                "You exit faster than your programs crash.",
                "Run away now, your code still won't improve."
            };

            int idx = rand() % exitRoasts.size();
            cout << "Exit Roast: " << exitRoasts[idx] << endl;

            cout << "\nExiting...\n";
            break;
        }

        int index = rand() % roasts.size();
        string roast = roasts[index];

        size_t pos = roast.find("{name}");
        while (pos != string::npos) {
            roast.replace(pos, 6, name);
            pos = roast.find("{name}");
        }

        cout << "Roast: " << roast << endl;
    }

    return 0;
}
