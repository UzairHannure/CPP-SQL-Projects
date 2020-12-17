#include<fstream.h> 

#include<conio.h> 

#include<stdio.h> 

struct emp 

{ 

int empno; 

char ename[30]; 

char edesig[30]; 

long int sal; 

} e; 

void main() 

{ 

clrscr(); 

int i; 

ifstream fin; 

ofstream fout; 

cout<<"\nEMPLOYEE DETAILS"; 

cout<<"\nEnter employee name: "; 

gets(e.ename); 

cout<<"\nEnter employee code: "; 

cin>>e.empno; 

cout<<"\nEnter employee designation: "; 

gets(e.edesig); 

cout<<"\nEnter employee salary: "; 

cin>>e.sal; 

fout.open("emp.dat", ios::out|ios::binary); 

fout.write((char*)&e, sizeof(e)); 

fout.close(); 

fin.open("emp.dat", ios::in|ios::binary); 

if(!fin) 

{ 

cout<<"\nFile not found"; 

} 

fin.read((char*)&e, sizeof(e)); 

cout<<"\nEMPLOYEE DETAILS"; 

cout<<"\nEmployee name: "; 

puts(e.ename); 

cout<<"\nEmployee code: "; 

cout<<e.empno; 

cout<<"\nEmployee designation: "; 

puts(e.edesig); 

cout<<"\nEmployee salary: "; 

cout<<e.sal; 

fin.close(); 

getch(); 

} 