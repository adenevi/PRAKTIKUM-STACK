#include <iostream>
#include <conio.h>

using namespace std;

int storage= -1, a[5];

int push(int value)
{
	if(storage==4){
		cout<<"Storage is FULL!!"<<endl;
	}
	else if(storage<4){
		storage++;
		a[storage]=value;
	}
}

int pop()
{
	if(storage==-1){
		cout<<"Storage is EMPTY"<<endl;
	}
	else if(storage>-1){
		storage--;
	}
}

int display()
{
	int I;
	if(storage==-1){
		cout<<"Nothing to Display"<<endl;
	}
	else if(storage>-1){
		cout<<"Storage is: "<<endl;
		for(I=0; I<=storage; I++){
			cout<<a[I]<<endl;
		}
	}
}

int main()
{
	int value, choice;
	do{
		atas:
		cout<<"\n1.Push \n2.Pop \n3.Display \n4.Exit \nInput Choice: ";
		cin>>choice;
		system("cls");
		if(choice==1){
			cout<<"Input value: ";
			cin>>value;
			push(value);
		}
		else if(choice==2){
			pop();
		}
		else if(choice==3){
			display();
		}
		else if(choice==4){
			cout<<"Thank you for using this program :)";
		}
		else{
			cout<<"Wrong choices. Please re-input"<<endl;
			goto atas;
		}
	}
	while(choice!=4);
	cout<<"\n\n\n\nEXITING PROGRAM!!!";

getch();
}
