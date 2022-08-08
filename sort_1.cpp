#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    
}


void bubblesort(int a[],int n){
    int c=1;
    while(c<n){
        for(int i=0;i<n-c;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
        c++;
    }
}


void insertionsort(int a[],int n){
    for(int i=1;i<n;i++){
        int current =a[i];
        int j=i-1;
        while(a[j]>current && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //selectionsort(a,n);
    //bubblesort(a,n);
    insertionsort(a,n);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}