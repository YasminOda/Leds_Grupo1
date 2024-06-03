// C++ code
//
void setup()
{
  pinMode(10, OUTPUT); // esse é da Yasmin
  pinMode(8, OUTPUT); // esse é da Ste
  pinMode(4, OUTPUT); // esse é da Duda
  pinMode(7, OUTPUT); // esse é da Munin
  pinMode(5, OUTPUT); // esse é da Mimi
}

void loop()
{
  digitalWrite(10, HIGH); // Ligar LED Verde_1 (Yasmin)
  delay(500); // (yasmin)
   digitalWrite(8, HIGH); //Ligar LED Amarelo_1 (Ste)
  delay(1550); // (ste)
  digitalWrite(4, HIGH); //Ligar LED Vermelho (duda)
  delay(100); // (duda)
   digitalWrite(7, HIGH); //Ligar LED Verde_2 (munin)
  delay(200); // (Munin)
  digitalWrite(5, HIGH); //Ligar LED Amarelo_2 (Mimi)
  delay(80); //(Mimi)
  
  
  digitalWrite(10, LOW); // Desligar LED Verde_1 (Yasmin)
    delay(500); // (Yasmin)
   digitalWrite(8, LOW); //Desligar LED Amarelo_1 (Ste)
  delay(1550); // (Ste)
  digitalWrite(4, LOW); //Desligar LED Vermelho (duda)
  delay(100); // (duda)
   digitalWrite(7, LOW); //Desligar LED Verde_2 (munin)
  delay(200); // (Munin)
   digitalWrite (5, LOW); //Desligar LED Amarelo_2 (Mimi)
   delay(80); //(Mimi)
  

}
 

   
  
 
 
  
 

  
