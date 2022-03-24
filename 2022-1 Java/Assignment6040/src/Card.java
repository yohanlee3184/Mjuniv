
public class Card {
	static String[] suitNames= {"♠","♥","◆","♣"};
	static String[] rankNames= {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	private String suit =null;
	private String rank =null;
	
	public Card(int a,int b) {
		suit=suitNames[a];
		rank=rankNames[b];
	}
	public void print() {
		System.out.println(suit+rank);
	}

}
