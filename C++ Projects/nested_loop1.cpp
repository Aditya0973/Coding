#include <iostream>

using namespace std;

int main() {

    int num, i, n;

    cout << "Find prime numbers upto: ";
    cin >> n;

    for(num = 2; num <= n; num++) {

        for(i = 2; i <= (num / 2); i++) {

            if(num % i == 0) {
                i = num;
                break;
            }
        }
        if(i != num) {
            cout << num << " ";
        }
    }

    return 0;
}