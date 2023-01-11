std::vector<int> digitize(unsigned long n) 
{ std::vector<int> v;
 if(!n) v.push_back(0);
  for(; n; n /= 10)
    v.push_back(n % 10);
 return v;
}
