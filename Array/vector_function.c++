# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    // size()
    cout << "Vector Size : " << vec.size() << endl;

    // push_back()
    vec.push_back(6);
    cout << "Vector Size After push_back : " << vec.size() << endl;

    // pop_back()
    vec.pop_back();
    cout << "Vector Size After pop_back() : " << vec.size() << endl;

    // front()
    cout << "Vector First Element : " << vec.front() << endl;

    // back()
    cout << "Vector Last Element : " << vec.back() << endl;

    // at()
    cout << "Vector Specific Index Element : " << vec.at(4) << endl;

}