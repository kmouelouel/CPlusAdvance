#include <iostream>
#include <ctime>
#include <cstdlib>  
#include "Customerlib.h"
using namespace std;

const int Max_minute=100;
int t_time=0;
	int t_arrival=0;
	int t_depart=-1;
	int customer_n=0;
	int serv_time=0;
	int MAX_SERV_TIME=serv_time;
	int Tot_wait_t=0;
	int TTcustunserved=0;
	Customer customerQueue; 
 // function prototype
void SimulationArrivalTime(int) ;
 
int main(){
// declaration data
	//srand(time(0));
	
	customerQueue.InitQueue();
	int randInterval; 
	cout<<"what kind of interval de you wat to simulate ? for: \n";
	cout<<"1)1-4 minutes\n2)1-3 minutes"<<endl;
	cin>>randInterval;
	switch(randInterval)
	{
	case 1:
		SimulationArrivalTime(4);
		break;

	case 2:
		SimulationArrivalTime(3);
		break;
	default:
		cout<<"Your input is wrong"<<endl;
}


	system("pause");


}

// functions
void SimulationArrivalTime(int arrive){

	srand(time(0));
	while (t_time<=720){
			//t_arrival=rand()%3+1;
			cout<<"Time is="<<t_time<<",Max served ="<<MAX_SERV_TIME<<", Total wait Time= "<<Tot_wait_t<<endl;
			if(!customerQueue.IsEmpty() && t_time==t_depart)// it is time to depart and there are customer in the queue
			{
		      cout<<"customer "<<customerQueue.GetCustomerNumber()<<" will be served."<<endl;
			  serv_time=customerQueue.GetServeTime();
			  Tot_wait_t+=(t_time-customerQueue.GetArriveTime());
			  customerQueue.dequeue();
			  if(!customerQueue.IsEmpty())
				  t_depart=serv_time+t_time;
			}
			if(t_time==t_arrival){//customer arrive 
				customer_n++;
				serv_time=(rand()%arrive)+1;// get service time
				if (serv_time>MAX_SERV_TIME)
                  MAX_SERV_TIME= serv_time;
				if(customerQueue.IsEmpty()) 
				      t_depart=serv_time+t_time;
				  customerQueue.enqueue(customer_n,t_arrival,serv_time);
				t_arrival+=(rand()%arrive)+1;
				cout<<"customer #"<<customer_n<<" joins at "<<t_arrival<< "serv_time "<<serv_time<<endl;
			}
			t_time++;
			customerQueue.printQueue();
			}
		 cout<<"The result of simulation  in the arrival interval 1-"<<arrive<<endl;
		cout<<"\n Average wait time :"<<Tot_wait_t<<endl;
		cout<<"Max service time :"<<MAX_SERV_TIME<<endl;
		TTcustunserved=customerQueue.MaxNberCustomer();
		cout<<"Total customer unserved "<<TTcustunserved<<endl;
		customerQueue.printQueue();
		for (int i=0;i<TTcustunserved;i++){
			
			customerQueue.dequeue();
		}

}

