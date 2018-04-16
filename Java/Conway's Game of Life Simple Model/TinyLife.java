package uk.ac.cam.bat34.prejava.ex2;

public class TinyLife {
	public static boolean getCell(long world, int col, int row){
		int position = row*8+ col;
		boolean value1;
		if (((col <8) & (row < 8 ))  & ((col>=0) & (row >=0))){ 
		value1 = PackedLong.get(world, position);
		return value1;
		}
		else {value1 = false; 
		return value1;
		}
		
	}

	public static long setCell(long world, int col, int row, boolean newval){
		int position = row*8+ col;
		if (((col <8) & (row < 8 ))  & ((col>=0) & (row >=0))){
		world = PackedLong.set(world,position,newval);
		return world;
		}
		else {world = 0L; 
		return world;} 
	}
	
	public static void print(long world) { 
   System.out.println("-"); 
   for (int row = 0; row < 8; row++) { 
      for (int col = 0; col < 8; col++) {
         System.out.print(getCell(world, col, row) ? "#" : "_"); 
      }
      System.out.println(); 
   } 
}
	public static int countNeighbours(long world, int col, int row) {
	int result = 0;
	if (getCell(world,col,row)==true) {
		for (int alteredr = row - 1; ((alteredr)<(row+2)); alteredr++) {
			for (int alteredc = col-1; ((alteredc)<(col+2)); alteredc++) {
			if (getCell(world,alteredc,alteredr)==true){result++;}
			
			}
		}
	result = (result>0) ? result-1 : 0;
	return result;
	}
	else {
		for (int alteredr= row-1; ((alteredr)<(row+2)); alteredr++) {
			for (int alteredc = col-1; ((alteredc)<(col+2)); alteredc++) {
			if (getCell(world,alteredc,alteredr)==true){result++;}
		
			}
		}
	
	result = (result>0) ? result : 0;
	return result; 
	}
	
	}
	public static boolean computeCell(long world,int col,int row) {

   // liveCell is true if the cell at position (col,row) in world is live
   boolean liveCell = getCell(world, col, row);
    
   // neighbours is the number of live neighbours to cell (col,row)
   int neighbours = countNeighbours(world, col, row);

   // we will return this value at the end of the method to indicate whether 
   // cell (col,row) should be live in the next generation
   boolean nextCell = false;
    
   //A live cell with less than two neighbours dies (underpopulation)
   if (neighbours < 2) {
      nextCell = false;
   }
 
   //A live cell with two or three neighbours lives (a balanced population)
   //TODO: write a if statement to check neighbours and update nextCell
   if ((neighbours ==2 | neighbours ==3)&liveCell){
	   nextCell=true;
   }

   //A live cell with with more than three neighbours dies (overcrowding)
   //TODO: write a if statement to check neighbours and update nextCell
   if (liveCell&neighbours >3) {nextCell=false;}
  

   //A dead cell with exactly three live neighbours comes alive
   //TODO: write a if statement to check neighbours and update nextCell
   if (!liveCell & neighbours==3){nextCell=true;}
    
   return nextCell;
}

	public static long nextGeneration(long world) {
	long world1= world; 
	for (int row = 0; row < 8; row++) { 
      for (int col = 0; col < 8; col++){
	  world1=setCell(world1,col,row,computeCell(world,col,row));
	  }
	  }
	return world1;
	}

	
	public static void play(long world) throws java.io.IOException {
   int userResponse = 0;
   while (userResponse != 'q') {
      print(world);
      userResponse = System.in.read();
      world = nextGeneration(world);
   }
}
	
	public static void main(String[] args) throws java.io.IOException {
   play(Long.decode(args[0]));
}
}