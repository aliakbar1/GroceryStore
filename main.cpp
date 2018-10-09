#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector <string>list; //array of 5 strings
  int numItems = 0;
  char input;
  int index;
 string newitem;
   do
{ 
  cout<<"==GROCERY LIST MANAGER==";      

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

    
            
            list.push_back(newitem);
    }        
             
    
    
    }
}               





   while(input!='q'&&input!='Q');
   if(list.size()>=1)
{cout<<"==ITEMS TO BUY==\n";}

  for(int index=0; index<list.size(); index++)
{
      cout<<index+1;
      cout<<" ";
cout<<list[index]<<endl;


}           
if(list.size()<1)
{
cout<<"No items to buy!\n";
}

  return 0;
}
