#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  int index;
   string newitem;
   do
{ 
        
    
   
    

  cout<<"\n==GROCERY LIST MANAGER==";

  cout<<"\nEnter your choice: ";
  
  cout<<"\n (A)dd an item";
  

  cout<<"\n (Q)uit";
  
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
     if (input=='A'||input=='a')
    {
            cout<<"What is the item?\n";
            cin>>newitem;
         
            
      
    if(numItems>=5)
    {
            cout<<"You'll need a bigger list!\n";
    }
    else {

    
            list[numItems]=newitem;
            numItems++;
    }        
             
    
    
    }
}               





   while(input!='q'&&input!='Q');
   cout<<"==ITEMS TO BUY==\n";

  for(int index=0; index<5; index++)
{
        
cout<<index+1;
cout<<".";
cout<<list[index]<<endl;
}            
  return 0;
}
