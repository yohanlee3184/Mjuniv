
public class CardApp {
	Card[] myCard = new Card[52];
	public void prepareCards() {
		int z = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 13; j++) {
				myCard[z] = new Card(i, j);
				z++;
			}//이게 바람직함
			}
	}
	
	public static void main(String[] args) {

		
		
			
			for(int i=0;i<52;i++) {
				myCard[i].print();
			}
		}

	}

