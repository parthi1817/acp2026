#!/usr/bin/env bats

setup() {
    gcc demo1.c -o demo1.exe
}

@test "Test with positive float values" {
    run ./demo1.exe <<EOF
5
1.2 3.5 2.1 9.8 4.6
EOF

    echo "$output"

    [[ "$output" == *"Largest number is:9.800000"* ]]
    [[ "$output" == *"Largest index is:3"* ]]
}

@test "Test with negative values" {
    run ./demo1.exe <<EOF
4
-1.5 -3.2 -0.5 -2.0
EOF

    [[ "$output" == *"Largest number is:-0.500000"* ]]
    [[ "$output" == *"Largest index is:2"* ]]
}

@test "Test with all same values" {
    run ./demo1.exe <<EOF
3
2.2 2.2 2.2
EOF

    [[ "$output" == *"Largest number is:2.200000"* ]]
    [[ "$output" == *"Largest index is:0"* ]]
}