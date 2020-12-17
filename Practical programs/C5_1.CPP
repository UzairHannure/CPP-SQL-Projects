#include<fstream.h> 

#include<conio.h> 

#include<ctype.h> 

void main() 

{ 

clrscr(); 

ifstream fin; 

fin.open("abc.txt", ios::in); 

char ch; 

int ctr1=0, ctr2=0; 

while(!fin.eof()) 

{ 

fin.get(ch); 

if(isupper(ch)) 

ctr1++; 

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 

ctr2++; 

} 

cout<<"\No. of uppercase characters: "; 

cout<<ctr1; 

cout<<"\nNo. of vowels: "; 

cout<<ctr2; 

fin.close(); 

getch(); 

} 