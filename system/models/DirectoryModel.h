/* Copyright 2014, Charlie Fyvie-Gauld
*  Distributed under the MIT License (http://opensource.org/licenses/MIT)
*/
#ifndef DIRECTORYMODEL_H
#define DIRECTORYMODEL_H
#include "system/Model.h"
#include "glib_common.h"

/**
 * A general purpose Model for handling directorys
 *
 * This can model the current directory and list different
 * types of files in the directory. Useful for derived
 * classes
 */
class DirectoryModel : public Model {
	protected:
		string path; ///< The string variable for holding the path for the model

		vector<string> ofType(GFileType type);

	public:
		/**
		 * The constructor assigns the path to the model
		 *
		 * @param path The const char* of the path to point the model to
		 * @param PACK Any parent constructor variables
		 */
		TModel DirectoryModel(const char *path, PACK)
		: BModel(Model) {
			this->path.assign(path);
		}
		~DirectoryModel();
};
#endif
