//kshitij yadav 23070123075
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements you want to store: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Array elements are: ";
    for (int j = 0; j < n; j++) {
        cout << array[j] << " ";
    }
    return 0;
}
/*
Enter the number of elements you want to store: 3
Enter the elements of the array: 23
45
65
Array elements are: 23 45 65 

=== Code Execution Successful ===
*/
	
	
