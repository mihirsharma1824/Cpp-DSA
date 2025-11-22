#include <iostream>
using namespace std;
int main()
{

/* square pattern 
int n= 5;
for (int i=1;i<=n;i++){

for(int j=1;j<=n;j++){
    cout<<j;
}
cout<<endl;
}
*/





/* QUESTION 2
int n=5;
for(int i=0;i<n;i++){
char ch= 65;
for(int j=0;j<n;j++){
cout<<ch;
ch+=1;}
cout<<endl;}*/




/* QUESTION 3
int n=3;
int num=1;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<num;
        num++;

    }cout<<endl;
}
*/



/* QUESTION 4
int n=4;
char ch='*';
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<'*';
         }cout<<endl;}
*/



/* QUESTION 5 
int n=4;
int num=1;
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<i+1;
}  cout<<endl;
}*/






/* QUESTION 6 
int n=4;
for(int i=0;i<n;i++){
    int num=1;
    for(int j=0;j<i+1;j++){
   cout<<num;
    num++;
    }cout<<endl;
}*/







/* QUESTON 7
int n=4;
for(int i=0;i<n;i++){
    for(int j=i+1;j>0;j--){
        cout<<j;*/
    
        



    
  /* QUESTION 8
  int n=4;
   int num=1;
   for(int i=0;i<n;i++){
    for(int j=1;j<=i+1;j++){
    cout<<num;
    num++;
   }
cout<<endl;   }
*/




/* QUESTION 9
int n=5;
for(int i=1;i<n+1;i++){
    for(int j=1;j<n-i+1;j++){
        cout<<i;
    }
cout<<endl;}
*/





/* QUESTION 10
int n=5;
for(int i=1;i<n+1;i++){
    for(int j=1;j<i+1;j++){
        cout<<" ";
    }
        for(int j=1;j<=n-i+1;j++){
        cout<<i;
    }
    cout<<endl;*/




 /* QUESTION 11
  int n=4;
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }int num=1; 
    for(int j=0;j<=i;j++){
        cout<<num;
        num++;
    }for(int j=1;j<=i+1;j++){
        cout<<i
    }
cout<<endl;
  }*/




 /* QUESTION 12 (pyramid)
  int n=4;
  for(int i=0;i<n;i++){
    for(int j=0; j<n-i-1;j++){
        cout<< " ";      
} int num=1;
for (int j=0;j<=i;j++){
    cout<<num;
    num ++;
}
  for(int j=i;j>=1;j--){
    cout<<j;
      }
cout<<endl;}
*/




/* hollow diamond 
int n=4; //upper triangle
//space 1
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
cout<<"*";
//space 2
if(i!=0){
for(int j=0;j<i*2-1;j++){
    
    cout<<" ";
}cout<<"*";
}
cout<<endl;
}
//lower traingle 
//space 1
for(int i=0;i<n-1;i++){
for(int j=0;j<i+1;j++){
    cout<<" ";
}cout<<"*";
//space 2
if(i!= n-2){ 
        for(int j=0;j<4-2*i-1;j++){
            cout<<" ";
        }
    cout<<"*";
}
cout<<endl;
}*/


int n=4;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }

    
        for(int j=0;j< 2*(-i)+6;j++){
            cout<<" ";
        }
        for(int j=i;j>=0;j--){
            cout<<"*";}
 cout<<endl;}

 //bottom
 for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }for(int j=0;j<2*i;j++){
        cout<<" ";
    }for(int j=i;j<n;j++){
        cout<<"*";
    }
 cout<<endl;}
return 0;

}