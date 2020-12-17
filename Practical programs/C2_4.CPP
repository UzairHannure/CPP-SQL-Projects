#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

class serial 

{ 

int Scode; 

char title[30]; 

float duration; 

int noofepisodes; 

 

public: 

void init() 

{ 

duration=30; 

noofepisodes=10; 

} 

void Newserial(); 

void Otherentries(int, char[]); 

void Dispdata(); 

}; 

void serial::Newserial() 

{ 

cout<<"\nNew Serial Details: "; 

cout<<"\nEnter serial code: "; 

cin>>Scode; 

cout<<"\nEnter serial title: "; 

gets(title); 

Otherentries(Scode, title); 

} 

void serial::Otherentries(int , char []) 

{ 

cout<<"\nEnter duration: "; 

cin>>duration; 

cout<<"\nEnter no. of episodes: "; 

cin>>noofepisodes; 

} 

void serial::Dispdata() 

{ 

cout<<"\nSerial Details: "; 

cout<<"\nSerial code: "; 

cout<<Scode; 

cout<<"\nSerial title: "; 

puts(title); 

cout<<"\nDuration: "; 

cout<<duration; 

cout<<"\nNo. of episodes: "; 

cout<<noofepisodes; 

} 

void main() 

{ 

clrscr(); 

serial s1; 

s1.Newserial(); 

s1.Dispdata(); 

getch(); 

} 