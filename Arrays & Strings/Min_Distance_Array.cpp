    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int xptr = -1, yptr = -1;
        int dist = INT_MAX;
        
        for(int i=0; i<arr.size(); ++i){
            if(arr[i] == x)
                xptr = i;
            if(arr[i] == y)
                yptr = i;
            
            if(xptr!=-1 && yptr!=-1){
                dist = min(dist, abs(xptr - yptr));
            }
        }
        return dist==INT_MAX ? -1 : dist;
    }
