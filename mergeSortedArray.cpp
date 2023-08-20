#include<bits/stdc++.h>
using namespace std;
const int maxs=100;
int main(){
    int s1,s2;
    int stock[maxs],cart[maxs];
    cin>>s1;
    for(int i=0;i<s1;i++){
        cin>>stock[i];
    }
    cin>>s2;
    for(int i=0;i<s2;i++){
        cin>>cart[i];
    }
    int mergedSize=s1+s2;
    int merged[mergedSize];
    int i=0,j=0,k=0;
    while(i<s1&&j<s2){
        if(stock[i]<cart[j]){
            merged[k++]=stock[i++];
        }
        else if(stock[i]>cart[j]){
            merged[k++]=cart[j++];
        }
        else{
            merged[k++]=stock[i++];
            j++;
        }
    }
    while(i<s1){
        merged[k++]=stock[i++];
    }
    while(j<s2){
        merged[k++]=cart[j++];
    }
    for(int i=0;i<k;i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}
