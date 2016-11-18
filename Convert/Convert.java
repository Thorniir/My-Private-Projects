import java.util.Scanner;

public class nauka 
{
   
    
    public static void main(String[] args)
    { 
        int  liczba_dziesietna ;


        Scanner wpisz = new Scanner(System.in);
       System.out.print("Liczba dziesietna: "); liczba_dziesietna=wpisz.nextInt();
       
  dwojkowy(liczba_dziesietna);
  osemkowy(liczba_dziesietna);
  szesnastkowy(liczba_dziesietna);
       
        System.out.print("\n");
        
    }
    
    public static void dwojkowy(int liczba_dziesietna)
    {
        String wynik_dwojkowy = "";
    do {
	if ((liczba_dziesietna % 2) == 1)
		wynik_dwojkowy = '1' + wynik_dwojkowy;
	else
		wynik_dwojkowy = '0' + wynik_dwojkowy;
	liczba_dziesietna /= 2;
	 
} while (liczba_dziesietna != 0);
System.out.print("\n");
 
System.out.print("==================================\n");  
System.out.print("Liczba w systemie dwojkowym: "); System.out.print(wynik_dwojkowy);

    }
 
    public static void osemkowy(int liczba_dziesietna)
    {
       String wynik_osemkowy = "";
        do {
 
	if ((liczba_dziesietna % 8) == 0)
		wynik_osemkowy = '0' + wynik_osemkowy;
	if ((liczba_dziesietna% 8) == 1)
		wynik_osemkowy = '1' + wynik_osemkowy;
	if ((liczba_dziesietna% 8) == 2)
		wynik_osemkowy = '2' + wynik_osemkowy;
	if ((liczba_dziesietna% 8) == 3)
		wynik_osemkowy = '3' + wynik_osemkowy;
	if ((liczba_dziesietna % 8) == 4)
		wynik_osemkowy = '4' + wynik_osemkowy;
	if ((liczba_dziesietna% 8) == 5)
		wynik_osemkowy = '5' + wynik_osemkowy;
	if ((liczba_dziesietna % 8) == 6)
		wynik_osemkowy = '6' + wynik_osemkowy;
	if ((liczba_dziesietna% 8) == 7)
		wynik_osemkowy = '7' + wynik_osemkowy;
	 
 
	liczba_dziesietna/= 8;


} while (liczba_dziesietna!= 0);
System.out.print("\n");
System.out.print("Liczba w systemie osemkowym: "); System.out.print(wynik_osemkowy);
    }
    
    public static void szesnastkowy(int liczba_dziesietna)
    {
        String wynik_szesnastkowy = "";
       do {
 
	if ((liczba_dziesietna % 16) == 0)
		wynik_szesnastkowy = '0'+ wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 1)
		wynik_szesnastkowy = '1' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 2)
		wynik_szesnastkowy = '2' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 3)
		wynik_szesnastkowy = '3' + wynik_szesnastkowy;
	if ((liczba_dziesietna % 16) == 4)
		wynik_szesnastkowy = '4' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 5)
		wynik_szesnastkowy = '5' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 6)
		wynik_szesnastkowy = '6' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 7)
		wynik_szesnastkowy = '7' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 8)
		wynik_szesnastkowy = '8' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 9)
		wynik_szesnastkowy = '9' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 10)
		wynik_szesnastkowy = 'A' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 11)
		wynik_szesnastkowy = 'B' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 12)
		wynik_szesnastkowy = 'C' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 13)
		wynik_szesnastkowy = 'D' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 14)
		wynik_szesnastkowy = 'E' + wynik_szesnastkowy;
	if ((liczba_dziesietna  % 16) == 15)
		wynik_szesnastkowy = 'F' + wynik_szesnastkowy;

	liczba_dziesietna /= 16;

} while (liczba_dziesietna  != 0);
System.out.print("\n");
System.out.print("Liczba w systemie szesnastkowym: "); System.out.print( wynik_szesnastkowy);

    }
}

