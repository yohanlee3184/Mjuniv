
public class Tank extends Unit {

		public int x_, y_; // position
		public int health_ = 10;
		public Tank(int x, int y) {
			x_ = x; y_ = y;
		}
		@Override
		public boolean areYouThere(int x, int y) {
			if ( x_-2 <= x && x <= x_ + 2
					&& y_-2 <= y && y <= y_+2) {
				System.out.println("Tank here.");
				return true;
			}
			return false;
		}
		@Override
		public void damage(int dm) {
			health_ -= dm;
			if (health_ < 0) {
				System.out.println("Tank destoyed");
			} else {
				System.out.println("Remaining health: "  + health_);
			}

	}
}
