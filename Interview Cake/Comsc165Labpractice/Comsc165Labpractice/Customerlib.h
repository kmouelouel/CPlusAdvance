
class Customer {
private:
	struct queueNode{
	int cust_n;
	int arr_t;
	int serv_t;
	queueNode *nextptr;
};

struct queueNode *headptr ;
struct queueNode *tailptr ;
// function prototypes
public:
	int GetCustomerNumber(){
	return headptr->cust_n;
	}
	int GetArriveTime(){
	
	return headptr->arr_t;
	} 
	
	int GetServeTime(){
	return headptr->serv_t;}

	void printQueue( ){
	
		if(IsEmpty())
	std::cout<<"Queue is Empty.\n";
	else {
		std::cout<<"in The Queue, we have :\n";
		queueNode *currentptr=headptr;
		while(currentptr){
		std::cout<<currentptr->cust_n<<"<--";
		currentptr=currentptr->nextptr;
		}
		std::cout<<std::endl;
	}
	}
bool IsEmpty(){
	return (headptr==nullptr);
}

void InitQueue(){
	 headptr=nullptr;
 tailptr=nullptr;
}

void enqueue( int custN,int arrT,int servT){

queueNode *newnode=new queueNode;
newnode->cust_n=custN;
newnode->arr_t=arrT;
newnode->serv_t=servT;
newnode->nextptr=nullptr;

if (IsEmpty()){
headptr=newnode;
tailptr=newnode;
}else{
	tailptr->nextptr=newnode;
	tailptr=newnode;
}

}
void dequeue(){
	queueNode *tempPtr;
   tempPtr=headptr;
   headptr=headptr->nextptr;
   if (headptr==nullptr)
	   tailptr=nullptr;

}
int MaxNberCustomer()
{
	int nbcust=0;
queueNode *currentptr=headptr;
		while(currentptr){
		nbcust++;
			currentptr=currentptr->nextptr;
		}
		return nbcust;
}
};