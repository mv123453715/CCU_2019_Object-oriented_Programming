import lib.diamond;
public class test {
  public static void main(String [] args) {
    diamond d1 = new diamond (-5);
    diamond d2 = new diamond (7,'^');
    diamond d3 = new diamond (12,'X','O');
    diamond d4 = new diamond (50,'$','o');
    System.out.println("d1 has size = " + d1.GetSize() + " utils");
    
    d1.Draw();System.out.println("d2 has size = " + d2.GetSize() + " utils");
    d2.Draw();System.out.println("d3 has size = " + d3.GetSize() + " utils");
    d3.Draw();System.out.println("d4 has size = " + d4.GetSize() + " utils");
    d4.Draw();d1.Shrink(); d2.Shrink();d3.Grow(); 
    d4.Grow();System.out.println("d1 now has size = " + d1.GetSize() + " utils");
    System.out.println("d2 now has size = " + d2.GetSize() + " utils");
    System.out.println("d3 now has size = " + d3.GetSize() + " utils");
    System.out.println("d4 now has size = " + d4.GetSize() + " utils");
    System.out.println("d2 has perimeter = " + d2.Perimeter() + " utils");
    System.out.println("d3 has perimeter = " + d3.Perimeter() + " utils");
    System.out.println("d2 has area = " + d2.Area() + " utils");
    System.out.println("d3 has area = " + d3.Area() + " utils");
    d1.Draw();
    d1.Grow();
    System.out.println("... and grows:");
    d1.Draw();System.out.println();
    d1=d2;
    System.out.println("d1 now has size = " + d1.GetSize() + " utils");
    d1.Draw();
    d2.SetBorder('@');
    d2.SetFill('-');
    System.out.println("d2 now looks like:");
    d2.Draw();System.out.println();
    d2.SetBorder('\n');
    d2.SetFill('\n');
    System.out.println("d2 now looks like:");
    d2.Draw();System.out.println();
    System.out.println("Here is a summary on d3:");
    d3.Summary();
    
  }//main
}//test class