#include<iostream>
using namespace std;
int main(){
    int m,n;
    //Runs perfectly in online compiler
    //Input and basic stuff
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the "<<m<<"x"<<n<<" matrix elements: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Main Code
    int arr2[m][n];
    int column=n-1;
    if(column>=0){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr2[j][column]=arr[i][j];
            }
            column--;
        }
    }
    cout<<"The Rotate image matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
