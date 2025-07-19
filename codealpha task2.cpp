#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int numRecipients;
    double totalAmount;

    cout << "Enter total Ether amount to send: ";
    cin >> totalAmount;

    cout << "Enter number of recipients: ";
    cin >> numRecipients;

    // Input validation
    if (numRecipients <= 0 || totalAmount <= 0) {
        cout << "Invalid input. Amount and recipients must be greater than 0." << endl;
        return 1;
    }

    vector<string> addresses(numRecipients);
    cout << "Enter recipient Ethereum-like addresses:" << endl;

    for (int i = 0; i < numRecipients; ++i) {
        cout << "Address " << i + 1 << ": ";
        cin >> addresses[i];
    }

    // Calculate amount per recipient
    double amountPerRecipient = totalAmount / numRecipients;

    cout << "\nDistributing " << totalAmount << " Ether equally..." << endl;
    cout << "Each address will receive: " << amountPerRecipient << " Ether\n" << endl;

    // Simulate sending
    for (int i = 0; i < numRecipients; ++i) {
        cout << "Sent " << amountPerRecipient << " Ether to " << addresses[i] << endl;
    }

    return 0;
}
