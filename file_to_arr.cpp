#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("data.txt");
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int count = 3;
    for (int i = 0; i < count; i++)
    {
        in >> arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        cout << arr[i];
        // in >> arr[i];
    }
}