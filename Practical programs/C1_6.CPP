 

#include<iostream.h> 

#include<conio.h> 

#include<string.h> 

#include<stdio.h> 

struct country 

{ 

char cntryname[30]; 

char cntrycapt[30]; 

long int captinc; 

}; 

void main() 

{ 

clrscr(); 

country c[3]; 

int i, ctr=0, a; 

char captname[30]; 

cout<<"\nInput Country Details: "; 

for(i=0; i<3; i++) 

{ 

cout<<"\nEnter country name: "; 

gets(c[i].cntryname); 

cout<<"\nEnter country capital: "; 

gets(c[i].cntrycapt); 

cout<<"\nEnter per-capita income: "; 

cin>>c[i].captinc; 

} 

cout<<"\n\t\t\t\tSEARCH RECORDS "; 

cout<<"\n1. Search record by country name"; 

cout<<"\n2. Search record by country's capital"; 

cout<<"\nEnter here: "; 

cin>>a; 

switch(a) 

{ 

case 1: 

{ 

char contname[30]; 

cout<<"\nEnter country name's record to be searched: "; 

gets(contname); 

for(i=0; i<3; i++) 

{ 

if(strcmp(c[i].cntryname, contname)==0) 

{ 

ctr=1; 

cout<<"\nCountry Capital: "; 

puts(c[i].cntrycapt); 

cout<<"\nPer-Capita Income: "; 

cout<<c[i].captinc; 

break; 

} 

} 

if(ctr==0) 

{ 

cout<<"\nRecord Not Found"; 

} 

break; 

} 

case 2: 

{ 

cout<<"\nEnter capital city's record to be searched: "; 

gets(captname); 

for(i=0; i<3; i++) 

{ 

if(strcmp(c[i].cntrycapt, captname)==0) 

{ 

ctr=1; 

cout<<"\nCountry Name: "; 

puts(c[i].cntryname); 

cout<<"\nPer-Capita Income: "; 

cout<<c[i].captinc; 

break; 

} 

} 

if(ctr==0) 

{ 

cout<<"\nRecord Not Found"; 

} 

break; 

} 

default: 

{ 

cout<<"\nInvalid Entry"; 

break; 

} 

} 

getch(); 

} 