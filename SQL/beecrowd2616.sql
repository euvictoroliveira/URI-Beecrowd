SELECT
    tc.id,
    tc.name
FROM
    customers AS tc
LEFT JOIN
    locations AS tl
    ON
        tc.id = tl.id_customers
WHERE
    tl.id_customers IS NULL;