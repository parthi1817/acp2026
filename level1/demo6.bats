#!/usr/bin/env bats

# Compile the program before running tests
setup() {
    gcc demo6.c -o demo6
}

# Test 1: Basic functionality
@test "Check dynamic array creation and printing" {
    run ./demo6 <<EOF
5
1 2 3 4 5
EOF

    echo "$output"

    [[ "$output" == *"The array elements are:"* ]]
    [[ "$output" == *"1 2 3 4 5"* ]]
}

# Test 2: Different input
@test "Check with different numbers" {
    run ./demo6 <<EOF
3
10 20 30
EOF

    echo "$output"

    [[ "$output" == *"10 20 30"* ]]
}

# Test 3: Single element
@test "Check single element array" {
    run ./demo6 <<EOF
1
99
EOF

    echo "$output"

    [[ "$output" == *"99"* ]]
}

# Test 4: Edge case (size 0)
@test "Check zero size array" {
    run ./demo6 <<EOF
0
EOF

    echo "$output"

    [[ "$status" -eq 0 ]]
}