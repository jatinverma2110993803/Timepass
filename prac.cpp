#include<iostream>
using namespace std;
bool prime(int n){
    for(int i = 2;i<n;i++){
        if(n% i == 0){
            return false;
        }
    }
    return true;
}
void print_primes(int n){
    for(int i = 0;i<n;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    print_primes(n);
}