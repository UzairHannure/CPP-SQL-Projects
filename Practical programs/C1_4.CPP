#include<iostream.h> 

#include<conio.h> 

void display10(int [5][5]); 

void main() 

{ 

clrscr(); 

int i, j; 

int arr[5][5]; 

for(i=0; i<5; i++) 

{ 

for(j=0; j<5; j++) 

{ 

cout<<"Enter element "<<i+1<<","<<j+1<<": "; 

cin>>arr[i][j]; 

} 

cout<<"\n"; 

} 

display10(arr); 

getche(); 

} 

void display10(int M[5][5]) 

{ 

int x, y; 

for(x=0; x<5; x++) 

{ 

for(y=0; y<5; y++) 

{ 

if(M[x][y]%10==0) 

{ 

cout<<M[x][y]; 

} 

} 

} 

} 

 