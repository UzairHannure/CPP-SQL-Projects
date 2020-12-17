#include<fstream.h>
#include<conio.h> 
#include<ctype.h> 
#include<string.h> 
#include<stdio.h> 
void main() 
{ 
clrscr(); 
fstream fin; 
fstream fout;
char ch[50]; 
char ch1[50]; 
int x; 
fin.open("XYZ.TXT", ios::in); 
fout.open("ABC.TXT", ios::in|ios::out); 
cout<<"\nORIGINAL: "; 
while(!fin.eof()) 
{ 
fin.getline(ch, 50);
puts(ch);
int i=0;
if(islower(ch[i]))
{
fout<<ch<<endl;
}
}
fin.close();
fout.seekg(0);
cout<<"\nNEW: ";
while(!fout.eof())
{
fout.getline(ch1, 50);
puts(ch1);
}
fout.close();
getch();
}