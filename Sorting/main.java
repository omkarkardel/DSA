 import java.util.*;
   class Output
   {
       public static void addNumbers(List<? super Integer> list)
       {
           for (int i = 1; i <= 10; i++)
           {
               i++;
           }
       }
       public static void main(String args[])
       {
          List<Double> ld = Arrays.asList();
          addNumbers(ld);
          System.out.println("1");
       }
   }