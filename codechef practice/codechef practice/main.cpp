#include<iostream>
int main()
{int T,n,arr[100],i,m=0,k=0;
    std::cout<<"Submit the number of test case\n"; //Test case
    std::cin >> T;
    while(T--)
    {
        
        std::cout<< "Enter the size of array";
        std::cin>>n;
        std::cout<<"Enter the elements\n";
         for(i=0;i<n;i++)
           {
               std::cin>>arr[i];
               if(!(arr[i]>0)&&(arr[i]<8))
                { m=1;
                 }
               
            }
          if(m==1)
          {
              std::cout<<"no";
              k=1;
          }
          else{
             
                 for(i=0;i<n/2;i++)
                   {
                       if(arr[i]!=arr[n-1-i])
                         {
                           k=10;
                        break;
                         }
                   }
               }
          if(k==10)
          {
              std::cout<<"no";
            
          }
          else if(k!=1)
          {std::cout<<"yes";}
    }
    return 0;
}
