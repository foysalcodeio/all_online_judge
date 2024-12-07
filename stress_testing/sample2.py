import random
import subprocess

def generate_test_case():
    n = random.randint(1, 10)  # Example: random integer input size
    array = [random.randint(0, 100) for _ in range(n)]
    return f"{n}\n" + " ".join(map(str, array))

def run_solution(solution, input_data):
    process = subprocess.run(
        ["python3", solution],
        input=input_data,
        text=True,
        capture_output=True
    )
    return process.stdout.strip()

def main():
    iteration = 0
    while True:
        iteration += 1
        print(f"Test #{iteration}")
        test_case = generate_test_case()
        
        output1 = run_solution("brute_force.py", test_case)
        output2 = run_solution("optimized.py", test_case)
        
        if output1 != output2:
            print("Mismatch found!")
            print("Test Case:")
            print(test_case)
            print("Brute-force Output:", output1)
            print("Optimized Output:", output2)
            break
        else:
            print("Outputs match.")
            
if __name__ == "__main__":
    main()
