#include "object-store.h"
				    struct lline *newline, int lennew,
	if (newline == NULL)
		return newline;
		for (j = 1, newend = newline; j < lennew + 1; j++) {
				newline = lline->next;
	newend = newline;
static char *grab_blob(struct repository *r,
		       const struct object_id *oid, unsigned int mode,
		*size = fill_textconv(r, textconv, df, &blob);
		blob = read_object_file(oid, &type, size);
static void combine_diff(struct repository *r,
			 const struct object_id *parent, unsigned int mode,
	parent_file.ptr = grab_blob(r, parent, mode, &sz, textconv, path);
	int abbrev = opt->flags.full_index ? GIT_SHA1_HEXSZ : DEFAULT_ABBREV;
		abb = find_unique_abbrev(&elem->parent[i].oid,
	abb = find_unique_abbrev(&elem->oid, abbrev);
	userdiff = userdiff_find_by_path(opt->repo->index, elem->path);
	if (opt->flags.allow_textconv)
		result = grab_blob(opt->repo, &elem->oid, elem->mode, &result_size,
			if (resolve_gitlink_ref(elem->path, "HEAD", &oid) < 0)
				result = grab_blob(opt->repo, &elem->oid,
						   elem->mode, &result_size,
						   NULL, NULL);
				result = grab_blob(opt->repo, &oid, elem->mode,
			result_size = fill_textconv(opt->repo, textconv, df, &result);
				if (convert_to_git(rev->diffopt.repo->index,
						   elem->path, result, len, &buf, global_conv_flags_eol)) {
			buf = grab_blob(opt->repo,
					&elem->parent[i].oid,
			if (oideq(&elem->parent[i].oid,
				  &elem->parent[j].oid)) {
			combine_diff(opt->repo,
				     &elem->parent[i].oid,
	diffopts.flags.recursive = 1;
	diffopts.flags.allow_external = 0;
			opt->flags.follow_renames	||
			(opt->pickaxe_opts & DIFF_PICKAXE_KINDS_MASK)	||