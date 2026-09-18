## IPO Chart

| Input | Process | Output |
|---|---|---|
| Season | Check the season and room type | Total Bill |
| Room Type | Set the room rate according to the room type | |
| Number of Nights | Peak Standard → Rate = 5000 | |
| | Peak Deluxe → Rate = 8000 | |
| | Peak Suite → Rate = 12000 | |
| | Off-peak Standard → Rate = 3000 | |
| | Off-peak Deluxe → Rate = 5000 | |
| | Off-peak Suite → Rate = 8000 | |
| | Calculate `cost = rate × nights` | |
| | If nights > 7, calculate 15% discount | |
| | Calculate `total = cost - discount` | |
| | If nights ≤ 7, total = cost | |
| | Display the total bill | |
