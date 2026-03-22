#!/usr/bin/env bats

setup() {
    gcc demo7.c -o demo7
}

# Test 1: Equal strings
@test "Check equal strings" {
    run ./demo7 <<EOF
hello
hello
EOF

    echo "$output"

    [[ "$output" == *"Both the strings are equal"* ]]
}

# Test 2: First string greater
@test "Check first string greater" {
    run ./demo7 <<EOF
zebra
apple
EOF

    echo "$output"

    [[ "$output" == *"String 1 is greater"* ]]
}

# Test 3: Second string greater
@test "Check second string greater" {
    run ./demo7 <<EOF
apple
zebra
EOF

    echo "$output"

    [[ "$output" == *"String 2 is greater"* ]]
}

# Test 4: Different length strings
@test "Check different length strings" {
    run ./demo7 <<EOF
app
apple
EOF

    echo "$output"

    [[ "$output" == *"String 2 is greater"* ]]
}