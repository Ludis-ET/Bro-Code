// 
#include<iostream>
using namespace std;
int main(){
    
    int n = 10;
    // max = n * 2 + 1


    // top half
    for (int i = 0; i < n-1; i++){
        for (int j = n-2; j >= 0; j--){
            if (j <= i){
                cout<<j<<" ";
            }
        }


        for (int j = n-2; j >= i; j--){
            cout<<"  ";
        }


        for (int j = n-3; j >= i; j--){
            cout<<"  ";
        }


        for (int j = 0; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    // equator
    for(int i = n-1; i >= 0; i--){
        cout<<i<<" ";
    }


    for(int i = 1; i <= n-1; i++){
        cout<<i<<" ";
    }

    cout<<endl;


    // bottom half
    for (int i = n-1; i > 0; i--){
        for (int j = n-1; j >= 0; j--){
            if (j < i){
                cout<<j<<" ";
            }
        }


        for (int j = 0; j <= n-1; j++){
            if (i <= j){
                cout<<"  ";
            }
        }


        for (int j = 1; j <= n-2; j++){
            if (i <= j){
                cout<<"  ";
            }

        }


        for (int j = 0; j <= n-2; j++){
            if (j < i){
                cout<<j<<" ";
            }
        }

        
        
        cout<<endl;
        
    }
    return 0;
}







        