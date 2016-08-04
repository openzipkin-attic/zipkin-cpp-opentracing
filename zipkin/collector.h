#ifndef ZIPKIN_SPAN_H
#define ZIPKIN_SPAN_H

#include <string>
#include <vector>
#include <sstream>
#include <stdint.h>

namespace zipkin
{

class Collector
{
public:
	/**
	 * Destroys this Collector.
	 */
    virtual ~Collector();
};

}

#endif // #define ZIPKIN_SPAN_H
