const Collision water_spout_pss_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(7),
	COL_VERTEX(0, -15, 0),
	COL_VERTEX(0, 15, -210),
	COL_VERTEX(-182, 15, -105),
	COL_VERTEX(-182, 15, 105),
	COL_VERTEX(0, 15, 210),
	COL_VERTEX(182, 15, 105),
	COL_VERTEX(182, 15, -105),
	COL_TRI_INIT(SURFACE_NEW_WATER, 6),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(0, 3, 4),
	COL_TRI(0, 4, 5),
	COL_TRI(0, 5, 6),
	COL_TRI(0, 6, 1),
	COL_TRI_STOP(),
	COL_END()
};
