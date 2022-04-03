public class Main{
    public static void main(String[] args){
        DogSchool ds = new DogSchool("MJ 애견학교" );
        Dog d1 = new Dog("뚱이", "불독");
        Dog d2 = new Dog("철이", "푸들");
        Dog d3 = new Dog("순이", "푸들");
        ds.register(d1);
        ds.register(d2);
        ds.register(d3);

        d1.speak();
        ds.speak();
        d1.rename("띵이");
        ds.speak();
    }
}