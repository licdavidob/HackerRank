<?php

function sockMerchant($n, $ar)
{
    $socks = array_count_values($ar);
    $pairs = 0;
    foreach ($socks as $sock) {
        $pairs += floor($sock / 2);
    }
    return $pairs;
}

$n = 9;
$ar = [10, 20, 20, 10, 10, 30, 50, 10, 20];

echo sockMerchant($n, $ar);
