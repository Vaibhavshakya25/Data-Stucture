#include<iostream>
using namespace std;
void pattern1(int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main(){
    int input;
    cout<<"Enter your input: "<<endl;
    cin>>input;
    pattern1(input);
}