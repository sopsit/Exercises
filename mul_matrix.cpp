#include<iostream>
#include<vector>
using namespace std;

int main(){
    //I assume that the number of matrices is three,
    //and for the convenience of the initialization code,
    // I did not receive it from the user.
    int sum=0,mul=1,k,l;
    int arr_i[3]={3,5,89};//sorted
    int arr_j[3]={3,7,89};//sorted
    vector <int> is{89,5,3};
    vector <int> js{3,89,7};
    int m=2,n=2;//arr_j.size()-1
    while(n>=0 && m>=0){
      while(arr_i[m]==arr_j[n]){
        for( k=0;k<is.size();k++){
            if(is[k]==arr_i[m]){
                mul=mul*is[k]*js[k];
                break;
            }
        }
        for( l=0;l<js.size();l++ ){
            if(js[l]==arr_j[n]){
                mul=mul*is[l];
                break;
            }
        }
        sum+=mul;
        mul=1;
        is.erase(is.begin()+k);
        js.erase(js.begin()+l);
        m--;n--;
    }
    if(arr_i[m]>arr_j[n]){
        m--;
    }
    else if(arr_i[m]<arr_j[n]){
        n--;
    }        
    }
    cout<<sum;

    
}