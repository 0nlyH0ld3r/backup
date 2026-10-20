int merge_sort(int* v, int len) {
	int *p1, *p2;
	int len1 = (len - 1) / 2;
	int len2 = len - len1;
	p1 = v;
	p2 = (v + (len - 1) / 2);

	if (len1 / 2) merge_sort(p1, len1);
	if (len2 / 2) merge_sort(p2, len2);

	for (int i = 0; i < len1; ++i) {
		// INSERTION p1
	}

	for (int i = 0; i < len2; ++i) {
		// INSERTION p2
	}

	for (int i = 0; i < len; ++i) {
		// MERGE p1 + p2
	}

	return 0;
}
