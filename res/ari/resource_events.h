/*
 * Asterisk -- An open source telephony toolkit.
 *
 * Copyright (C) 2012 - 2013, Digium, Inc.
 *
 * David M. Lee, II <dlee@digium.com>
 *
 * See http://www.asterisk.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 */

/*! \file
 *
 * \brief Generated file - declares stubs to be implemented in
 * res/ari/resource_events.c
 *
 * WebSocket resource
 *
 * \author David M. Lee, II <dlee@digium.com>
 */

/*
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * !!!!!                               DO NOT EDIT                        !!!!!
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * This file is generated by a mustache template. Please see the original
 * template in rest-api-templates/ari_resource.h.mustache
 */

#ifndef _ASTERISK_RESOURCE_EVENTS_H
#define _ASTERISK_RESOURCE_EVENTS_H

#include "asterisk/ari.h"

/*! Argument struct for ast_ari_events_event_websocket() */
struct ast_ari_events_event_websocket_args {
	/*! Array of Applications to subscribe to. */
	const char **app;
	/*! Length of app array. */
	size_t app_count;
	/*! Parsing context for app. */
	char *app_parse;
	/*! Subscribe to all Asterisk events. If provided, the applications listed will be subscribed to all events, effectively disabling the application specific subscriptions. Default is 'false'. */
	int subscribe_all;
};

/*!
 * \brief WebSocket connection for events.
 *
<<<<<<< HEAD
 * \retval  0 success
 * \retval -1 error
 */
int ast_ari_websocket_events_event_websocket_init(void);

/*!
 * \brief WebSocket connection for events.
 *
 * \return Nothing
 */
void ast_ari_websocket_events_event_websocket_dtor(void);

/*!
 * \brief WebSocket connection for events.
 *
 * \param ser HTTP TCP/TLS Server Session
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param session_id The id of the current session.
=======
 * \param ser HTTP TCP/TLS Server Session
 * \param headers HTTP headers
 * \param args Swagger parameters
>>>>>>> upstream/certified/13.8
 *
 * \retval 0 success
 * \retval non-zero error
 */
<<<<<<< HEAD
int ast_ari_websocket_events_event_websocket_attempted(struct ast_tcptls_session_instance *ser,
	struct ast_variable *headers, struct ast_ari_events_event_websocket_args *args, const char *session_id);
=======
int ast_ari_websocket_events_event_websocket_attempted(struct ast_tcptls_session_instance *ser, struct ast_variable *headers, struct ast_ari_events_event_websocket_args *args);
>>>>>>> upstream/certified/13.8

/*!
 * \brief WebSocket connection for events.
 *
 * \param session ARI WebSocket.
 * \param headers HTTP headers.
 * \param args Swagger parameters.
 * \param session_id The id of the current session.
 */
<<<<<<< HEAD
void ast_ari_websocket_events_event_websocket_established(struct ast_ari_websocket_session *session,
	struct ast_variable *headers, struct ast_ari_events_event_websocket_args *args);
=======
void ast_ari_websocket_events_event_websocket_established(struct ast_ari_websocket_session *session, struct ast_variable *headers, struct ast_ari_events_event_websocket_args *args);
>>>>>>> upstream/certified/13.8
/*! Argument struct for ast_ari_events_user_event() */
struct ast_ari_events_user_event_args {
	/*! Event name */
	const char *event_name;
	/*! The name of the application that will receive this event */
	const char *application;
	/*! Array of URI for event source (channel:{channelId}, bridge:{bridgeId}, endpoint:{tech}/{resource}, deviceState:{deviceName} */
	const char **source;
	/*! Length of source array. */
	size_t source_count;
	/*! Parsing context for source. */
	char *source_parse;
	/*! The "variables" key in the body object holds custom key/value pairs to add to the user event. Ex. { "variables": { "key": "value" } } */
	struct ast_json *variables;
};
/*!
 * \brief Body parsing function for /events/user/{eventName}.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_events_user_event_parse_body(
	struct ast_json *body,
	struct ast_ari_events_user_event_args *args);

/*!
 * \brief Generate a user event.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_events_user_event(struct ast_variable *headers, struct ast_ari_events_user_event_args *args, struct ast_ari_response *response);

#endif /* _ASTERISK_RESOURCE_EVENTS_H */
