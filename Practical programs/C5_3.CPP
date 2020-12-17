#include<fstream.h> 

#include<stdio.h> 

#include<conio.h> 

class student 

{ 

char name[30]; 

int rollno; 

float marks; 

public: 

void getdata() 

{ 

cout<<"\nEnter name: "; 

gets(name); 

cout<<"\nEnter roll no.: "; 

cin>>rollno; 

cout<<"\nEnter marks (out of 100): "; 

cin>>marks; 

} 

void putdata() 

{ 

cout<<"\nName: "; 

puts(name); 

cout<<"\nRoll no.: "; 

cout<<rollno; 

cout<<"\nMarks (out of 100): "; 

cout<<marks; 

 } 

 int getrno() 

 { 

return rollno; 

 } 

}; 

void main() 

{ 

clrscr(); 

student s; 

student stu; 

int i, rno; 

char entry='y'; 

fstream fin("stud.dat", ios::binary|ios::out); 

ofstream fout("temp.dat", ios::app|ios::binary); 

while(entry=='y'||entry=='Y') 

{ 

cout<<"\nStudent Details: "; 

s.getdata(); 

fin.write((char*)&s, sizeof(s)); 

cout<<"\nDo you want to enter more records? y/n"; 

cin>>entry; 

} 

fin.close(); 

fin.open("stud.dat", ios::in|ios::binary); 

cout<<"\nEnter roll no. whose record is to be deleted: "; 

cin>>rno; 

char found='f'; 

while(fin.read((char*)&s, sizeof(s))) 

{ 

if(s.getrno()==rno) 

{ 

s.putdata(); 

found='t'; 

} 

else 

{ 

fout.write((char*)&s, sizeof(s)); 

} 

if(found=='f') 

cout<<"\nRecord not found"; 

fin.close(); 

fout.close(); 

remove("stud.dat"); 

rename("temp.dat", "stud.dat"); 

fin.open("stud.dat", ios::in|ios::binary); 

cout<<"\nNew Record: "; 

while(fin.read((char*)&stu, sizeof(stu))) 

{ 

stu.putdata(); 

} 

fin.close(); 

getch(); 

} 