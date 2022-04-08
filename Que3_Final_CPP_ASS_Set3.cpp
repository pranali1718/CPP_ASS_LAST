#include<iostream>
using namespace std;

int MAX_C = 0; 

void swap(char [], int);
int search(char [], int);
void swaps(char *, char *);

int main()
{
    int p=0;
    
    cout << "Enter The Length Of Binary String : ";
    cin >> p;
    
    char array[p];
    
    cout << "Enter The Elements Of Binary String : ";
    cin >> array;
    
    MAX_C = search(array, p);      
    
    swap(array, p);             
   
    cout << "MAX Number Of '01' Occured  : " << MAX_C ;
    
    
    return 0;
    
}  

void swap(char arr[], int p)            
{
    int len, max;
    
   
    if(p%2 == 0)        
        len = p/2;
    
    else                
        len = (p+1)/2;
    
    
    
    for(int i = 0; i<=len; i++)
    {
        if(arr[i] != arr[i+2])          
         {
            swaps(&arr[i], &arr[i+2]);           
            max = search(arr, p);                 
            
            if( max > MAX_C)            
                MAX_C = max;
         }

       else
           continue;
    }
}

int search(char arr[], int p)            
{
    int max=0;
    
    for(int i = 0; i<p; i++)
    {
        if(arr[i] == '0' && arr[i+1] == '1')        
            max++;
            
        else
            continue;
    }
    
    return max;
}

void swaps(char *k, char *l)           
{
    char temp;
    
    temp = *k;
    *k = *l;
    *l = temp;
}