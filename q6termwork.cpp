#include <iostream>
using namespace std;
class Invoice
{
    string partNumber, partDescription;
    int quantity;
    double price_per_item;

public:
    Invoice()
    {
    }
    Invoice(string pn, string pd, int qty, double price)
    {
        partNumber=pn;
        partDescription=pd;
        quantity = (qty < 0) ? 0 : qty;             // Set to 0 if quantity is negative
        price_per_item = (price < 0) ? 0.0 : price; // Set to 0.0 if price is negative
    }
    void setpartnumber()
    {
        cout << "enter part number :";
        getline(cin, partNumber);
    }
    void setpartdescription()
    {

        cout << "enter part description :";
        getline(cin, partDescription);
    }
    void setquantity()
    {
        cout << "enter quantity :";
        cin >> quantity;
        if (quantity < 0)
        {
            quantity = 0;
        }
    }
    void setpriceperitem()
    {
        cout << "enter price per item :";
        cin >> price_per_item;
        if (price_per_item < 0)
        {
            price_per_item = 0.0;
        }
    }

    void getpartnumber()
    {
        cout << "Part number is :" << partNumber << endl;
    }
    void getpartdescription()
    {
        cout << "Part description is " << partDescription << endl;
    }
    void getquantity()
    {
        cout << "The quantity of product :" << quantity << endl;
    }
    void getpriceperitem()
    {
        cout << "Price per item is :" << price_per_item << endl;
    }
    double getInvoiceAmount()
    {
        return quantity * price_per_item;
    }
};
int main()
{
    Invoice invoicetest("PN001", "Hammer", 10, 15.75),inv;
    cout << "initial invoice detiails :" << endl;
    invoicetest.getpartnumber();
    invoicetest.getpartdescription();
    invoicetest.getquantity();
    invoicetest.getpriceperitem();
     cout<<"Invoice amount is :"<<invoicetest.getInvoiceAmount();

    cout << "\nNow to make new invoice as per the users choice :" << endl;
    inv.setpartnumber();
    inv.setpartdescription();
    inv.setquantity();
    inv.setpriceperitem();

    cout << "new invoice details:" << endl;

    inv.getpartnumber();
    inv.getpartdescription();
    inv.getquantity();
    inv.getpriceperitem();
    cout<<"Invoice amount is :"<<inv.getInvoiceAmount();
}