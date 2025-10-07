#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
  int n;
  
cout<<"How many numbers?";
cin>>n;
pa=new int[n];

for(i=0;i<n;i++){
    cout<<"";
    cin>>*pa;
    pa++;
}
pa=pa-n;

cout<<"Original: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;


pa=pa-(n-1);
pb = pa + (n-1); 
for(i=0; i<n/2;i++){
  temp = *pa;
  *pa = *pb;
  *pb = temp;
  pa++; pb--;
}
pa = pa - (n/2);

cout<<"Reversed: ";
for (i=0; i<n-1; i++, pa++){
   cout<<setw(3)<<*pa;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

pa = pa - (n-1);
delete []pa;
return 0;
}
