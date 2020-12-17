#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

class student 

{ 

char name[30]; 

int rollno; 

int marks[5]; 

 

public: 

void accept(); 

void streamselec(float); 

}; 

void student::accept() 

{ 

int sum=0; 

float avg=0, percent=0; 

cout<<"\nEnter student details: "; 

cout<<"\nEnter student name: "; 

gets(name); 

cout<<"\nEnter student roll no.: "; 

cin>>rollno; 

cout<<"\nEnter marks (out of 100): "; 

for(int i=0; i<5; i++) 

{ 

cout<<"\nMarks "<<i+1<<" "; 

cin>>marks[i]; 

sum+=marks[i]; 

} 

avg=sum/5; 

percent=avg/5; 

streamselec(percent); 

} 

void student::streamselec(float x) 

{ 

cout<<"\nEligible Stream: "; 

if(x>=96) 

cout<<"Computer Science"; 

else if(x>=91 && x<=95) 

cout<<"Electronics"; 

else if(x>=86 && x<=90) 

cout<<"Mechanical"; 

else if(x>=81 && x<=85) 

cout<<"Electrical"; 

else if(x>=76 && x<=85) 

cout<<"Chemical"; 

else if(x>=71 && x<=75) 

cout<<"Civil"; 

else 

cout<<"\nNot Eligible"; 

} 

void main() 

{ 

clrscr(); 

student s1; 

s1.accept(); 

getch(); 

} 