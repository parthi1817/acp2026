#!/usr/bin/env bats

@test "Swap arrays - normal case" {
    run ./demo5 <<EOF
3
1
2
3
4
5
6
EOF

    [ "$status" -eq 0 ]
    [[ "$output" == *"First array:"* ]]
    [[ "$output" == *"4 5 6"* ]]
    [[ "$output" == *"Second array:"* ]]
    [[ "$output" == *"1 2 3"* ]]
}

@test "Swap arrays - single element" {
    run ./demo5 <<EOF
1
10
20
EOF

    [ "$status" -eq 0 ]
    [[ "$output" == *"20"* ]]
    [[ "$output" == *"10"* ]]
}

@test "Swap arrays - same values" {
    run ./demo5 <<EOF
3
7
7
7
7
7
7
EOF

    [ "$status" -eq 0 ]
    [[ "$output" == *"7 7 7"* ]]
}