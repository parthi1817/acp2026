#!/usr/bin/env bats

# Compile before running tests
setup() {
    gcc demo3.c -o demo3
}

@test "Test with 3 rectangles" {
    run ./demo3 <<EOF
3
2
3
4
5
6
7
EOF

    # Check if areas are correct
    [[ "$output" == *"Rectangle 1 area:6"* ]]
    [[ "$output" == *"Rectangle 2 area:20"* ]]
    [[ "$output" == *"Rectangle 3 area:42"* ]]

    # Check largest rectangle
    [[ "$output" == *"Largest Rectangle 3 Area is"* ]]
}

@test "Test with 1 rectangle" {
    run ./demo3 <<EOF
1
5
4
EOF

    [[ "$output" == *"Rectangle 1 area:20"* ]]
    [[ "$output" == *"Largest Rectangle 1 Area is"* ]]
}

@test "Test with equal areas" {
    run ./demo3 <<EOF
2
2
5
5
2
EOF

    # Both areas = 10
    [[ "$output" == *"Rectangle 1 area:10"* ]]
    [[ "$output" == *"Rectangle 2 area:10"* ]]

    # First one should be considered largest
    [[ "$output" == *"Largest Rectangle 1 Area is"* ]]
}