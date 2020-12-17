#include<iostream.h> 

#include<conio.h> 

#include<math.h> 

#include<stdio.h> 

struct client 

{ 

char cname[30]; 

int code; 

int dos; 

int years; 

float intrate; 

long int princ; 

double total; 

} c[3]; 

void main() 

{ 

clrscr(); 

double comp; 

cout<<"\nClient Details: "; 

for(int i=0; i<3; i++) 

{ 

cout<<"\nEnter client name: "; 

cin>>c[i].cname; 

cout<<"\nEnter client code: "; 

cin>>c[i].code; 

cout<<"\nEnter date of starting: "; 

cin>>c[i].dos; 

cout<<"\nEnter initial amount: "; 

cin>>c[i].princ; 

cout<<"\Enter no. of years: "; 

cin>>c[i].years; 

cout<<"\nEnter interest rate: "; 

cin>>c[i].intrate; 

c[i].total=c[i].princ*pow((1+(c[i].intrate/100)),c[i].years); 

comp=c[i].total-c[i].princ; 

} 

for(i=0; i<3; i++) 

{ 

cout<<"\nEmployee Name: "; 

cout<<c[i].cname; 

cout<<"\nAmount after compounded interest: "; 

cout<<c[i].total; 

cout<<"\nCompound Interest: "; 

cout<<comp; 

} 

getch(); 

} 