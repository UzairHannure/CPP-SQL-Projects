#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

class student 

{ 

private: 

int admno; 

char sname[20]; 

float eng, maths, science; 

float total; 

void ctotal() 

{ 

total=eng+maths+science; 

} 

public: 

void Takedata(); 

void Showdata(); 

}; 

void student::Takedata() 

{ 

cout<<"\nEnter student details: "; 

cout<<"\Enter name: "; 

gets(sname); 

cout<<"\nEnter admission no.: "; 

cin>>admno; 

cout<<"\nEnter English marks: "; 

cin>>eng; 

cout<<"\nEnter Math marks: "; 

cin>>maths; 

cout<<"\nEnter Science marks: "; 

cin>>science; 

ctotal(); 

} 

void student::Showdata() 

{ 

cout<<"\Name: "; 

puts(sname); 

cout<<"\nAdmission no.: "; 

cout<<admno; 

cout<<"\nEnglish marks: "; 

cout<<eng; 

cout<<"\nMath marks: "; 

cout<<maths; 

cout<<"\nScience marks: "; 

cout<<science; 

cout<<"\nTotal marks: "; 

cout<<total; 

} 

void main() 

{ 

clrscr(); 

student s1; 

s1.Takedata(); 

s1.Showdata(); 

getch(); 

} 