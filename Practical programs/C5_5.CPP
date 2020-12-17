#include<fstream.h> 

#include<conio.h> 

#include<stdio.h> 

#include<string.h> 

class student 

{ 

int rollno; 

char name[30]; 

int marks[3]; 

float avg; 

char grade[5]; 

public: 

void getdata(); 

void gradecalc(); 

void putdata(); 

int getrno() 

{ 

return rollno; 

} 

}; 

void student::getdata() 

{ 

int i; 

float sum=0; 

cout<<"\nEnter student details: "; 

cout<<"\nEnter name: "; 

gets(name); 

cout<<"\nEnter roll no: "; 

cin>>rollno; 

cout<<"\Enter student's marks; "; 

for(i=0; i<3; i++) 

{ 

cout<<"\nMarks "<<i+1<<" "; 

cin>>marks[i]; 

sum+=marks[i]; 

} 

avg=sum/3; 

} 

void student::gradecalc() 

{ 

if(avg>=90) 

strcpy(grade, "A1"); 

else if(avg>=80 && avg<=89) 

strcpy(grade, "A2"); 

else if(avg>=70 && avg<=79) 

strcpy(grade, "B1"); 

else if(avg>=60 && avg<=69) 

strcpy(grade, "B2"); 

else if(avg>=50 && avg<=59) 

strcpy(grade, "C1"); 

else if(avg>=40 && avg<=49) 

strcpy(grade, "C2"); 

else 

strcpy(grade, "FAIL"); 

} 

void student::putdata() 

{ 

cout<<"\nStudent details: "; 

cout<<"\nName: "; 

puts(name); 

cout<<"\nRoll no.: "; 

cout<<rollno; 

cout<<"\nStudent's average: "; 

cout<<avg; 

cout<<"\nGrade: "; 

gradecalc(); 

puts(grade); 

} 

void main() 

{ 

clrscr(); 

student s, stu; 

int i, rno; 

char found='y'; 

fstream fout("stud.dat", ios::binary|ios::out); 

s.getdata(); 

fout.write((char*)&s, sizeof(s)); 

fout.close(); 

fout.open("stud.dat", ios::app|ios::binary); 

cout<<"\nAppending Record: "; 

while(found=='y'||found==’Y’) 

{ 

stu.getdata(); 

fout.write((char*)&stu, sizeof(stu)); 

cout<<"\nDo you want to enter more records?"; 

cin>>found; 

} 

fout.close(); 

fout.open("stud.dat", ios::in|ios::binary); 

while(fout.read((char*)&s, sizeof(s))) 

{ 

s.putdata(); 

} 

fout.close(); 

getch(); 

} 