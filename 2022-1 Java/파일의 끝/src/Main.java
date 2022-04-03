class MyInteger{
	public static void fun(Integer x){ x = 1; }
	  public static void main(String[] av){
	      Integer xx;
	      xx  = new Integer(999);
	      fun(xx);
	      System.out.println(xx);
	   }
	}
