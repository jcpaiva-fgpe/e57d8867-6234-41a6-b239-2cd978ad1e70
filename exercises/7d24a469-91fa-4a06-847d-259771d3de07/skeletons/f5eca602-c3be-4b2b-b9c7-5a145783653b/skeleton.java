public static void main(String[] args) {
	 double lun, lar, alt;
	 double Abase, Alat, Atot;
	 double V;
	 Scanner s = new Scanner(System.out);
	lun = s.nextDouble();
 	lar = s.nextDouble();
 	alt = s.nextDouble();

 	Abase = lun * lar;
 	Alat = 2 * (lun + lar) * alt;
 	Atot = Alat + 2 * Abase;
 	V = lun * lar * alt;

	 System.out.format("%.2f%n", Atot);
	 System.out.format("%.2f%n", V);
	 }
	 