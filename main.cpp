#include <string>
#include <iostream>
using namespace std;

int main() {
    int x;
    
    cout<<"How long should your list of top Fortnite Seasons be? ";
    cin>>x;
    cin.ignore();
    cout<<" "<<endl;
    
    string top[x];

    for(int i=0; i<x; i++){
        cout<<"Pick "<<i+1<<": ";
        getline(cin, top[i]);
    }
    
    for(int i=0; i<x; i++){
        cout<<" "<<endl;
        cout<<top[i]<<endl;
    }

    return 0;
}
