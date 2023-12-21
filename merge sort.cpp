
#include<iostream>
using namespace std;

void Merge (int A[],int p, int q, int r){
int n=0,m=0;

int left[100],right[100];
for(int i=p;i<=q;i++){
    left[n]=A[i];
    n++;
}
left[n]=99999;
for(int i=q+1;i<=r;i++){
    right[m]=A[i];
    m++;
}
right[m]=99999;
int i=0,j=0;
for(int k=p; k<=r;k++){

    if(left[i]<=right[j]){
        A[k]=left[i];
        i++;
    }else{
    A[k]=right[j];
    j++;
    }

}



}



void Merge_sort(int A[],int p,int r){

if(p<r){
    int q=(p+r)/2;
    Merge_sort(A,p,q);
    Merge_sort(A,q+1,r);
    Merge(A,p,q,r);

}

}

int main(){


int p=0,r;

cout<<"enter the array size";
cin>>r;
int A[r];
for(int i =0; i<r; i++){
    cin>>A[i];
}
Merge_sort(A,p,r-1);
for(int i =0; i<r; i++){
    cout<<A[i]<<" ";
}





}

