#include <iostream>
using namespace std;
int main()
{
    // cout <<"Hello C++ World"<<endl;
    // int length = 8,width = 5;
    // int area,perimeter;
    // area = length * width;
    // perimeter = 2*(length) + 2*(width);
    // cout<<"Your Area is "<<area<<endl;
    // cout<<"Your Perimeter is "<<perimeter<<endl;
    // return 0;
    int towing_fee= 2500;//pkr
    int litter_1=1800;// per litter oil rupees 
    int hour_1=700; //per hour rupees for labour
    int advance_rupees = 10000;//advance rupees by kamran
    float how_much_litter;
    float how_much_hour;
    unsigned int battery_price;
    float subtotal;
    float tax;
    float total;
    float remainig_amount;
    cout<<"Tell me how much litter you use ";
    cin>>how_much_litter;
    cout<<"Tell me how much work you allowed for Reparing in hour ";
    cin>>how_much_hour;
    cout<<"What is the Battery Price ";
    cin>>battery_price;
    subtotal = towing_fee + (litter_1*how_much_litter) + (hour_1*how_much_hour)+battery_price;
    tax = subtotal*(5.0/100.0);
    total = subtotal + tax;
    remainig_amount = total - advance_rupees;
    cout<<"Your Subtotal is = "<<subtotal<<endl;
    cout<<"Your Tax is = "<<tax<<endl;
    cout<<"Your Total Amount(subtotal +tax) is = "<<total<<endl;
    cout<<"Your Remaining Amount(total - advance) is = "<<remainig_amount<<endl;
    return 0;
}