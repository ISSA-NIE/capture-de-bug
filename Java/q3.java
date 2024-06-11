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
        return encrypt(text, 26 - shift); 
    }

    public static void main(String[] args) {
        String text = "ISSA is a CyberSecurity Club";
        int shift = 3;

        String encryptedText = encrypt(text, shift);
        String decryptedText = encrypt(encryptedText, shift);

        System.out.println("Original Text: " + text);
        System.out.println("Encrypted Text: " + encryptedText);
        System.out.println("Decrypted Text: " + decryptedText);
    }
}

// Expected Output
// Original Text: ISSA is a CyberSecurity Club
// Encrypted Text: LVVD lv d FbehuVhfxulwb Foxe
// Decrypted Text: ISSA is a CyberSecurity Club