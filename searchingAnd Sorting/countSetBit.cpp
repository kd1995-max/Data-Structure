
static int countSetBit(int n)
    {
        int count = 0;
        while(n)
        {
            count++;
            n = n & (n-1);
        }
        return count;
    }
    
    static bool comp(int a , int b)
    {
        return countSetBit(a) > countSetBit(b);
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr , arr + n, comp);
    }

2.

static bool comp(int a , int b)
    {
        return __builtin_popcount(a) > __builtin_popcount(b);
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr , arr + n, comp);
    }
