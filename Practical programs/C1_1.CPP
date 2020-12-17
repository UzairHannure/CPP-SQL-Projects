#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

struct student 

{ 

int rollno; 

char name[20]; 

int marks[3]; 

int ctr=0; 

int sums; 

} stud[3], temp; 

void main() 

{ 

clrscr(); 

int i, j; 

float sum=0; 

cout<<"\nEnter students' details: "; 

for(i=0; i<3; i++) 

{ 

cout<<"\nStudent name: "; 

cin>>stud[i].name; 

cout<<"\nStudent roll no.: "; 

cin>>stud[i].rollno; 

cout<<"\nStudent marks (out of 100): "; 

for(j=0; j<3; j++) 

{ 

cout<<"\n\tMarks "<<j+1<<": "; 

cin>>stud[i].marks[j]; 

sum+=stud[i].marks[j]; 

} 

stud[i].sums=sum; 

sum=0; 

}

cout<<"\n the failed students in more than one subject are:"; 

for(i=0; i<3; i++) 

{ 

for(j=0; j<3; j++) 

{ 

if(stud[i].marks[j]<40) 

{ 

stud[i].ctr++; 

} 

} 

if(stud[i].ctr>=2) 

{ 

puts(stud[i].name); 

cout<<endl; 

} 

stud[i].ctr=0; 

} 

for(i=0; i<2; i++) 

{ 

for(int k=i+1; k<3; k++) 

{ 

if(stud[i].sums>stud[k].sums) 

{ 

temp=stud[i]; 

stud[i]=stud[k]; 

stud[k]=temp; 

} 

} 

} 

cout<<"\nSORTED ARRAY: "; 

for(i=0; i<3; i++) 

{ 

cout<<"\nName: "; 

cout<<stud[i].name; 

cout<<"\nRoll No.: "; 

cout<<stud[i].rollno; 

cout<<"\nTotal marks: "; 

cout<<stud[i].sums; 

} 

getch(); 

} 