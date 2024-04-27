#include<iostream>
using namespace std;
bool check(int n){
    if(n==1) return true;
    else if((n%2)!=0 || n==0) return false;
    return check(n/2);

}
int main(){
    int a;
    cout<<"enetr a";
    cin>>a;
    if(check(a)) cout<<"yes it is of power 2";
    else cout<<"no it is not of power 2";
}