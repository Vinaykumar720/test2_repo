#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int first = 1;
    int second = 2;
    cout << first << " " << second << " ";
    for(int i = 0;i<n-2;i++){
        int next = first + second; 
        first = second;
        second = next;
        cout<<next<<" ";
    }
    cout<<"";
    cout<<"";
    return 0;
    
}
