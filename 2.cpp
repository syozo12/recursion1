// ways of climbing n Stairs can take only 1 or 2 steps 
#include<iostream>
using namespace std;
int ways(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return ways(n-1)+ways(n-2);

}
int main(){
   int a;
    cout<<"enter number of stairs a";
    cin>>a;
    cout<<ways(a); 
}