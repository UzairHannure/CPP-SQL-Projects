
cout<<"\nYou have done it";

}

void fcts();

};

void fact::fcts()

{

int i;

for(i=n; i>0; i--)

{

facts=facts*i;

}

cout<<"\nThe factorial of "<<n<<" is "; 

cout<<facts; 

} 

void main() 

{ 

clrscr(); 

fact f1; 

f1.fcts(); 

getch(); 

} 