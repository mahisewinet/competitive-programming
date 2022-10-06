#include <iostream>

using namespace std;

int main()
{
    int M,N;
    cout<<"Enter the dimension"<<endl;
    cin>>M>>N;

    int domino = (M*N)/2;
    cout<<"The maximum domino needed are: "<< domino;
    return 0;
}
