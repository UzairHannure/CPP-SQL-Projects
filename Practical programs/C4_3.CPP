#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

class student 

{ 

public: 

char name[30]; 

int rollno; 

}; 

class marks:private student 

{ 

char grade; 

int marks; 

 

public: 

void getdata(); 

void gradecalc(); 

void putdata(); 

}; 

void marks::getdata() 

{ 

cout<<"\n\t\t\t\tSTUDENT DETAILS"; 

cout<<"\nEnter student name: "; 

gets(name); 

cout<<"\nEnter student roll no.: "; 

cin>>rollno; 

cout<<"\nEnter marks: "; 

cin>>marks; 

} 

void marks::gradecalc() 

{ 

if(marks>=91) 

grade='A'; 

else if (marks<=90 && marks>=81) 

grade='B'; 

else if(marks<=80 && marks>=71) 

grade='C'; 

else if(marks<=70 && marks>=61) 

grade='D'; 

else if(marks<=60 && marks>=51) 

grade='E'; 

else 

grade='F'; 

} 

void marks::putdata() 

{ 

cout<<"\nStudent name: "; 

puts(name); 

cout<<"\nStudent roll no.: "; 

cout<<rollno; 

cout<<"\nStudent marks (out of 100): "; 

cout<<marks; 

cout<<"\nStudent grade: "; 

cout<<grade; 

} 

void main() 

{ 

clrscr(); 

marks m1; 

m1.getdata(); 

m1.gradecalc(); 

m1.putdata(); 

getch(); 

} 