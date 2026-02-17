#include <iostream>
using namespace std;

// find minimum of two numbers
/*float min(float a, float b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }}
    
    int main()
    {
      cout<<"min of the two numbers is"<<min(5,7);
      return 0;
    }*/ 

   

    
    // calculate sum of numbers from 1 to n
   /*int sum(int n){
     int x=0;
        for(int i=1;i<n+1;i++){
       x=x+i;  
       }return x;
    }
 
    int main(){
        int n;
        cin>>n;
        cout<<"the sum of numbers between 1 to" << n <<"is:"<< sum(15);

         return 0;
    }*/




    // to find factorial of a number
    /*int fact(int n){
        if (n==0){
            cout<<"the factorial for the given number can't be printed";
        }
        else if(n==1){
            cout<<"the factorial of the given number is 1";
        }else{
        int x=1;
        for(int i=1;i<=n;i++){
            x*=i;
        }return x;
    }}

    int main(){
    cout<< fact(4)<<endl;
    return 0; 
    }*/






    //sum of digits of a number

    /*int sumdigits(int x){
        int X=0;
        while(x>0){
            int y= x%10;
            
            x=x/10;
            X=y + X;
            }return X;
    }
    int main(){
        cout<<sumdigits(125);
        return 0;
    }*/
    




    //binomial factorial 



 
// dec to binary

/*int main() {
    cout<<"enter a number";
    int n;
    cin>>n;
    int number=0;
    int pow=1;
    while(n>0){
        int rem= n % 2;
        number+= (rem *pow);
       pow = pow * 10; 
        n=n/2;
    
        
       
    }
    cout<<number;

    return 0;
}*/



int main()
{
int num=0;
int pow = 1;
int n,ans;
cin>>n;
     while (n>0){
        int rem= n % 10;
        num+= (rem*pow);
        pow =pow* 2;
        n=n/10;
     }
     cout<< num;
     return 0;
}