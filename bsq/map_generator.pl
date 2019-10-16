#!/usr/bin/perl
use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) >= 3);

my @chars = ( '.', 'o', 'x' );

my ($x, $y, $density, $e, $o, $f);
if (scalar(@ARGV) == 6)
{
	($x, $y, $density, $e, $o, $f) = @ARGV;
}
else
{
	($x, $y, $density) = @ARGV;
	($e, $o, $f) = @chars;
}
print "$y$e$o$f\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density)
		{
			print "$o";
		}
		else
		{
			print "$e";
		}
	}
	print "\n";
}
