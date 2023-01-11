int rental_car_cost(int d){
  if(d < 3) return d * 40;
  return d < 7 ? d * 40 - 20 : d * 40 -50;
}
