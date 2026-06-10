 #include <iostream>
using namespace std;

int main()
{
    int votes[3], total = 0, winner = 0;

    cout << "Enter votes for 3 candidates:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << " Enter votes Candidate " << i + 1 << ": ";
        cin >> votes[i];
        total += votes[i];
    }

    
    for (int i = 1; i < 3; i++)
    {
        if (votes[i] > votes[winner])
            winner = i;
    }

    cout << "Total Votes = " << total << endl;

    cout << "\nVote Percentage:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Candidate " << i + 1 << " = "<< (votes[i] * 100.0 / total) << "%\n";
    }

    cout << "  Winner : Candidate "<< winner + 1 << endl;

    return 0;
}