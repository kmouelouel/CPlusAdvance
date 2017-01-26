//#include <iostream>
//using namespace std;
//
//int main(){
//const	int n=4;
//	int  myMatrix[n][n]={{1,2,3,4},{2,4,6,8},{3,6,9,12},{4,8,12,16}};
//	int res[n][n]={0};
//	cout<<"the matrix d origine"<<endl;
//	for(int i=0;i<n;i++)
//	{for(int j=0;j<n;j++)
//	{cout<<" "<<myMatrix[i][j]<<"";
//	}
//	cout<<endl;
//	}
//	cout<<"after flip up 90 rotation"<<endl;
//
//	for(int x=0;x<n; x++)
//		{for(int y=n-1;y>-1;y--)
//			res[x][n-y-1]=myMatrix[x][y];
//	}
//	for(int i=0;i<n;i++)
//	{for(int j=0;j<n;j++)
//	{cout<<" "<<res[i][j]<<"";
//	}
//	cout<<endl;
//	}
//	system("pause");
//}//end main