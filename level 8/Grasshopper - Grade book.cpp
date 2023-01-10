char getGrade(int a, int b, int c) {
  int average = (a + b + c) / 3;
  if(average >= 90) return 'A';
  if(average >= 80) return 'B';
  if(average >= 70) return 'C';
  if(average >= 60) return 'D';
  return 'F';
}
