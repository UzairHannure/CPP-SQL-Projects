#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

class Employee 

{ 

public: 

int empno[10]; 

char ename[30]; 

char eaddress[30]; 

char edept[30]; 

}e[3]; 

class Manager:private Employee 

{ 

int mngemp; 

int flag; 

 

public: 

void getdata(); 

void putdata(); 

}; 

void Manager::getdata() 

{ 

cout<<"\n\t\t\t\tEMPLOYEE DETAILS"; 

for(int i=0; i<3; i++) 

{ 

cout<<"\nEnter employee name: "; 

gets(e[i].ename); 

cout<<"\nEnter employee no.: "; 

cin>>empno[i]; 

cout<<"\nEnter employee address: "; 

gets(e[i].eaddress); 

cout<<"\nEnter employee department: "; 

gets(e[i].edept); 

} 

} 

void Manager::putdata() 

{ 

cout<<"\nEmployee working under manager: "; 

for(int i=0; i<3; i++) 

{ 

cout<<"\nEmployee name: "; 

puts(e[i].ename); 

cout<<"\nEmployee no.: "; 

cout<<empno[i]; 

cout<<"\nEmployee address: "; 

puts(e[i].eaddress); 

cout<<"\nEmployee department: "; 

puts(e[i].edept); 

} 

} 

void main() 

{ 

clrscr(); 

Manager m1; 

m1.getdata(); 

m1.putdata(); 

getch();

}