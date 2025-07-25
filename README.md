# Factorial-Large-Number
A FACTORIAL CALCULATOR WHICH CAN CALCULATE BIG INT VALUES USING VECTORS 
# Factorial of Large Numbers in C++

This is a simple C++ program I wrote to calculate the **factorial of large numbers**, like 100!, 500!, or even 1000!, which can't be stored using normal `int` or `long long` types because the values get way too big.

Instead of using built-in data types, I’ve used a `vector<int>` to store each digit of the factorial. The digits are stored in reverse order (least significant digit first), which makes the multiplication process easier to manage.

---------------------------------------------------------------------------

## 🔧 How It Works

- The result of the factorial is stored as a vector of digits.
- For every number from 1 to `n`, we multiply the current result with the number.
- During multiplication, we take care of the carry manually (just like how we multiply numbers on paper).
- After all multiplications, we print the vector in reverse to show the correct number.

---------------------------------------------------------------------------

## Example

If you enter:100


The output will be:93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000

t will print the full value of 100! — which is a number with **158 digits**.

---------------------------------------------------------------------------

##  Key Function

### `push_on_vec_morethanone(int p, vector<int> &vec, int &carry)`

This function handles multiplication of the entire number (stored in `vec`) with a single integer `p`. It updates each digit and manages the carry as it goes.

---------------------------------------------------------------------------

##  Why a Vector?

Because factorial values grow extremely fast, even `long long` can’t handle values above 20!. A `vector<int>` lets us simulate multiplication manually by keeping every digit separately. It’s like writing the number on paper and doing the multiplication ourselves.

---------------------------------------------------------------------------

## How to Run

Make sure you have a C++ compiler like `g++`.
---------------------------------------------------------------------------

### Compile:
```bash
g++ factorial.cpp -o factorial
