#!/usr/bin/env bats

setup() {
    gcc demo2.c -o demo2
}

@test "Rectangle 1 is largest" {
    run ./demo2 <<EOF
R1
10
5
R2
2
3
R3
1
4
EOF

    echo "$output"
    [[ "$output" == *"R1 is the largest"* ]]
}

@test "Rectangle 2 is largest" {
    run ./demo2 <<EOF
R1
2
2
R2
10
10
R3
1
1
EOF

    [[ "$output" == *"R2 is the largest"* ]]
}

@test "Rectangle 3 is largest" {
    run ./demo2 <<EOF
R1
1
1
R2
2
2
R3
5
5
EOF

    [[ "$output" == *"R3 is the largest"* ]]
}