#include<iostream>
using namespace std;



class garment{
	char name[20];
	
	
	public:
	void  getname(){
			cout<<"Enter name of product"<<endl;
			cin>>name;			
		}
	
		 int calprice1(){
		 }
};

class upper: public garment{
	int collarSize;
	
	public:
	
	void setcol(){
		
		cout<<"Enter collar size : ";
		cin>>collarSize;
	}
	int getcolll(){
		
		return collarSize;
	}
	void getcollarsize1(){
	}
		
		
};

class lower: public garment{
	

	public:
		int waist;
		
		int  getwaist(){
		}
	void setwaist1(){
		
		cout<<"Enter waist : ";
		cin>>waist;
	}

};
class shirt:  public upper{
	public:
		
		shirt(){
		}
		
		int getcs(){
			
			int collsize = getcolll() -1;
			return collsize;			
		}
		int calprice(){
			
			int price;
			
			price = getcs() * 20 + 10;
			return price;
	}
		
		
		
	
		
};

class pajama:  public lower{
int w1;

public:
	
	pajama(){
		waistpaj();
	}
	int calpaj(){
			
			int pj;
			
			pj = w1 * 15 + 50;
			return pj;
		}
		
	void waistpaj(){
			
			w1 = waist - 2;
			
		}
		
	int getwaist(){
		return waist;
	}
	
	
};

class trouser: public lower{

int w2;

public:
	
	trouser(){
		calwaist();
	}
		
	int getwaist(){
		return waist;
	}
	
		int calprice(){
			
			int tr;
			
			tr = w2*20+100;
			
			return tr;
		}
	
	void calwaist(){
			
			w2 = waist - 3;
			
		}
	
};

	
int main(){
	
	int counter = 0;
	int arr[10];
	int choice, total = 0;
	shirt obj3;
	pajama obj4;
	trouser obj5;
	
	for(int i=0;i<10;i++)
		arr[i] = -1;
	
	
	
	obj3.setcol();
	obj4.setwaist1();
	
	
	
	for(int i=0;i<10;i++){
		
	cout<<"1.shirt"<<endl;
	cout<<"2.pajama"<<endl;
	cout<<"3.trouser"<<endl;
	cout<<"4.Exit"<<endl;
	cin>>choice;
	
	if(choice==1)
		{
			arr[counter] = 1;
			counter++;
		}
	if(choice==2)
		{
			arr[counter] = 2;
			counter++;
		}
		if(choice==3)
		{
			arr[counter] = 3;
			counter++;
		}
		if(choice==4)
		{
			break;
		}
		
	}
	
	
		for(int i=0;i<10;i++)
		{
			if(arr[i]==1)
				total = total + obj3.calprice();
			if(arr[i] == 2)
				total = total + obj4.calpaj();
			if(arr[i] == 3)
				total = total + obj5.calprice();
					
		}
		
	cout<<"\n\n"<<total<<"$ here u go"<<endl;
		
	return 0;
}



