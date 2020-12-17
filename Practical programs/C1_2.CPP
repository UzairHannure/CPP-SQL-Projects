#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

struct employee 

{ 

char name[30]; 

char address[30]; 

long int phno; 

long int sal; 

} e; 

struct perks 

{ 

long int da; 

long int hra; 

long int net; 

} p; 

void main() 

{ 

clrscr(); 

cout<<"\nEMPLOYEE DETAILS"; 

cout<<"\nEnter employee name: "; 

gets(e.name); 

cout<<"\nEnter employee address: "; 

gets(e.address); 

cout<<"\nEnter phone no.: "; 

cin>>e.phno; 

cout<<"\nEnter salary: "; 

cin>>e.sal; 

p.da=0.2*e.sal; 

p.hra=0.25*e.sal; 

p.net=p.da+p.hra+e.sal; 

cout<<"\nDaily Allowance: "; 

cout<<p.da; 

cout<<"\nHouse Rent Allowance: "; 

cout<<p.hra; 

cout<<"\nNet Salary: "; 

cout<<p.net; 

getch(); 

} 