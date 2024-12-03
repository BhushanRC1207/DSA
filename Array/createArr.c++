# include <iostream>
using namespace std;

int main(){
    // create array
    int marks[5] = {1,2,3,4,5};
    double price[] = {99.99,99.89,99.80};
    
    // print array elements
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // change array element
    marks[0] = -1;
    cout << endl << marks[0] << endl;

    // print array using loop
    int sz = sizeof(marks)/sizeof(int);

    for(int i=0; i<sz; i++){
        cout << marks[i] << " ";
    }

    return 0;
}