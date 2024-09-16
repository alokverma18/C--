vector<vector<int>> v;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                if(array[i]+array[j]+array[k]==sum){
                    vector<int> x;
                    x.push_back(array[i]);
                    x.push_back(array[j]);
                    x.push_back(array[k]);
                    v.push_back(x);
                }
            }
        }
    }
    sort(v.begin(), v.end());
    return v;