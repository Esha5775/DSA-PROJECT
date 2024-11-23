#include<iostream>
#include<string>
using namespace std;
//Grocery Items class
class GroceryItem
{
	public:
	string Itemname;
	double price;
	GroceryItem *next;
	// Constructor
	GroceryItem(string Itemname,double price)
	{
		Itemname=Itemname;
		price=price;
		next=NULL;
	}
};
//Order class
class Order
{
	public:
  int OrderId;
  string customerName;
  int Quantity;
  Order *next;
  //Constructor
  Order(int ID,string name,int qn)	
  {
  	OrderId=ID;
  	customerName=name;
  	Quantity=qn;
  	next=NULL;
  }
};
//Customer class
class Customer{
	public:
	string name;
	string address;
	int phoneNumber;
	//Constructor
	Customer(string n,string a,int number)
	{
		name=n;
		address=a;
		phoneNumber=number;
	}
};
//Delivery System class
class DeliverySystem{
	private:
		GroceryItem *head;
		Order *front;
		Order *rear;
		
		public:
			DeliverySystem()
			{
			
			head=NULL;}
	void addGroceryItem(string name, double price) {
    
    GroceryItem* newItem = new GroceryItem(name, price);
    if (head == NULL) {
        head = newItem;
    } else {
        GroceryItem* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newItem;
    }
    cout << "Item added successfully: " << name << ", Price: $" << price << endl;
}
void DisplayGroceryItems()
{
	if(head==NULL)
	{
		cout<<"No items available in the store."<<endl;
		return;
	}
	cout<<"Available Grocery Items:\n";
	GroceryItem *temp=head;
	while(temp!=NULL)
	{
		 cout << "- " << temp->name << ": $" << temp->price << endl;
		 temp=temp->next;
	}
}
//Search item by name
void PlaceOrder(string Customername,int quantity,string Itemname)
{
	if(GroceryItem==name)
	{
		 cout << "Item found: " << name << ", Price: $" << item.price << endl;
                return;
            }
        
        cout << "Item not found: " << name << endl;
 
        Order *newNode = new Order(OrderId, quantity);
        if (!front) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
     cout << "Order placed successfully! Order ID: " << OrderId << endl;
    }
    
	
		
	


};
