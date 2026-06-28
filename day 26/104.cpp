#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    char ans;

    cout << "Q1. Capital of India?\n";
    cout << "a) Delhi\nb) Mumbai\nc) Kolkata\nd) Chennai\n";
    cin >> ans;

    if(ans == 'a' || ans == 'A')
        score++;

    cout << "\nQ2. 5 + 7 = ?\n";
    cout << "a) 10\nb) 12\nc) 14\nd) 15\n";
    cin >> ans;

    if(ans == 'b' || ans == 'B')
        score++;

    cout << "\nQ3. C++ was developed as an extension of?\n";
    cout << "a) Java\nb) Python\nc) C\nd) Pascal\n";
    cin >> ans;

    if(ans == 'c' || ans == 'C')
        score++;

    cout << "\nYour Score = " << score << " / 3";

    return 0;
}