#include<bits/stdc++.h>
using namespace std;
int j;
int main()
{
    // for(int i = 0;i<5;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int k =1;k<=(2*i-1);k++)
    //     {
    //         cout<<k;
    //     }
    //     cout<<'\n';
    // }



    ///////
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    for(int i =1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
        
    }
    
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * 
    for(int i =1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
        
    }
    //* * * * * 
    // * * * * 
    // * * * 
    // * * 
    // *
      for(int i =1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
        
    }

//           * 
//         * * 
//       * * * 
//     * * * * 
//   * * * * *
    for (int i= 1;i<=5;i++){
        for(int j=i;j<=5;j++)
        {
            cout<<"  ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
    }
//   * * * * * 
//     * * * * 
//       * * * 
//         * * 
//           * 
        for (int i= 1;i<=5;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for (int j=i;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
    }


//           * 
//         * * * 
//       * * * * * 
//     * * * * * * * 
//   * * * * * * * * * 
        for (int i= 1;i<=5;i++){
        for(int j=i;j<=5;j++)
        {
            cout<<"  ";
        }
        for (int j=1;j<i;j++)
        {
            cout<<"* ";
        }
         for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
    }

//   * * * * * * * * * 
//     * * * * * * * 
//       * * * * * 
//         * * * 
//           *
    for (int i= 1;i<=5;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for (int j=i;j<5;j++)
        {
            cout<<"* ";
        }
        for(int j=i;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
    }
    
//           * 
//         * * * 
//       * * * * * 
//     * * * * * * * 
//   * * * * * * * * * 
//     * * * * * * * 
//       * * * * * 
//         * * * 
//           * 

    for (int i= 1;i<5;i++){
        for(int j=i;j<=5;j++)
        {
            cout<<"  ";
        }
        for (int j=1;j<i;j++)
        {
            cout<<"* ";
        }
         for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
    }
        for (int i= 1;i<=5;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for (int j=i;j<5;j++)
        {
            cout<<"* ";
        }
        for(int j=i;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
    }

      for(int i =1;i<5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
    }
    for(int i =1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
    }

    return 0;
}
