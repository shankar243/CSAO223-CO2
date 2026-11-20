#include <stdio.h> 
int main() 
{ 
double price, qty, gross; 
double discount, taxable, gst; 
double total, net; 
int senior, count = 0; 
// Bill 1 
price = 100; 
qty = 10; 
senior = 1; 
gross = price * qty; 
discount = gross * 15 / 100 * senior; 
taxable = gross - discount; 
gst = taxable * 5 / 100; 
total = taxable + gst; 
net = total > 1000 ? total - 50 : total; 
count++; 
printf("Bill 1: Rs. %.2f\n", net); 
// Bill 2 
price = 250; 
qty = 5; 
senior = 0; 
gross = price * qty; 
discount = gross * 15 / 100 * senior; 
taxable = gross - discount; 
gst = taxable * 5 / 100; 
total = taxable + gst; 
net = total > 1000 ? total - 50 : total; 
count++; 
printf("Bill 2: Rs. %.2f\n", net); 
// Bill 3 
price = 120; 
qty = 10; 
senior = 1; 
gross = price * qty; 
discount = gross * 15 / 100 * senior; 
taxable = gross - discount; 
gst = taxable * 5 / 100; 
total = taxable + gst; 
net = total > 1000 ? total - 50 : total; 
count++; 
printf("Bill 3: Rs. %.2f\n", net); 
printf("Total Bills: %d\n", count); 
return 0; 
}