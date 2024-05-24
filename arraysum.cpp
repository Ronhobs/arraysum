//ARRAY SUM CALCULATOR
//This program calculates the sum of 10 numbers entered by the user
#include<iostream>
using namespace std;

int main(){
    const int SIZE=10;
    int nums[SIZE];
    int sum=0;
    cout<<"Enter 10 numbers:"<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>nums[i];
        sum+=nums[i];
}
cout<<"\nSum is:"<<sum<<"\n The list of numbers were:";
for(int i=0;i<SIZE;i++){
    cout<<nums[i]<<"";
    return 0;
}
}
