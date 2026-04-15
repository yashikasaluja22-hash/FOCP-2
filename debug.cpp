#include <iostream>
using namespace std;
int main() {
int n; //added a semicolon here
cout<<"Enter number of terms: ";// added another semicolon
cin>>n;// added >> sign by removing <<
if(n <= 0)// removed semicolon from here
{
cout<<"Invalid Input"; //added semicolon here
}
int a = 0, b = 1, c;
cout<<a<<" "<<b<<" ";
for(int i = 2; i < n; i++){ //added i++ here by removing i-- & removed '=' here
c = a + b;// added semicolon here
cout<<c<<" ";
int temp;// added variable temp
temp = a;
a = b;
b = c; 
}
return 0;// semicolon here
}