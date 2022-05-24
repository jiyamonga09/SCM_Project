#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in array" << endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter " << i+1 << "th element of the array" << endl;
        cin >> arr[i];
    }

    int x;
    cout << "Enter number to be searched in the array" << endl;
    cin >> x;
    bool flag = true;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout << "number " << x << " is present at " << i << "th index" << endl;
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "number " << x << " is not present in the array" << endl;
    }
    return 0;
}
