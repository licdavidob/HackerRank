<?php

function pageCount($n, $p)
{
    $front = floor($p / 2);
    $back = floor($n / 2) - $front;

    return min($front, $back);
}
