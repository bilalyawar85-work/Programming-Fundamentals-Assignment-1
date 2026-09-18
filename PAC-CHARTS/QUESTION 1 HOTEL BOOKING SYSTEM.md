| Given Data | Required Results |
|---|---|
| Season | Total Bill |
| Room Type | |
| Number of Nights | |

| Processing Required | Solution Alternatives |
|---|---|
| Determine rate according to season and room type | Peak Standard → 5000 |
| `Cost = Rate × Nights` | Peak Deluxe → 8000 |
| If nights > 7, calculate 15% discount | Peak Suite → 12000 |
| `Discount = Cost × 0.15` | Off-peak Standard → 3000 |
| `Total = Cost - Discount` | Off-peak Deluxe → 5000 |
| If nights ≤ 7, `Total = Cost` | Off-peak Suite → 8000 |
| Display total | Use if/else-if conditions |
