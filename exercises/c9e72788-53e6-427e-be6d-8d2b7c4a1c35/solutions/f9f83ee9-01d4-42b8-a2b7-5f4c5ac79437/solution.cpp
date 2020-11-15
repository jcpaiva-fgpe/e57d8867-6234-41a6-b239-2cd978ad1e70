#include<iostream>
using namespace std;

int main () {
    int n,m;
    cin>>n>>m;

    int a[n][m],I,J,K=0,F=0;
    float med,S,mr[n],mc[m];
    for (I=0;I<n;I++) {
        for (J=0;J<m;J++) {
            cin>>a[I][J]; }
        }

    for (I=0;I<n;I++) {
        S=0;
        for (J=0;J<m;J++) {
            S=S+a[I][J]; }
            med=S/m;
            mr[K]=med;
            K++; }
    
    for (I=0;I<m;I++) {
        S=0;
        for (J=0;J<n;J++) {
            S=S+a[J][I]; }
            med=S/n;
            mc[F]=med;
            F++; } 

    for (I=0;I<K;I++) {
        cout<<mr[I]<<" "; }
    cout<<endl;
    for (I=0;I<F;I++) {
        cout<<mc[I]<<" "; 
    }
    cout<<endl;
    return (0); }   
            
            
            
            
            
            
            
            
