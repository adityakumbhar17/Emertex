# Bitwise Operators in C

## Overview

Bitwise operators in C allow direct manipulation of individual bits of a number. These operators are efficient and widely used in applications such as embedded systems, graphics programming, cryptography, and networking. This guide provides detailed explanations, use cases, and examples of all bitwise operators and bit manipulation techniques in C.

## Bitwise Operators in C

| Operator | Description                                      | Example                          |
|----------|--------------------------------------------------|----------------------------------|
| `&`      | Bitwise AND: Sets each bit to `1` if both bits are `1` | `a & b`                          |
| '|'      | Bitwise OR: Sets each bit to `1` if one of the bits is `1` | `a | b`                          |
| `^`      | Bitwise XOR: Sets each bit to `1` if only one of the bits is `1` | `a ^ b`                          |
| `~`      | Bitwise NOT: Inverts all bits                     | `~a`                             |
| `<<`     | Left shift: Shifts bits to the left by the specified number of positions | `a << 2`                         |
| `>>`     | Right shift: Shifts bits to the right by the specified number of positions | `a >> 2`                         |
| `&=`     | Bitwise AND assignment                           | `a &= b`                         |
| `|=`     | Bitwise OR assignment                            | `a |= b`                         |
| `^=`     | Bitwise XOR assignment                           | `a ^= b`                         |
| `<<=`    | Left shift assignment                            | `a <<= 2`                        |
| `>>=`    | Right shift assignment                           | `a >>= 2`                        |

---

## Detailed Bitwise Operations

### 1. **Get a Particular Bit**

To retrieve the value of a specific bit at position `n` (0-based indexing from the right), we can use the following logic:

```c
int getBit(int num, int n) {
    return (num >> n) & 1;
}
```

**Example:**
```c
int num = 10;  // 1010 in binary
int bit = getBit(num, 2);  // bit at position 2 is 1
```

### 2. **Set a Particular Bit**

To set a bit at position `n` to `1`, use the bitwise OR operator with a mask:

```c
int setBit(int num, int n) {
    return num | (1 << n);
}
```

**Example:**
```c
int num = 10;  // 1010 in binary
num = setBit(num, 1);  // result is 1011, which is 11 in decimal
```

### 3. **Clear a Particular Bit**

To clear (set to `0`) a specific bit at position `n`, use the bitwise AND operator with a negated mask:

```c
int clearBit(int num, int n) {
    return num & ~(1 << n);
}
```

**Example:**
```c
int num = 11;  // 1011 in binary
num = clearBit(num, 1);  // result is 1010, which is 10 in decimal
```

### 4. **Toggle a Particular Bit**

To toggle a bit at position `n` (flip it from `1` to `0` or from `0` to `1`), use the XOR operator:

```c
int toggleBit(int num, int n) {
    return num ^ (1 << n);
}
```

**Example:**
```c
int num = 10;  // 1010 in binary
num = toggleBit(num, 2);  // result is 0010, which is 2 in decimal
```

### 5. **Get a Pack of Bits (n bits)**

To extract `n` bits starting from position `pos`, first right shift the number to align the desired bits, then mask them:

```c
int getNBits(int num, int pos, int n) {
    return (num >> pos) & ((1 << n) - 1);
}
```

**Example:**
```c
int num = 173;  // 10101101 in binary
int result = getNBits(num, 3, 4);  // Extract 4 bits starting from position 3: 1011 -> result is 11 in decimal
```

### 6. **Set a Pack of Bits (n bits)**

To set `n` bits starting from position `pos`, construct a mask to clear the bits and then OR with the shifted value:

```c
int setNBits(int num, int pos, int n, int value) {
    int mask = ((1 << n) - 1) << pos;
    num &= ~mask;  // Clear the bits
    return num | (value << pos);
}
```

**Example:**
```c
int num = 173;  // 10101101 in binary
num = setNBits(num, 3, 4, 6);  // Set 4 bits at position 3 with 0110 -> result is 10011001, which is 153
```

### 7. **Clear a Pack of Bits (n bits)**

To clear `n` bits starting from position `pos`:

```c
int clearNBits(int num, int pos, int n) {
    int mask = ((1 << n) - 1) << pos;
    return num & ~mask;
}
```

**Example:**
```c
int num = 173;  // 10101101 in binary
num = clearNBits(num, 3, 4);  // Clear 4 bits starting from position 3 -> result is 10000001, which is 129
```

### 8. **Circular Left Shift (Rotate Left)**

In circular left shift, bits shifted out from the left are reintroduced on the right side:

```c
int circularLeftShift(int num, int n) {
    return (num << n) | (num >> (sizeof(num) * 8 - n));
}
```

**Example:**
```c
int num = 5;  // 00000101 in binary
num = circularLeftShift(num, 2);  // result is 00010100, which is 20 in decimal
```

### 9. **Circular Right Shift (Rotate Right)**

In circular right shift, bits shifted out from the right are reintroduced on the left side:

```c
int circularRightShift(int num, int n) {
    return (num >> n) | (num << (sizeof(num) * 8 - n));
}
```

**Example:**
```c
int num = 5;  // 00000101 in binary
num = circularRightShift(num, 2);  // result is 01000001, which is 65 in decimal
```

---

## Practical Applications of Bitwise Operations

1. **Compression**: Bitwise operations are used to manipulate and compress data efficiently, minimizing storage space.
2. **Graphics Programming**: Pixel manipulation in images or animations is often done using bitwise operations.
3. **Cryptography**: Encryption and decryption algorithms rely heavily on bit manipulation.
4. **Data Structures**: Bitwise operations are crucial for implementing bitmaps, hash tables, and bloom filters.
5. **Networking**: IP address manipulation and subnet masking require bitwise operations to extract and modify network information.
6. **Control Registers in Hardware**: Manipulating specific control bits in hardware registers is a key use case in embedded systems programming.

---

## Summary

Bitwise operators provide an efficient way to perform operations on individual bits of an integer. This includes setting, clearing, toggling specific bits, as well as manipulating multiple bits and performing circular shifts. Understanding and mastering these operations are crucial in areas like low-level programming, optimization, and hardware control.

By exploring each operator in-depth with examples and practical applications, this document serves as a comprehensive guide to working with bits in C.

--
