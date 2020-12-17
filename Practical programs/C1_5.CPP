#include<iostream.h> 

#include<conio.h> 

struct distance 

{ 

int feet; 

int inches; 

}; 

void main() 

{ 

clrscr(); 

distance d[2]; 

distance tot_dist; 

tot_dist.feet=0; 

tot_dist.inches=0; 

int i; 

for(i=0; i<2; i++) 

{ 

cout<<"Enter distance in feet: "; 

cin>>d[i].feet; 

cout<<"\nEnter distance in inches: "; 

cin>>d[i].inches; 

tot_dist.feet+=d[i].feet; 

tot_dist.inches+=d[i].inches; 

} 

if(tot_dist.inches>=12) 

{ 

tot_dist.feet+=(tot_dist.inches/12); 

tot_dist.inches=tot_dist.inches%12; 

} 

cout<<"\nTotal distance: "; 

cout<<tot_dist.feet<<" "<<tot_dist.inches; 

getch(); 

} 