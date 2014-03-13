//* Dynamic Array
//*
//* Class: CS 141, Spring 2014.
//* Lab: Thursday 3pm, TA Kyle
//* System: Mac book, Terminal
//* Author: Diesawit Hansom
#include <stdio.h>
#include <iostream>

using namespace std;
void info()
{
    cout << "Author: Diesawit Hansom"<<endl;
    cout << "Lab: Thursday 3pm"<< endl;
    cout << "Program: Dynamic Array"<< endl;
}
//Assending function
void Asort(int a[], int N)

{
    int i, j, temp;
    
    for (i = N-1; i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if ((a[j-1]>a[j]))
            {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }
}
//Descending funtion
void Dsort(int a[], int N)

{
    
    int i, j, temp;
    for (i = N-1; i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if ((a[j-1]< a[j]))
            {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;

    
            }
        }
    }
}


int main()
	{
    info();
	int size;
        
    int temp;
	int* dArray=NULL;
	dArray=new int[size];
    char userinput;
    
    cout<< "Please enter the size of interger array: ";
    cin>>size;
    cout<<"Please enter your integers: ";
    
    

    for(int i=0; i<size; i++)
        {
        //cout<<"Please enter 5 integers: ";
        cin >> temp;
        *(dArray+i)= temp;
        }
        //cout<<"Please enter 5 integers: ";

        for(int i=0; i<size; i++)
        {
            cout<<*(dArray+i)<< " ";
        }
        cout<< endl;
    
        cout << "Please enter sorting order ('A' for asscending or 'D' for descending):"<<endl;
        cin>>userinput;
        cout <<"In assending order, these are: ";
        if(userinput == 'A'){
            
            
            Asort(dArray,5);
                for (int i=0; i<5; i++)
                {
                    cout<< dArray[i]<<" " ;
                }
            cout<< endl;
        }
        
        if(userinput == 'D'){
            cout <<"In Descending order, these are: ";
            Dsort(dArray,5);
            for (int i=0; i<5; i++)
            {
                cout<<dArray[i] <<" ";
            }
            cout<< endl;
        }
        
        delete[]dArray;
        return 0;
	}
