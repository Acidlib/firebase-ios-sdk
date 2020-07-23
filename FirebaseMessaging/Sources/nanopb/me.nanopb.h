/*
 * Copyright 2019 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.5 */

#ifndef PB_ME_NANOPB_H_INCLUDED
#define PB_ME_NANOPB_H_INCLUDED
#include <nanopb/pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Enum definitions */
typedef enum _MessagingClientEvent_MessageType {
    MessagingClientEvent_MessageType_UNKNOWN = 0,
    MessagingClientEvent_MessageType_DATA_MESSAGE = 1,
    MessagingClientEvent_MessageType_TOPIC = 2,
    MessagingClientEvent_MessageType_DISPLAY_NOTIFICATION = 3
} MessagingClientEvent_MessageType;
#define _MessagingClientEvent_MessageType_MIN MessagingClientEvent_MessageType_UNKNOWN
#define _MessagingClientEvent_MessageType_MAX MessagingClientEvent_MessageType_DISPLAY_NOTIFICATION
#define _MessagingClientEvent_MessageType_ARRAYSIZE ((MessagingClientEvent_MessageType)(MessagingClientEvent_MessageType_DISPLAY_NOTIFICATION+1))

typedef enum _MessagingClientEvent_SDKPlatform {
    MessagingClientEvent_SDKPlatform_UNKNOWN_OS = 0,
    MessagingClientEvent_SDKPlatform_ANDROID = 1,
    MessagingClientEvent_SDKPlatform_IOS = 2,
    MessagingClientEvent_SDKPlatform_WEB = 3
} MessagingClientEvent_SDKPlatform;
#define _MessagingClientEvent_SDKPlatform_MIN MessagingClientEvent_SDKPlatform_UNKNOWN_OS
#define _MessagingClientEvent_SDKPlatform_MAX MessagingClientEvent_SDKPlatform_WEB
#define _MessagingClientEvent_SDKPlatform_ARRAYSIZE ((MessagingClientEvent_SDKPlatform)(MessagingClientEvent_SDKPlatform_WEB+1))

typedef enum _MessagingClientEvent_Event {
    MessagingClientEvent_Event_UNKNOWN_EVENT = 0,
    MessagingClientEvent_Event_MESSAGE_DELIVERED = 1,
    MessagingClientEvent_Event_MESSAGE_OPEN = 2
} MessagingClientEvent_Event;
#define _MessagingClientEvent_Event_MIN MessagingClientEvent_Event_UNKNOWN_EVENT
#define _MessagingClientEvent_Event_MAX MessagingClientEvent_Event_MESSAGE_OPEN
#define _MessagingClientEvent_Event_ARRAYSIZE ((MessagingClientEvent_Event)(MessagingClientEvent_Event_MESSAGE_OPEN+1))

/* Struct definitions */
typedef struct _MessagingClientEvent {
    int64_t project_number;
    pb_bytes_array_t *message_id;
    pb_bytes_array_t *instance_id;
    MessagingClientEvent_MessageType message_type;
    MessagingClientEvent_SDKPlatform sdk_platform;
    pb_bytes_array_t *package_name;
    int32_t priority;
    int32_t ttl;
    pb_bytes_array_t *topic;
    int64_t bulk_id;
    MessagingClientEvent_Event event;
    pb_bytes_array_t *analytics_label;
    int64_t campaign_id;
    pb_bytes_array_t *composer_label;
/* @@protoc_insertion_point(struct:MessagingClientEvent) */
} MessagingClientEvent;

/* Default values for struct fields */

/* Initializer values for message structs */
#define MessagingClientEvent_init_default        {0, NULL, NULL, _MessagingClientEvent_MessageType_MIN, _MessagingClientEvent_SDKPlatform_MIN, NULL, 0, 0, NULL, 0, _MessagingClientEvent_Event_MIN, NULL, 0, NULL}
#define MessagingClientEvent_init_zero           {0, NULL, NULL, _MessagingClientEvent_MessageType_MIN, _MessagingClientEvent_SDKPlatform_MIN, NULL, 0, 0, NULL, 0, _MessagingClientEvent_Event_MIN, NULL, 0, NULL}

/* Field tags (for use in manual encoding/decoding) */
#define MessagingClientEvent_project_number_tag  1
#define MessagingClientEvent_message_id_tag      2
#define MessagingClientEvent_instance_id_tag     3
#define MessagingClientEvent_message_type_tag    4
#define MessagingClientEvent_sdk_platform_tag    5
#define MessagingClientEvent_package_name_tag    6
#define MessagingClientEvent_priority_tag        8
#define MessagingClientEvent_ttl_tag             9
#define MessagingClientEvent_topic_tag           10
#define MessagingClientEvent_bulk_id_tag         11
#define MessagingClientEvent_event_tag           12
#define MessagingClientEvent_analytics_label_tag 13
#define MessagingClientEvent_campaign_id_tag     14
#define MessagingClientEvent_composer_label_tag  15

/* Struct field encoding specification for nanopb */
extern const pb_field_t MessagingClientEvent_fields[15];

/* Maximum encoded size of messages (where known) */
/* MessagingClientEvent_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ME_MESSAGES \


#endif

/* @@protoc_insertion_point(eof) */

#endif
