std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result = signature;
    int x, y = signature.size();
    if(y == 0 || n == 0)return {};
    if(n == 1)return {signature[0]};
    if(n == 2)return {signature[0], signature[1]};
    for(int i = y; i < n; i++)
    {
      x = 0;
      x = result[i - 1] + result[i - 2] + result[i - 3];
      result.push_back(x);
    }
  return result;
    
}
