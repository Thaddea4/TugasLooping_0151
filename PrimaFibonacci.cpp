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