int growingPlant(int upSpeed, int downSpeed, int desiredHeight)
{
    int count = 1, length = upSpeed;
  while(length < desiredHeight){
    count++;
    length += upSpeed - downSpeed;
  }
    return count;
}
