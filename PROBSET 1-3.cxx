#include <iostream>
using namespace std;

int main() {
    string A,C;
    cout <<"enter name:";
    cin >>A;
    
    cout <<"enter pass: ";
    cin >> C;
    if (A == "HAZEL" && C == "DEJUAN"){
        float F,L,M,N;
        
        cout <<"enter number:";
        cin >>F;
        
        cout <<"enter number:";
        cin >>L;
        
        cout <<"enter number:";
        cin >>M;
        
        cout <<"enter number:";
        cin >>N;
        
        cout <<F*L/M+N;
}
    
    return 0;
}