int repeats(std::vector<int>v){
  int sum = 0;
  sort(v.begin(), v.end());
  for(int i = 1 ; i < v.size() - 1; i++)
    if(v[i] != v[i - 1] && v[i] != v[i + 1]) sum += v[i];
  if(v[v.size() - 1] != v[v.size() - 2]) sum += v[v.size() - 1];
  if(v[0] != v[1]) sum += v[0];
  return sum;
}
