#!/usr/bin/env bats

# Test file for demo4 program

@test "Search flight - destination found" {
    run ./demo4 <<EOF
101
Delhi
50
102
Mumbai
60
103
Chennai
70
104
Kolkata
80
Mumbai
EOF

    [ "$status" -eq 0 ]
    [[ "$output" == *"Flight found! Flight number is :102"* ]]
}

@test "Search flight - destination not found" {
    run ./demo4 <<EOF
101
Delhi
50
102
Mumbai
60
103
Chennai
70
104
Kolkata
80
Bangalore
EOF

    [ "$status" -eq 0 ]
    [[ "$output" == *"Flight not found"* ]]
}

@test "Multiple flights same destination" {
    run ./demo4 <<EOF
101
Delhi
50
102
Delhi
60
103
Chennai
70
104
Kolkata
80
Delhi
EOF

    [ "$status" -eq 0 ]
    [[ "$output" == *"Flight found!"* ]]
}