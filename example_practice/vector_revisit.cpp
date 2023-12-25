#include <iostream>
#include <vector>
using namespace std;

void justPrint(vector<int> grr)
{
    for (int i = 0; i < grr.size(); i++)
    {
        cout << " " << grr[i];
    }
    cout << endl;
    cout <<" capacity = "<< grr.capacity()<<endl;
}

int main()
{
    vector<int>brr(10,-8);
    justPrint(brr);
    cout<<"  brr.empty() is empty(1) or not(0) = "<<brr.empty()<<endl;

    // vector<int>crr{4,23,63,35,47};
    // justPrint(crr);


    /*
    vector<int> arr;
    // insert
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);

    justPrint(arr);

    // remove or delete
    arr.pop_back();

    // print
    justPrint(arr);
    */

    


    // cout<< "arr.size() " <<arr.size()<<endl;
    // cout<< "arr.capacity() " <<arr.capacity()<<endl;

    // int ans = sizeof(arr)/sizeof(int);
    // cout<< "sizeof(arr)/sizeof(int) " <<ans<<endl;

    return 0;
}