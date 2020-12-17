#include<iostream.h> 

#include<conio.h> 

class fib 

{ 

private: 

int first; 

int second; 

int n; 

 

public: 

fib() 

{ 

first=0; 

second=1; 

n=10; 

} 

fib(int a, int b, int c) 

{ 

first=a; 

second=b; 

n=c; 

} 

void gen_fib(); 

}; 

void fib::gen_fib() 

{ 

int i, k; 

cout<<"\nFibonacci Sequence: "; 

cout<<first<<" "<<second; 

for(k=1; k<n-1; k++) 

{ 

i=first+second; 

first=second; 

second=i; 

cout<<" "<<i; 

} 

} 

void main() 

{ 

clrscr(); 

fib f2, f1; 

int x, y, z; 

cout<<"\Enter first value: "; 

cin>>x; 

cout<<"\nEnter second value: "; 

cin>>y; 

cout<<"\nEnter limit: "; 

cin>>z; 

fib f2(x, y, z); 

f2.gen_fib(); 

cout<<"\n"<<"\nDefault value: "; 

f1.gen_fib(); 

getch(); 

} 