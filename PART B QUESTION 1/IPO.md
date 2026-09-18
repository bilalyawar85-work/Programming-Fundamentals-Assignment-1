## IPO Chart

| **Input** | **Process** | **Output** |
|---|---|---|
| Number of floor requests `N` | Set initial floor to `0` | Moving Up |
| Requested Floor | Compare requested floor with current floor | Moving Down |
| Current Floor | Requested floor > current floor → Moving Up | Doors Opening |
| | Requested floor < current floor → Moving Down | |
| | Requested floor = current floor → Doors Opening | |
| | Update current floor after each request | |
| | Repeat for `N` requests | |
| | Increment request counter | |
