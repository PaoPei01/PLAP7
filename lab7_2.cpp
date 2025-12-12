#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Name, Movie, Day;
    int ID, Find12, Gear;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin, Name);
    cout << "Fahsai: Wow!!! " << Name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << Name << ": ";
    cin >> ID;
    Find12 = ID/10000000;
    Gear = Find12 - 12;
    cout << "Fahsai: I think you may be GEAR " << Gear << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << Name << ": ";
    cin.ignore();
    getline(cin, Movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << Name << ": ";
    getline(cin, Day);
    cout << "Fahsai: " << Day << "....that is OK!!! I'm looking forward to watching " << Movie << " with you.\n";
    cout << Name << ": ";
    cout << "Fahsai: 555+ see you " << Day << ". Bye Bye \\(^ ^)/";  
return 0;
}