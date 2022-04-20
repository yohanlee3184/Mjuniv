public class Soldier extends Unit {
	public int x_, y_; // position
	public int health_ = 5;
	public Soldier(int x, int y) {
		x_ = x; y_ = y;
	}
	@Override
	public boolean areYouThere(int x, int y) {
		if ( x_ == x && y_ == y) {
			System.out.println("Soldier here.");
			return true;
		}
		return false;
	}
	@Override
	public void damage(int dm) {
		health_ -= dm;
		if (health_ < 0) {
			System.out.println("Soldier dead.");
		} else {
			System.out.println("Remaining health: "  + health_);
		}
	}
}
