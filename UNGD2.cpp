#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#define max_stack 15

using namespace std;

struct queue{
    int data[15];
    int head;
    int tail;
};

queue antrian;

int isempty(){
    if (antrian.tail == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(){
    if (antrian.tail == 15-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(int data){
    antrian.head=0;
    antrian.tail++;
    antrian.data[antrian.tail] = data;
    cout<<"data berhasil dimasukkan";
}

void dequeue(){
    int i;
    int a= antrian.data[antrian.head];
    cout<<"data terambil "<<a;
    for( i=antrian.head; i<=antrian.tail; i++){
        antrian.data[i]=antrian.data[i+1];
    }
    antrian.tail--;
}

void clear(){
  antrian.head = antrian.tail = -1;
  cout<<"antrian sudah kosong"<<endl;
}

void print(){
    int j,input;
    for(int i=0;i<=antrian.tail;i++)
    {
     input=antrian.data[i];
      j=i-1;
       while(antrian.data[j]==input && j==0)
    {
       antrian.data[j+1]=antrian.data[j];
       j--;
    }
     antrian.data[j+1]=input;
    }
    for(int i=0;i<=antrian.tail;i++)
    {
     cout<<antrian.data[i];
     if(i==antrian.tail)
                cout<<" - ";
            else
                cout<<" - ";
    }
}

int main()
{
    int pilih, input, i, temp;

    do{
        system("cls");
        cout<<"1.Tambah data (enqueue)"<<endl;
        cout<<"2.Dequeue "<<endl;
        cout<<"3.Print "<<endl;
        cout<<"4.Clear"<<endl;
        cout<<endl;
        cout<<"Pilih : ";cin>>pilih;

        switch(pilih){
        case 1:
        {
            if (isfull() == 1){
                cout<<"antrian penuh";
            }
            else{
                cout<<"Data yg dimasukkan : ";cin>>input;
                fflush(stdin);
                enqueue(input);
            }
            cout<<endl;
            getch();
            break;
        }
        case 2:
        {
            if (isempty() == 1){
                cout<<"antrian kosong "<<endl;
            }
            else{
                dequeue();
            }
            cout<<endl;
            getch();
            break;
        }
        case 3:
        {
            if (isempty() == 1){
                 cout<<"antrian kosong "<<endl;
            }
            else{
                print();
            }
            cout<<endl;
            getch();
            break;
        }
        case 4:
        {
            clear();
            getch();
            break;
        }
        default:
        {
            cout<<"tidak ada dalam pilihan";
            return 0;
        }
        }
    }while (pilih>=1 && pilih<=4);

    getch();
    return 0;
}
