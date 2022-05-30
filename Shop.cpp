#include<iostream>
using namespace std;
int main(){
int order;
cout<<"Welcome to PG Store"<<endl;
cout<<"We only have three meal packages available at the moment"<<endl;
cout<<"\nPackage 1 includes;\nBread\nSardine\nSoft Drink\nAll for #5000"<<endl;
cout<<"\nPackage 2 includes;\nWhite Rice\nStew\nChicken\nSoft Drink\nAll for #3000"<<endl;
cout<<"\nPackage 3 includes;\nJollof\nPlantain\nChicken\nSoft Drink\nAll for #3750"<<endl;
cout<<"\nSo you pick package?\n"<<endl;
cin>>order;
 system("CLS");
     switch (order){
     	case 1:
     		cout<<"  ";
     		for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n\t\tPG STORE"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n   PACKAGE ORDER :\t\t    1"<<endl;
			 cout<<"\n\t\tCONTENTS"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n\t\t Bread\n\t        Sardine\n\t       Soft Drink"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n   Price:\t\t\t #5000"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n     Thank You For Shopping With Us"<<endl;
     		break;
     		case 2:
     				cout<<"  ";
     		for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n\t\tPG STORE"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n   PACKAGE ORDER :\t\t    2"<<endl;
			 cout<<"\n\t\tCONTENTS"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n\t       White Rice\n\t\t  Stew\n\t\t Chicken\n\t       Soft Drink"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n   Price:\t\t\t #3000"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n     Thank You For Shopping With Us"<<endl;
     			break;
     			case 3:
     			    	cout<<"  ";
     		for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n\t\tPG STORE"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n   PACKAGE ORDER :\t\t    3"<<endl;
			 cout<<"\n\t\tCONTENTS"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n\t\t Jollof\n\t\tPlantain\n\t\tChicken\n\t       Soft Drink"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 }
			 cout<<"\n   Price:\t\t\t #3750"<<endl;
			 cout<<"  ";
			 for(int i=0; i<=35; i++){
     			cout<<"-";
			 } 
			 cout<<"\n     Thank You For Shopping With Us"<<endl;
     				break;
	 }
 }


