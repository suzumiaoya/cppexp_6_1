#include <iostream>
using namespace std;

template<typename T>
void sort(T array[],int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(array[j]>array[j+1]) {
                T temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {
    int number[]={5,55,2,22,4,77};
    char litter[]={'n','s','a','j','l','k','d','s'};
    int n=sizeof(number)/sizeof(number[0]);
    int l=sizeof(litter)/sizeof(litter[0]);

    cout<<"before sort:";
    for(int i=0;i<n;i++) {
        cout<<" "<<number[i];
    }
    cout<<endl;
    cout<<"after sort:";
    sort<int>(number,n);
    for(int i=0;i<n;i++) {
        cout<<" "<<number[i];
    }
    cout<<endl<<endl;

    cout<<"before sort:";
    for(int i=0;i<l;i++) {
        cout<<" "<<litter[i];
    }
    cout<<endl;
    sort<char>(litter,l);
    cout<<"after sort:";
    for(int i=0;i<l;i++) {
        cout<<" "<<litter[i];
    }


    return 0;
}
