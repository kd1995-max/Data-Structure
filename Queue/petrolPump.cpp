   int tour(petrolPump p[],int n)
    {
       //Your code here
       int start =0;
       int required_fuel=0;
       int extra_fuel=0;
       
       for(int i=0;i<n;i++)
       {
           extra_fuel +=(p[i].petrol-p[i].distance);
           
           if(extra_fuel<0)
           {
               required_fuel +=extra_fuel;
               extra_fuel=0;
               start=i+1;
           }
       }
       if((required_fuel + extra_fuel > 0))
       return start;
       return -1;
    }
