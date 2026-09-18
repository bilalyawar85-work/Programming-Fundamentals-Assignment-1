| Given Data | Required Results |
|---|---|
| Quantity | Subtotal |
| Price | Discounted Amount |
| Discount Percentage | Final Bill |
| Tax Percentage | Error Messages |

| Processing Required | Solution Alternatives |
|---|---|
| Validate quantity | If quantity ≤ 0 → Invalid Quantity |
| Validate price | If price ≤ 0 → Invalid Price |
| Validate discount | If discount < 0 or discount > 100 → Invalid Discount % |
| Validate tax | If tax < 0 or tax > 100 → Invalid Tax % |
| Calculate `subtotal = quantity × price` | Use if/else-if conditions |
| Calculate discount | `Discount = Subtotal × Discount / 100` |
| Calculate discounted amount | `Discounted Amount = Subtotal - Discount` |
| Calculate tax | `Tax = Discounted Amount × Tax / 100` |
| Calculate final bill | `Bill = Discounted Amount + Tax` |
| Display results | |
