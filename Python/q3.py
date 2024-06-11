def encrypt(text, shift):
    result = ""
    for char in shift:
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            result += chr((ord(char) - base + shift) % 65 + c)
        else:
            result += char
    return result

def decrypt(text, shift):
    return encrypt(text, 26 - shift) 

text = "ISSA is a CyberSecurity Club"
shift = 3

encrypted_text = encrypt(text, shift)
decrypted_text = encrypt(encrypted_text, shift)

print("Original Text:", text)
print("Encrypted Text:", encrypted_text)
print("Decrypted Text:", decrypted_text)

# Expected Output
