
#include<iostream>


using namespace std;




int main()


{



 for(int i=0; i<3; i++)  //UPPER ROWS


 {


  for(int j=3; i<j; j--)//FOR PRINTING STARS


   cout<<"*";


  for(int k=0; k<2*i; k++)//FOR MANAGING SPACE


   cout<<" ";


  for(int l=3; i<l; l--)//FOR PRINT 2ND HALF STARS OR MIRROR IMAGE OF FIRST ONE


   cout<<"*";


  cout<<endl;


 }


 //for lower side


 for(int i=0, k=3; i<3-1; i++, k--)//LOWER ROWS


 {


  for(int s=0; i>s-2; s++)//FOR PRINTING STARS


   cout<<"*";


  for(int j=0; j<3+k-3; j++)//FOR MANAGING SPACE


  {


   if(i<j)


    cout << " ";


  }


  for(int s=0; i>s-2; s++)//TO PRINT OTHER HALF STARS


   cout<<"*";


  cout<<endl;


 }




}




