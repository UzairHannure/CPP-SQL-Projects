#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

class play 

{ 

int Playcode; 

char Playtitle[25]; 

float Duration; 

int Noofscenes; 

 

public: 

play() 

{ 

Duration=45; 

Noofscenes=5; 

} 

void Newplay(); 

void Moreinfo(float, int); 

void Showinfo(); 

}; 

void play::Newplay() 

{ 

cout<<"\nEnter play code: "; 

cin>>Playcode; 

cout<<"\nEnter play title: "; 

gets(Playtitle); 

} 

void play::Moreinfo(float x,int y) 

{ 

Duration=x; 

Noofscenes=y; 

} 

void play::Showinfo() 

{ 

cout<<"\n\t\t\tPlay Details "; 

cout<<"\nPlay Title: "; 

puts(Playtitle); 

cout<<"\nPlay Code: "; 

cout<<Playcode; 

cout<<"\nDuration: "; 

cout<<Duration; 

cout<<"\nNo. of scenes: "; 

cout<<Noofscenes; 

} 

void main() 

{ 

clrscr(); 

play p1; 

float dur; 

int no; 

p1.Newplay(); 

cout<<"\nEnter duration: "; 

cin>>dur; 

cout<<"\nEnter no. of scenes: "; 

cin>>no; 

p1.Moreinfo(dur, no); 

p1.Showinfo(); 

getch(); 

} 

 