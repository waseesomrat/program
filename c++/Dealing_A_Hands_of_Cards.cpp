#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));   // seed using current time

    string suits[] = {"c", "d", "h", "s"};   // clubs, diamonds, hearts, spades
    string ranks[] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

    string deck[52];
    int index = 0;

    // Create full deck (52 cards)
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            deck[index++] = ranks[j] + suits[i];
        }
    }
    // Shuffle deck (Fisher-Yates shuffle)
    for(int i = 51; i > 0; i--){
        int j = rand() % (i + 1);
        swap(deck[i], deck[j]);
    }
    int n;
    cout << "Enter number of cards in hand: ";
    cin >> n;
    if(n > 52){
        cout << "Cannot pick more than 52 cards!\n";
        return 0;
    }
    cout << "Your hand: ";
    for(int i = 0; i < n; i++){
        cout << deck[i] << " ";
    }
    return 0;
}
