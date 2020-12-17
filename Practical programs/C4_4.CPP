#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

class Person 

{ 

public: 

char name[30]; 

int age; 

}; 

class Student:public Person 

{ 

public: 

char subject[30]; 

int rollno; 

int marks[3]; 

int sum; 

float avg; 

}; 

class Graduate:public Student 

{ 

int noofstud; 

int noofemp; 

 

public: 

void getdata(); 

void putdata(); 

}; 

void Graduate::getdata() 

{ 

sum=0; 

cout<<"\nSTUDENT DETAILS"; 

cout<<"\nEnter student name: "; 

gets(name); 

cout<<"\nEnter student age: "; 

cin>>age; 

cout<<"\nEnter subject: "; 

gets(subject); 

for(int i=0; i<3; i++) 

{ 

cout<<"\nEnter subject marks: "; 

cin>>marks[i]; 

sum+=marks[i]; 

} 

avg=0; 

avg=sum/3; 

cout<<"\nEnter no. of working graduates: "; 

cin>>noofemp; 

cout<<"\nEnter no. of non-working graduates: "; 

cin>>noofstud; 

} 

void Graduate::putdata() 

{ 

cout<<"\nNo.of working graduates: "; 

cout<<noofemp; 

cout<<"\nNo. of non-working graduates: "; 

cout<<noofstud; 

cout<<"\nName of student: "; 

puts(name); 

cout<<"\nAge of student: "; 

cout<<age; 

cout<<"\nSubject of student: "; 

puts(subject); 

cout<<"\Average marks of student: "; 

cout<<avg; 

} 

void main() 

{ 

clrscr(); 

Graduate g1; 

g1.getdata(); 

g1.putdata(); 

getch(); 

} 