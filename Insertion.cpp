#include <bits/stdc++.h>
using namespace std;
int main() {
    int maxSize ;
    cin>> maxSize;
    int firstArray[maxSize];
    int size = 0;


   for(int i=0; i<maxSize; i++)
   {
       cin>> firstArray[i];
   }

    cout << "Initial content of the first array: ";
    for (int i = 0; i < maxSize; i++) {
       cout << firstArray[i] << " ";
    }
    cout << endl;

    int num;
    cout << "Enter a number to insert: ";
    cin >> num;

    if (size < maxSize) {

        for (int i = maxSize; i > 0; i--) {
            firstArray[i] = firstArray[i - 1];
        }

        firstArray[0] = num;

        size++;
    }
    cout<< endl;

    for (int i = 0; i < maxSize; i++) {
        cout << firstArray[i] << " ";
    }
    cout << endl;

    return 0;
}
