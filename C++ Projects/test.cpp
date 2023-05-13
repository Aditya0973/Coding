#include<iostream>
using namespace std;

int main() {

    int arr1[1,2,3,4,5], arr2[0], i;

    cout << "Enter array elements:";
    for (i = 0; i <=5; i++) {
        cin >> arr1[i];
    }

    for (i = 0; i <=5; i++) {
        arr2[i] = arr1[i];
    }
    cout << "Copied Array List is:";
    for (i = 0; i <=5; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}