    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int x_ptr=-1, y_ptr=-1;
        int dist = INT_MAX;
        
        for(int i=0; i<arr.size(); ++i){
            if(arr[i] == x)
                x_ptr = i;
            if(arr[i] == y)
                y_ptr = i;
            if(x_ptr!=-1 && y_ptr!=-1){
                dist = min(dist, abs(x_ptr - y_ptr));
        }
        }
   
        if(x_ptr == -1 || y_ptr == -1)
            return -1;
        return dist;
    }
