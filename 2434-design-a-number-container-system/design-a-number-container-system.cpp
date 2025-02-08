class NumberContainers {
public:
    NumberContainers() {
        
    }
//   it map the index to the number
   unordered_map<int,int>indextonum;

   unordered_map<int,set<int>>numtoindex;

    void change(int index, int number) {
      if(indextonum.find(index)!=indextonum.end())
      {
        int num=indextonum[index];
        numtoindex[num].erase(index);
        if(numtoindex[num].empty())
        {
            numtoindex.erase(num);
        }
      }
      indextonum[index]=number;
      numtoindex[number].insert(index);

    }
    int temp=-1;
    int find(int number) {
    if(numtoindex.find(number)!=numtoindex.end())
    {
        return *numtoindex[number].begin();
    }
    return -1;


    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */