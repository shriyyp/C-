#include <iostream>
using namespace std;

void vote(int x) {
    if (x < 18) {
        cout << "not eligible" << endl;
    } else {
        cout << "You are eligible" << endl;
    }
}

int main() {
    vote(20);
    return 0;
}
