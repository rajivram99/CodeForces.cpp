#include <iostream>

using namespace std;

int main() {
        int row,col;
        cout<<"enter row: ";
        cin>>row;
        cout<<"enter col: ";
        cin>>col;
        int s=row*col;
        s=s+1;
        int arr[s];
        for(int i=1;i<s;i++)
        {
            cin>>arr[i];
        }
        int size= sizeof(arr)/sizeof(arr[0]);
        int maxi1=0;
        int maxi2=0;
 
        //max row sum 
        int sum=0;
        for(int i=1;i<size;i++)
        {
            sum=sum+arr[i];
            if(i%col== 0)
            {
                if(sum>maxi1)
                {
                    maxi1=sum;
                }
                   sum=0;
            }
 
        }
        
        //max col sum
        int SUM=0;
        int count=0;
            for(int i=1;i<=col;i++)
            {
                for(int j=i;j<size;j=j+col)
                {
                    count++;
                    SUM=SUM+arr[j];
                    if(count == row)
                    {
                        if(SUM>maxi2)
                         {
                             maxi2=SUM;
                             SUM=0;
                         }
                         SUM=0;
                         count=0;
                    }
                }
            }
    
    cout<<"MAX COL = "<<maxi2<<" ";
    cout<<"MAX ROW = "<<maxi1;
    cout<<endl;
    cout<<"Total ="<<maxi1+maxi2;
    
}
