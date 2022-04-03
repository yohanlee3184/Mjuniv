
public class Card {
	public static final String[] suitname = { "♠", "♥", "◆", "♣" };
	public static final String[] rankname = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	public void draw(){
		System.out.println(suitname[suit] + rankname[rank]);
	}
	// 멤버 데이터
	public int suit, rank;
	
	public void setRank(int i)  {
		try{if(i<0||i>12) {
			throw(new Exception ("Rank 오류"));
		}
		rank=i;}catch(Exception e) {
			System.out.println(e.getMessage());
		}
	}
	public void setSuit(int i)  {
		try{if(i<0||i>3) {
			throw(new Exception ("Suit 오류"));
		}
		suit=i;}catch(Exception e) {
			System.out.println(e.getMessage());
		}
	}
}