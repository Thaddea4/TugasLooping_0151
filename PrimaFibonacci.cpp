#include <iostream>
using namespace std;

// variabel global
int n, pilihan;

// function cek bilangan prima
bool cekPrima(int n){
      if(n < 2){
        return false;
    }

     int i = 2;
     while(i < n){
         if(n % i == 0){
            return false;
        }
        i++;
     }

     return true;
}