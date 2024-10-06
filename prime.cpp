#include<iostream>
using namespace std;

int main(){
int num;
cin>>num;

if(num > 1){
  for(int i=2;i<=num;i++){
   if(num%i==0){
     cout<<"num is not a prime number"<<endl;
}
  else{
    cout<<"num is prime"<<endl;
}
  }
}
  cout<<"num is not a prime"<<endl;
}
