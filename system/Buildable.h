#ifndef BUILDABLE_H
#define BUILDABLE_H

/**
 * The base class for any classes that can be made in factories
 *
 * This class type is used in the factory layer for passing back
 * units that have been constructed.
 */
class Buildable { };

/**
 * The base structure to define Buildable initialisation parameters
 *
 * This is used to pass - what are essentially - constructor parameters
 * to the factory so it can successfully instantiate any of the dependencies
 * for the buildable object.
 */
struct BuilderInit { };

#endif
