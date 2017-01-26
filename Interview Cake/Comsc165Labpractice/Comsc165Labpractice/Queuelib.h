//#ifndef QUEUE_H
//#define QUEUE_H
//
//class QueueClass{
//	private:
//	struct queueNode{
//	int cust_n;
//	int serv_t;
//	int arr_t;
//	queueNode *nextPtr;
//	};
//queueNode *headPtr;
//queueNode *tailptr;
//public:
//	QueueClass(){
//		headPtr=nullptr;
//      tailptr=nullptr;
//	}
//	~QueueClass();
//void enqueue(queueNode *,queueNode *,int ,int,int);
//bool dequeue();
//bool isQueueEmpty();
//void printQueue(queueNode *);
//int getCustomerNumber(){ return this->tailptr->cust_n; }
//int getCustomerServe(){   return this->headPtr->serv_t;}
//int  getCustomerArrice(){   return this->headPtr->arr_t;}
//};
//
//void QueueClass::enqueue(queueNode *headPtr,queueNode *tailptr,int cust_n,	int serv_t,	int arr_t ){
//	queueNode *newqueueNode=new queueNode;
//	newqueueNode->cust_n=cust_n;
//	newqueueNode->serv_t=serv_t;
//	newqueueNode->arr_t=arr_t;
//	newqueueNode->nextPtr=nullptr;
//	if(isQueueEmpty())
//	{headPtr=newqueueNode;
//	}
//	else 
//    {tailptr->nextPtr=newqueueNode;
//	tailptr=newqueueNode;
//	}
//
//}
//bool QueueClass::dequeue(){
//	if(isQueueEmpty()){
//	queueNode *tempNode;
//	tempNode=headPtr;
//	headPtr=headPtr->nextPtr;
//	}
//	else {
//	std::cout<<"the queue is empty. "<<std::endl;
//	
//	}
//}
//bool QueueClass::isQueueEmpty(){
//	return headPtr==nullptr;
//}
//void QueueClass::printQueue(queueNode * currentptr){
//if (currentptr==nullptr)
//	std::cout<<"Queue is empty.\n\n";
//else 
//{   while( currentptr!=nullptr)
//{  std::cout<<currentptr->cust_n<<"\n";
// currentptr=currentptr->nextPtr;
//
//}
//
//}
//
//}
//#endif
