 | Given Data | Required Results |
|---|---|
| Number of floor requests `N` | Moving Up |
| Requested Floor | Moving Down |
| Current Floor | Doors Opening |

| Processing Required | Solution Alternatives |
|---|---|
| Set initial floor to `0` | Requested floor > current floor → Moving Up |
| Compare requested floor with current floor | Requested floor < current floor → Moving Down |
| Update current floor after each request | Requested floor = current floor → Doors Opening |
| Repeat for `N` requests | Use if/else-if/else conditions |
| Increment request counter | |
