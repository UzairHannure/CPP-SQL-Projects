#include<iostream.h> 

#include<conio.h> 

class box 

{ 

int l; 

int b; 

int h; 

double volm; 

 

public: 

box(int x, int y, int z) 

{ 

l=x; 

b=y; 

h=z; 

} 

void vol() 

{ 

volm=l*b*h; 

cout<<"\nThe volume of box is: "; 

cout<<volm; 

} 

}; 

void main() 

{ 

clrscr(); 

int i; 

int l1, b2, h1; 

cout<<"\nEnter length: "; 

cin>>l1; 

cout<<"\nEnter breadth: "; 

cin>>b2; 

cout<<"\nEnter height: "; 

cin>>h1; 

box b1(l1, b2, h1); 

b1.vol(); 

getch(); 

} 