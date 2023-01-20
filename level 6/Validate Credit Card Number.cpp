class Kata {
  public:
  static bool validate(long long int n) {
    std::vector<int> v;int sum = 0;
    while(n){
      v.push_back(n % 10);
      n /= 10;
    }
    for(unsigned int i = 1; i < v.size(); i += 2)
    {
      v[i] *= 2;
      if(v[i] > 9)v[i] = v[i] - 9;
    }
    for(int a : v) sum += a;
    
    return !(sum % 10);
  }
};
