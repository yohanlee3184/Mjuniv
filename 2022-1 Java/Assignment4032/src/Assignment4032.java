class MyInt{
    public MyInt(int x){ value = x; }
    public void setValue(int x){ value = x; }
    public int value;
}
class Assignment4032{
    public static void fun(MyInt x){ 
    	x = new MyInt(1);
    }
    public static void main(String[] args){
        MyInt xx;
        xx  = new MyInt (999);
        fun(xx);
        System.out.println(xx.value);
    }
}

