#include<iostream.h> 

#include<conio.h> 

#include<math.h> 

class power 

{ 

int a; 

int b; 

 

public: 

power() 

{ 

a=5; 

b=2; 

} 

power(int x, int y) 

{ 

a=x; 

b=y; 

} 

void disp(); 

}; 

void power::disp() 

{ 

int powe; 

powe=pow(a,b); 

cout<<"\nThe value is: "; 

cout<<powe; 

} 

void main() 

{ 

clrscr(); 

power p2; 

int i, j; 

cout<<"\nEnter base no.: "; 

cin>>i; 

cout<<"\nEnter power number: "; 

cin>>j; 

power p1(i,j); 

p1.disp(); 

cout<<"\nDefault value: "; 

p2.disp(); 

getch(); 

} 