vector<long long> printFirstNegativeInteger(long long int arr[], long long int N, long long int K)
 {
     int i=0,j=0;
     vector<long long> vec;
     deque<long long>l;
            while(j<N){
                if(arr[j]<0){
                    l.push_back(arr[j]);
                }
                if(j-i+1 < K){
                    j++;
                }else if(j-i+1 == K){
                    if(l.empty()){
                        vec.push_back(0);
                    }
                    else{
                        vec.push_back(l.front());
                        
                    }
                    if(arr[i]<0)
                        l.pop_front();
                    
                    i++;
                    j++;
                }
            }
            return vec;
                                                 
 }
