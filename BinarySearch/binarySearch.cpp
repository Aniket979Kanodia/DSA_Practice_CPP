#include <iostream>

using namespace std;
int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m;
    cin>>m;
    int start=0,end=n-1;
    int index= start + ((end - start)/2);
    int check=0;
    while(start<=end)
    
    
    {
        if(m==arr[index]){
            check=1;
            break;
        }
        if(m>arr[index]){
            start = index+1;
        }else{
            end =index-1;
        }
        index= start + ((end - start)/2);

    }
    if(check==1){
        cout<<index;
        }
        else{
            cout<<-1;
        }
    
    return 0;
}