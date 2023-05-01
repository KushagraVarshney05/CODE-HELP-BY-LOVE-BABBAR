 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> v;
        int first=0;
        int second=0;
        int k=0;
       while(first<n&& second<m)
       {
           
           if(arr1[first]==arr2[second])
           {
               v.push_back(arr1[first]);
               first++;
               second++;
           k++;
           }
           
           else if(arr1[first]<arr2[second])
           {
           v.push_back(arr1[first]);
           first++;
           k++;
           }
           else 
           {
           v.push_back(arr2[second]);
           second++;
           k++;
           }
       }
       while(first<n)
       {
           v.push_back(arr1[first]);
           first++;
       }
      while(second<m)
      {
          v.push_back(arr2[second]);
          second++;
      }
    //   for(int i=0;i<v.size()-1;)
    //   {
    //       if(v[i]==v[i+1])
    //       {
    //         vector<int>::iterator it;
    //         it = v.begin()+i;
    //         v.erase(it);
    //       }
    //       else
    //       i++;
    //   }
    v.erase(std::unique(v.begin(),v.end()), v.end());
      
     return v;
        
    }