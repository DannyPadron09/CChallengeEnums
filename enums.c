#include <stdio.h>

int main () 
{
    // create an enum type named 'Company'
    enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
    // Valid values 'GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT'

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    //Display values
    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);

    return 0;
    
}