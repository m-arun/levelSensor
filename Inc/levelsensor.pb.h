/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Wed Dec 27 10:35:23 2017. */

#ifndef PB_LEVELSENSOR_PB_H_INCLUDED
#define PB_LEVELSENSOR_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _WaterSensor {
    int32_t time_stamp;
    bool has_water_level;
    float water_level;
    bool has_temperature;
    float temperature;
    bool has_battery;
    int32_t battery;
/* @@protoc_insertion_point(struct:WaterSensor) */
} WaterSensor;

/* Default values for struct fields */

/* Initializer values for message structs */
#define WaterSensor_init_default                 {0, false, 0, false, 0, false, 0}
#define WaterSensor_init_zero                    {0, false, 0, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define WaterSensor_time_stamp_tag               1
#define WaterSensor_water_level_tag              2
#define WaterSensor_temperature_tag              3
#define WaterSensor_battery_tag                  4

/* Struct field encoding specification for nanopb */
extern const pb_field_t WaterSensor_fields[5];

/* Maximum encoded size of messages (where known) */
#define WaterSensor_size                         32

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define LEVELSENSOR_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
