std::vector<std::string> wave(std::string y){
  std::vector<std::string> v;
  for(int i = 0; i < y.length(); i++)
  {
    if(y[i] == ' ')continue;
    y[i] = toupper(y[i]);
    v.push_back(y);
    y[i] = tolower(y[i]);
  }
  return v;
}
