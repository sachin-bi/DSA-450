// Question:
// every element occur twice except one,,,find that one ele
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
    cout << " capacity = " << grr.capacity() << endl;
}
void findUnique(vector<int> grr)
{
    int x = 0;
    for (int i = 0; i < grr.size(); i++)
    {
        x = grr[i] ^ x;
    }
    cout << " Unique ele. is " << x << endl;
}

int main()
{
    cout << " Enter the size of vector..";
    int n;
    cin >> n;

    vector<int> arr(n);
    int ip;
    for (int i = 0; i < n; i++)
    {
        cin >> ip;
        arr.push_back(ip);
    }

    findUnique(arr);

    return 0;
}