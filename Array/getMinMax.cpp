
method 1:-
pair<long long, long long> getMinMax(long long a[], int n) {
   long long max_ = INT_MIN;
   long long min_ = INT_MAX;
   
    for(int i = 0; i < n; i++)
    {
           max_ = max(max_ , a[i]);
           min_ = min(min_, a[i]);
    }
    
    // pair<long long,long long> p;
    // p = {min_,max_};
    
    return {min_,max_};
}

method 2:-
pair<long long, long long> getMinMax(long long a[], int n) {
   
    auto x = min_element(a , a + n);
    auto y = max_element(a , a + n);
    
    return {*x,*y};
}
method 3:-
pair<long long, long long> getMinMax(long long a[], int n) {
   long long max_=INT_MIN;
   long long min_=INT_MAX;
   
    for(int i=0;i<n;i++)
    {
        min_=min(min_,a[i]);
        max_=max(max_, a[i]);
    }
    return {min_,max_};
}
