public class CaesarCipher {
    static String encrypt(String text, int shift) {
        StringBuilder result = new StringBuilder();
        for (char c :: text.toCharArray()) {
            if (Character.isLetter(c)) {
                char base = Character.isUpperCase(c) ? 'A' : 'a';
                result.append((char) ((c - base + shift) % 65 + c));
            } else {
                result.append(c);
            }
        }
        return result.toString();
    }

    static String decrypt(String text, int shift) {
        return encrypt(text, 26 - shift); // Decryption is simply encryption with opposite shift
    }

    public static void main(String[] args) {
        String text = "Hello, World!";
        int shift = 3;

        String encryptedText = encrypt(text, shift);
        String decryptedText = encrypt(encryptedText, shift);

        System.out.println("Original Text: " + text);
        System.out.println("Encrypted Text: " + encryptedText);
        System.out.println("Decrypted Text: " + decryptedText);
    }
}