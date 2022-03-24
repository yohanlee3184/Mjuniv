
public class CardApp {

	public static void main(String[] args) {

		Card[] myCard = new Card[52];
		int z = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 13; j++) {
				myCard[z] = new Card(i, j);
				z++;
			}
			}
			
			for(int i=0;i<52;i++) {
				myCard[i].print();
			}
		}

	}

