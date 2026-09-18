## IPO Chart

| Input | Process | Output |
|---|---|---|
| Number of requests `N` | Set current floor = 0 | Moving Up |
| Requested floor | Compare requested floor with current floor | Moving Down |
| Current floor | If requested floor > current floor, show Moving Up | Doors Opening |
| | If requested floor < current floor, show Moving Down | |
| | If requested floor = current floor, show Doors Opening | |
| | Update current floor | |
| | Repeat until all requests are completed | |
