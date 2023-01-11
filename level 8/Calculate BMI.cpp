std::string bmi(double w, double h) 
{
      if(w / h / h <= 18.5) return "Underweight";
      if(w / h / h <= 25.0) return "Normal";
      if(w / h / h <= 30.0) return "Overweight";
      return "Obese";
}
