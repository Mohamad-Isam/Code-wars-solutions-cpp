int persistence(long long n){
    int count=0,mul=1;
    std::string one=std::to_string(n);

    while(one.length() > 1)
    {
      mul = 1;
      for(int i = 0; i < one.length(); i++)
      {
        //convert char to int
        mul *= (one[i] - '0');
      }
      //saving the new value in the one string
      one = std::to_string(mul);
      count++;
    }

    return count;
}
