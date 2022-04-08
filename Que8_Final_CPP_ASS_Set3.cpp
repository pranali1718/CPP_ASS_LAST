#include <iostream>
using namespace std;

int f=1,t=1;
string check(string abc)

{
	int p = abc.length();

	if(p %2 == 0)
	{
    	int x;
    	for (x = 1; x <= p; x += 2)
    	{
    	   
            if(abc[0] == 'A')
                {
                	if (abc [x-1] == 'A' && abc [x] == 'B')
                        {
                    	    f=0;
                    	}
                    	
                    	t=f;
                    	f=1;
                    	
                    	
                }
            
            else if(abc[0] == 'B')
                {
                    if(abc[x-1] == 'B' && abc[x] == 'A')
                        {
                            f=0;
                        }
                        t=f;
                    	f=1;
                }
            
            else
            {
               return "No"; 
            }
    	}
    	
    	if(t==0)
    	{
    	    return "Yes";
    	}
    	else
    	{
    	    return "No";
    	}
    }
    
    else
    {
        return "No";
    }
    
}

int main()
{
	string abc;
	cout<<"Enter String : ";
	cin>> abc;

	cout << check(abc);
	return 0;
}