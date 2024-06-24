// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}
void insert(int arr[],int size, int element_jisko_dalna_hai,int capacity,int index){
    //agar capacity kam ho jae
    if(size>=capacity){
        cout<<"error";
    }
    //ulta loop chalega 
    //int i=size-1 se last index pata chal jaega
    //loop tab tak chalega jab tak index pe pahunch na jae
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
        //element khiska diye
    }
    arr[index]=element_jisko_dalna_hai; //uss element ko daal diye sahi jagah pe.
    cout<<"done"<<endl;
}
int main() {
    // Write C++ code here
    int arr[50]={1,2,3,4,5};
    display(arr,5);
    cout<<endl;
    insert(arr,5,55,50,2);
    cout<<"insertion ke baad ka array"<<endl;
    display(arr,6);
    return 0;
}
