std::vector<int> reverseSeq(int n) {
  std::vector<int> v;
  for(int i = n; i > 0; i--)
    v.push_back(i);
  return v;
}
