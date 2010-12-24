#
# Regular cron jobs for the freefem++ package
#
0 4	* * *	root	[ -x /usr/bin/freefem++_maintenance ] && /usr/bin/freefem++_maintenance
