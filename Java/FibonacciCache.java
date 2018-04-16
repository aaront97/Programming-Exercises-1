package uk.ac.cam.bat34.prejava.ex4;

public class FibonacciCache {

   // Uninitialised array
   public static long[] fib = null;

   public static void store() throws Exception {
      //TODO: throw an Exception with a suitable message if fib is null
      if (fib == null){
	  throw new Exception("Please fill the reset method");}
      //TODO: using a for loop, fill "fib" with the Fibonacci numbers
		else {
			fib[0] = 1;
			fib[1] = 1; 
			for(int x=2; x<fib.length; x++) {
			fib [x] = fib [x-1] + fib [x-2];
			}
      //      e.g. if length of "fib" is zero, store nothing; and
      //           if length is six, store 1,1,2,3,5,8 in "fib"
   }
   }

   public static void reset(int cachesize) {
      //TODO: make fib point to a new array of length cachesize
	  long [] newfib = new long [cachesize];
	  fib = newfib; 
      //TODO: using a for loop, set all the elements of fib to zero
	  for (int b=0 ; b<fib.length; b++) {
	  fib[b] = 0 ; }
   }
 
   public static long get(int i) throws Exception/*TODO: declare the exception*/ {
      //TODO: throw an Exception with a suitable message if fib is null
		if (fib == null) {
		throw new Exception ("Please fill the reset method");
		} 
		else {
			if (i>=fib.length) {
				throw new Exception ("Please fill the reset method");
		}
			else {return fib[i];
			}
		}
   }
			
			
      //TODO: return the value of the element in fib found at index i
      //      e.g. "get(3)" should return the fourth element of fib

      //TODO: your code should throw an Exception with a suitable message
      // if the value requested is out of bounds of the array
   


   public static void main(String[] args) {
      //TODO: catch exceptions as appropriate and print error messages
      reset(20);
      try {
		store(); 
	  } 
	  catch (Exception e) {
		  System.out.print(e.getMessage());
	  }
	  try {
		int i = Integer.decode(args[0]);
		System.out.println(get(i));
	  }
   catch (Exception e){ 
		System.out.print(e.getMessage());}
	
   }
  
}