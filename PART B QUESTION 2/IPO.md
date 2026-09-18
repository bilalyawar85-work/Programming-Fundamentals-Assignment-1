## IPO Chart

| Input | Process | Output |
|---|---|---|
| Number of students `N` | Set `sum = 0` and `fail = 0` | Student Result |
| Marks of 5 subjects | Take marks of all 5 subjects | Fail - Subject Deficiency |
| Passing mark = 33 | Add all marks to get sum | Distinction |
| | Check if any mark is below 33 | Pass |
| | Calculate `avg = sum / 5` | Fail |
| | If any mark < 33, student fails | |
| | If average >= 80, student gets Distinction | |
| | If average >= 60, student gets Pass | |
| | Otherwise, student fails | |
| | Repeat for all students | |
