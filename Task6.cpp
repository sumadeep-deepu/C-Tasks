#include<iostream>
using namespace std;
class DynamicArrayOps{
    private:
    int *arr;
    int size;

    public:
    DynamicArrayOps(){
        cout<<"enter thre size you want : ";
        cin>>size;
        arr=new int[size];
        cout<<"enter the "<<size<<" no of elements : "<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    ~DynamicArrayOps(){
        delete[] arr;
        cout<<"memory de allocated"<<endl;
    }
    void display(){
        cout<<"the array elements are : "<<endl;
        for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" ";
        }
    }

    void sum(){
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=*(arr+i);
        }
        cout<<endl;
        cout<<"the sum of array elements is : "<<sum<<endl;
    }

};

main(){
    DynamicArrayOps dar;
    dar.display();
    dar.sum();
}