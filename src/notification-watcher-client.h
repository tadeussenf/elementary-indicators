/* Generated by dbus-binding-tool; do not edit! */

#include <glib.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef _DBUS_GLIB_ASYNC_DATA_FREE
#define _DBUS_GLIB_ASYNC_DATA_FREE
static
#ifdef G_HAVE_INLINE
inline
#endif
void
_dbus_glib_async_data_free (gpointer stuff)
{
	g_slice_free (DBusGAsyncData, stuff);
}
#endif

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_StatusNotifierWatcher
#define DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_StatusNotifierWatcher

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_StatusNotifierWatcher_register_status_notifier_item (DBusGProxy *proxy, const char * IN_service, GError **error)

{
  return dbus_g_proxy_call (proxy, "RegisterStatusNotifierItem", error, G_TYPE_STRING, IN_service, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_StatusNotifierWatcher_register_status_notifier_item_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_freedesktop_StatusNotifierWatcher_register_status_notifier_item_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_freedesktop_StatusNotifierWatcher_register_status_notifier_item_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_StatusNotifierWatcher_register_status_notifier_item_async (DBusGProxy *proxy, const char * IN_service, org_freedesktop_StatusNotifierWatcher_register_status_notifier_item_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "RegisterStatusNotifierItem", org_freedesktop_StatusNotifierWatcher_register_status_notifier_item_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_service, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_StatusNotifierWatcher_registered_status_notifier_items (DBusGProxy *proxy, char *** OUT_services, GError **error)

{
  return dbus_g_proxy_call (proxy, "RegisteredStatusNotifierItems", error, G_TYPE_INVALID, G_TYPE_STRV, OUT_services, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_StatusNotifierWatcher_registered_status_notifier_items_reply) (DBusGProxy *proxy, char * *OUT_services, GError *error, gpointer userdata);

static void
org_freedesktop_StatusNotifierWatcher_registered_status_notifier_items_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char ** OUT_services;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRV, &OUT_services, G_TYPE_INVALID);
  (*(org_freedesktop_StatusNotifierWatcher_registered_status_notifier_items_reply)data->cb) (proxy, OUT_services, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_StatusNotifierWatcher_registered_status_notifier_items_async (DBusGProxy *proxy, org_freedesktop_StatusNotifierWatcher_registered_status_notifier_items_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "RegisteredStatusNotifierItems", org_freedesktop_StatusNotifierWatcher_registered_status_notifier_items_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_StatusNotifierWatcher_protocol_version (DBusGProxy *proxy, char ** OUT_version, GError **error)

{
  return dbus_g_proxy_call (proxy, "ProtocolVersion", error, G_TYPE_INVALID, G_TYPE_STRING, OUT_version, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_StatusNotifierWatcher_protocol_version_reply) (DBusGProxy *proxy, char * OUT_version, GError *error, gpointer userdata);

static void
org_freedesktop_StatusNotifierWatcher_protocol_version_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char * OUT_version;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRING, &OUT_version, G_TYPE_INVALID);
  (*(org_freedesktop_StatusNotifierWatcher_protocol_version_reply)data->cb) (proxy, OUT_version, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_StatusNotifierWatcher_protocol_version_async (DBusGProxy *proxy, org_freedesktop_StatusNotifierWatcher_protocol_version_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "ProtocolVersion", org_freedesktop_StatusNotifierWatcher_protocol_version_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_StatusNotifierWatcher_register_notification_host (DBusGProxy *proxy, const char * IN_service, GError **error)

{
  return dbus_g_proxy_call (proxy, "RegisterNotificationHost", error, G_TYPE_STRING, IN_service, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_StatusNotifierWatcher_register_notification_host_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_freedesktop_StatusNotifierWatcher_register_notification_host_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_freedesktop_StatusNotifierWatcher_register_notification_host_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_StatusNotifierWatcher_register_notification_host_async (DBusGProxy *proxy, const char * IN_service, org_freedesktop_StatusNotifierWatcher_register_notification_host_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "RegisterNotificationHost", org_freedesktop_StatusNotifierWatcher_register_notification_host_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_service, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_StatusNotifierWatcher_is_notification_host_registered (DBusGProxy *proxy, gboolean* OUT_hasHost, GError **error)

{
  return dbus_g_proxy_call (proxy, "IsNotificationHostRegistered", error, G_TYPE_INVALID, G_TYPE_BOOLEAN, OUT_hasHost, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_StatusNotifierWatcher_is_notification_host_registered_reply) (DBusGProxy *proxy, gboolean OUT_hasHost, GError *error, gpointer userdata);

static void
org_freedesktop_StatusNotifierWatcher_is_notification_host_registered_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gboolean OUT_hasHost;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_BOOLEAN, &OUT_hasHost, G_TYPE_INVALID);
  (*(org_freedesktop_StatusNotifierWatcher_is_notification_host_registered_reply)data->cb) (proxy, OUT_hasHost, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_StatusNotifierWatcher_is_notification_host_registered_async (DBusGProxy *proxy, org_freedesktop_StatusNotifierWatcher_is_notification_host_registered_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "IsNotificationHostRegistered", org_freedesktop_StatusNotifierWatcher_is_notification_host_registered_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_StatusNotifierWatcher */

G_END_DECLS
