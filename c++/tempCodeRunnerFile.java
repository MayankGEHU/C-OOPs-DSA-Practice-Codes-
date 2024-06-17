
class UserInput {
    public static void main(String[] args) {
        int n, i;
        Electricity[] e = new Electricity[10];
        Scanner scanner = new Scanner(System.in);

        System.out.println("\nHow many electricity User: ");
        n = scanner.nextInt();

        for (i = 0; i < n; i++) {
            e[i] = new Electricity();
            System.out.println("\nEnter the Name & Unit’s of Electricity user: ");
            String userName = scanner.next();
            int userUnit = scanner.nextInt();
            e[i].get(userName, userUnit);
            e[i].check();
        }

        System.out.println("\nElectricity User’s: ");
        System.out.println("\nName\t Total cost(Rs)");
        System.out.println("=================================");

        for (i = 0; i < n; i++) {
            e[i].disp();
        }
    }
}
