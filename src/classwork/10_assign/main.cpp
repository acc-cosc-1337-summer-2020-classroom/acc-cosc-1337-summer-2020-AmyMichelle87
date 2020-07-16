//main
#include"employee.h"
#include"engineer.h"
#include"sales_employee.h"

int main()
{
  int choice; 
  double base, bonus, hours, rate, commission; 
 

  do{

    cout<<"\nMake a selection\n(Enter 444 to Exit)\n";
  cout<<"1-Engineer\n2-Sales Employee\n"; 
  cin>>choice; 
    if(choice == 1){
      cout<<"Enter base pay: "<<"\n";
      cin>>base; 
      cout<<"Enter bonus pay :"<<"\n";
      cin>>bonus; 
      Employee *engineer = new Engineer(base,bonus);
      cout<<"Engineer gross pay: $"<<engineer->get_pay()<<"\n";
      delete engineer; 
      cout<<"Engineer gross pay: $"<<engineer->get_pay()<<"\n";

    } else if(choice ==2){
      cout<<"Enter hours: "<<"\n";
      cin>>hours; 
      cout<<"Enter hourly rate: "<<"\n";
      cin>>rate; 
      cout<<"Enter commission in dollar amount: "<<"\n";
      cin>>commission; 
      Employee *salesEmp = new SalesEmployee(hours, rate, commission); 
      cout<<"Sales employee gross pay: $"<<salesEmp->get_pay()<<"\n"; 
      delete salesEmp; 
      cout<<"Sales employee gross pay: $"<<salesEmp->get_pay()<<"\n"; 

    }else if(choice == 444){
      cout<<"GoodBye!\n\n";
      
    }else {
      cout<<"Invalid Input."<<"\n";
    }

  }while(choice != 444);

  

 


  return 0;
}