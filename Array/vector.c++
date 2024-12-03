# include <iostream>
# include <vector>
using namespace std;

int main(){
    //vector<int> vec={1,2,3};
    vector<int> vec(3,0);

    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;


    // -------------------------------------------------------------
    vector<int> vec1={1,2,3,4,5};
    cout << "Print Vector Elements : " << endl;
    for(int val: vec1){   // for each loop
        cout << val << " ";
    }
    cout << endl;
    // -------------------------------------------------------------
    vector<char> character={'a','b','c'};
    for(char val: character){  // for each loop
        cout << val << " "; 
    }


    
    return 0;
}