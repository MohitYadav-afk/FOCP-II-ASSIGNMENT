#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));

    vector<string> excuses = {
        "{name} couldn't do the homework because their dog ate the notebook.",
        "{name} was about to finish the assignment but the power went out.",
        "{name}'s laptop crashed right before submission.",
        "{name} had a sudden family function and couldn't complete it.",
        "{name} spent hours debugging but nothing worked.",
        "{name} thought the deadline was tomorrow.",
        "{name}'s internet stopped working at the worst time.",
        "{name} got sick and couldn't focus on studies.",
        "{name} accidentally deleted the entire assignment.",
        "{name} was helping a friend and forgot their own work.",
        "{name}'s pen stopped working mid-homework.",
        "{name} had too many assignments and got confused.",
        "{name} was revising but didn't get time to write it down.",
        "{name} misunderstood the question completely.",
        "{name}'s alarm didn't ring and they overslept.",
        "{name} lost the notebook somewhere.",
        "{name} was waiting for inspiration that never came.",
        "{name} started the work but got stuck halfway.",
        "{name} thought quality mattered more than submission speed.",
        "{name} was mentally preparing but forgot to actually do it."
    };

    while (true) {
        string name;
        cout << "\nEnter your name (or press X to exit): ";
        getline(cin, name);

        if (name == "X") {
            vector<string> exitMsgs = {
                "Running away from homework again? Classic move.",
                "Exiting already? The assignment still isn't done though.",
                "Goodbye! Your homework is still waiting.",
                "You escape the program, but not your responsibilities.",
                "Even quitting won't complete your assignment."
            };

            int idx = rand() % exitMsgs.size();
            cout << "Exit Message:" << exitMsgs[idx] << endl;
            break;
        }

        int index = rand() % excuses.size();
        string excuse = excuses[index];

        // Replace {name} with actual name
        size_t pos = excuse.find("{name}");
        while (pos != string::npos) {
            excuse.replace(pos, 6, name);
            pos = excuse.find("{name}");
        }

        cout << "Excuse: " << excuse << endl;
    }

    return 0;
}
