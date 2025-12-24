#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the value of m and n"<<endl;
    cin>>m>>n;
    cout<<"the prime numbers between "<<m<<" and "<<n<<" are "<<endl;
    for(int i=m;i<=n;i++){
        if (i==2){
            cout<<i<<endl;
            continue;
        }
        
       for(int j=2;j<=i;j++){
        
           if(i%j==0){
               
               break;}
            else {
               cout<<i<<endl;
                
               break;
           }
        
       }

       
    }
}