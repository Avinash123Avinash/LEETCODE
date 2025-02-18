class ProductOfNumbers {
public:
    ProductOfNumbers() {}
    vector<int> ans;
    void add(int num) { ans.push_back(num); }

    int getProduct(int k) {
        int p = 1;
        if (k >= ans.size()) {
            for (int i = ans.size() - 1; i >= 0; i--) {
                p = p * (ans[i]);
            }
        }
         else {
            for (int i = ans.size() - 1; i > ans.size() - k - 1; i--) {
                p = p * (ans[i]);
            }
        }
        return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */