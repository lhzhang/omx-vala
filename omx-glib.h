/* omx-glib.h generated by valac, the Vala compiler, do not modify */


#ifndef __OMX_GLIB_H__
#define __OMX_GLIB_H__

#include <glib.h>
#include <glib-object.h>
#include <OMX_Core.h>
#include <OMX_Component.h>
#include <stdlib.h>
#include <string.h>
#include <gmodule.h>
#include <stdio.h>

G_BEGIN_DECLS


#define G_OMX_TYPE_CORE (g_omx_core_get_type ())
#define G_OMX_CORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_CORE, GOmxCore))
#define G_OMX_CORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_CORE, GOmxCoreClass))
#define G_OMX_IS_CORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_CORE))
#define G_OMX_IS_CORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_CORE))
#define G_OMX_CORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_CORE, GOmxCoreClass))

typedef struct _GOmxCore GOmxCore;
typedef struct _GOmxCoreClass GOmxCoreClass;
typedef struct _GOmxCorePrivate GOmxCorePrivate;

#define G_OMX_TYPE_ENGINE (g_omx_engine_get_type ())
#define G_OMX_ENGINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_ENGINE, GOmxEngine))
#define G_OMX_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_ENGINE, GOmxEngineClass))
#define G_OMX_IS_ENGINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_ENGINE))
#define G_OMX_IS_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_ENGINE))
#define G_OMX_ENGINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_ENGINE, GOmxEngineClass))

typedef struct _GOmxEngine GOmxEngine;
typedef struct _GOmxEngineClass GOmxEngineClass;
typedef struct _GOmxEnginePrivate GOmxEnginePrivate;

#define G_OMX_TYPE_COMPONENT (g_omx_component_get_type ())
#define G_OMX_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_COMPONENT, GOmxComponent))
#define G_OMX_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_COMPONENT, GOmxComponentClass))
#define G_OMX_IS_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_COMPONENT))
#define G_OMX_IS_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_COMPONENT))
#define G_OMX_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_COMPONENT, GOmxComponentClass))

typedef struct _GOmxComponent GOmxComponent;
typedef struct _GOmxComponentClass GOmxComponentClass;

#define G_OMX_ENGINE_TYPE_ITERATOR (g_omx_engine_iterator_get_type ())
#define G_OMX_ENGINE_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_ENGINE_TYPE_ITERATOR, GOmxEngineIterator))
#define G_OMX_ENGINE_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_ENGINE_TYPE_ITERATOR, GOmxEngineIteratorClass))
#define G_OMX_ENGINE_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_ENGINE_TYPE_ITERATOR))
#define G_OMX_ENGINE_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_ENGINE_TYPE_ITERATOR))
#define G_OMX_ENGINE_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_ENGINE_TYPE_ITERATOR, GOmxEngineIteratorClass))

typedef struct _GOmxEngineIterator GOmxEngineIterator;
typedef struct _GOmxEngineIteratorClass GOmxEngineIteratorClass;

#define G_OMX_ENGINE_TYPE_COMPONENT_LIST (g_omx_engine_component_list_get_type ())
#define G_OMX_ENGINE_COMPONENT_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_ENGINE_TYPE_COMPONENT_LIST, GOmxEngineComponentList))
#define G_OMX_ENGINE_COMPONENT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_ENGINE_TYPE_COMPONENT_LIST, GOmxEngineComponentListClass))
#define G_OMX_ENGINE_IS_COMPONENT_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_ENGINE_TYPE_COMPONENT_LIST))
#define G_OMX_ENGINE_IS_COMPONENT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_ENGINE_TYPE_COMPONENT_LIST))
#define G_OMX_ENGINE_COMPONENT_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_ENGINE_TYPE_COMPONENT_LIST, GOmxEngineComponentListClass))

typedef struct _GOmxEngineComponentList GOmxEngineComponentList;
typedef struct _GOmxEngineComponentListClass GOmxEngineComponentListClass;

#define G_OMX_ENGINE_TYPE_PORT_QUEUE (g_omx_engine_port_queue_get_type ())
#define G_OMX_ENGINE_PORT_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_ENGINE_TYPE_PORT_QUEUE, GOmxEnginePortQueue))
#define G_OMX_ENGINE_PORT_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_ENGINE_TYPE_PORT_QUEUE, GOmxEnginePortQueueClass))
#define G_OMX_ENGINE_IS_PORT_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_ENGINE_TYPE_PORT_QUEUE))
#define G_OMX_ENGINE_IS_PORT_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_ENGINE_TYPE_PORT_QUEUE))
#define G_OMX_ENGINE_PORT_QUEUE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_ENGINE_TYPE_PORT_QUEUE, GOmxEnginePortQueueClass))

typedef struct _GOmxEnginePortQueue GOmxEnginePortQueue;
typedef struct _GOmxEnginePortQueueClass GOmxEnginePortQueueClass;
typedef struct _GOmxEngineIteratorPrivate GOmxEngineIteratorPrivate;

#define G_OMX_TYPE_PORT (g_omx_port_get_type ())
#define G_OMX_PORT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_PORT, GOmxPort))
#define G_OMX_PORT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_PORT, GOmxPortClass))
#define G_OMX_IS_PORT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_PORT))
#define G_OMX_IS_PORT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_PORT))
#define G_OMX_PORT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_PORT, GOmxPortClass))

typedef struct _GOmxPort GOmxPort;
typedef struct _GOmxPortClass GOmxPortClass;
typedef struct _GOmxEngineComponentListPrivate GOmxEngineComponentListPrivate;

#define G_OMX_ENGINE_COMPONENT_LIST_TYPE_ITERATOR (g_omx_engine_component_list_iterator_get_type ())
#define G_OMX_ENGINE_COMPONENT_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_ENGINE_COMPONENT_LIST_TYPE_ITERATOR, GOmxEngineComponentListIterator))
#define G_OMX_ENGINE_COMPONENT_LIST_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_ENGINE_COMPONENT_LIST_TYPE_ITERATOR, GOmxEngineComponentListIteratorClass))
#define G_OMX_ENGINE_COMPONENT_LIST_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_ENGINE_COMPONENT_LIST_TYPE_ITERATOR))
#define G_OMX_ENGINE_COMPONENT_LIST_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_ENGINE_COMPONENT_LIST_TYPE_ITERATOR))
#define G_OMX_ENGINE_COMPONENT_LIST_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_ENGINE_COMPONENT_LIST_TYPE_ITERATOR, GOmxEngineComponentListIteratorClass))

typedef struct _GOmxEngineComponentListIterator GOmxEngineComponentListIterator;
typedef struct _GOmxEngineComponentListIteratorClass GOmxEngineComponentListIteratorClass;
typedef struct _GOmxEngineComponentListIteratorPrivate GOmxEngineComponentListIteratorPrivate;
typedef struct _GOmxEnginePortQueuePrivate GOmxEnginePortQueuePrivate;

#define G_OMX_ENGINE_PORT_QUEUE_TYPE_ITERATOR (g_omx_engine_port_queue_iterator_get_type ())
#define G_OMX_ENGINE_PORT_QUEUE_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_ENGINE_PORT_QUEUE_TYPE_ITERATOR, GOmxEnginePortQueueIterator))
#define G_OMX_ENGINE_PORT_QUEUE_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_ENGINE_PORT_QUEUE_TYPE_ITERATOR, GOmxEnginePortQueueIteratorClass))
#define G_OMX_ENGINE_PORT_QUEUE_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_ENGINE_PORT_QUEUE_TYPE_ITERATOR))
#define G_OMX_ENGINE_PORT_QUEUE_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_ENGINE_PORT_QUEUE_TYPE_ITERATOR))
#define G_OMX_ENGINE_PORT_QUEUE_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_ENGINE_PORT_QUEUE_TYPE_ITERATOR, GOmxEnginePortQueueIteratorClass))

typedef struct _GOmxEnginePortQueueIterator GOmxEnginePortQueueIterator;
typedef struct _GOmxEnginePortQueueIteratorClass GOmxEnginePortQueueIteratorClass;
typedef struct _GOmxEnginePortQueueIteratorPrivate GOmxEnginePortQueueIteratorPrivate;
typedef struct _GOmxComponentPrivate GOmxComponentPrivate;

#define G_OMX_COMPONENT_TYPE_PORT_LIST (g_omx_component_port_list_get_type ())
#define G_OMX_COMPONENT_PORT_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_COMPONENT_TYPE_PORT_LIST, GOmxComponentPortList))
#define G_OMX_COMPONENT_PORT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_COMPONENT_TYPE_PORT_LIST, GOmxComponentPortListClass))
#define G_OMX_COMPONENT_IS_PORT_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_COMPONENT_TYPE_PORT_LIST))
#define G_OMX_COMPONENT_IS_PORT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_COMPONENT_TYPE_PORT_LIST))
#define G_OMX_COMPONENT_PORT_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_COMPONENT_TYPE_PORT_LIST, GOmxComponentPortListClass))

typedef struct _GOmxComponentPortList GOmxComponentPortList;
typedef struct _GOmxComponentPortListClass GOmxComponentPortListClass;
typedef struct _GOmxComponentPortListPrivate GOmxComponentPortListPrivate;

#define G_OMX_COMPONENT_PORT_LIST_TYPE_ITERATOR (g_omx_component_port_list_iterator_get_type ())
#define G_OMX_COMPONENT_PORT_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_COMPONENT_PORT_LIST_TYPE_ITERATOR, GOmxComponentPortListIterator))
#define G_OMX_COMPONENT_PORT_LIST_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_COMPONENT_PORT_LIST_TYPE_ITERATOR, GOmxComponentPortListIteratorClass))
#define G_OMX_COMPONENT_PORT_LIST_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_COMPONENT_PORT_LIST_TYPE_ITERATOR))
#define G_OMX_COMPONENT_PORT_LIST_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_COMPONENT_PORT_LIST_TYPE_ITERATOR))
#define G_OMX_COMPONENT_PORT_LIST_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_COMPONENT_PORT_LIST_TYPE_ITERATOR, GOmxComponentPortListIteratorClass))

typedef struct _GOmxComponentPortListIterator GOmxComponentPortListIterator;
typedef struct _GOmxComponentPortListIteratorClass GOmxComponentPortListIteratorClass;
typedef struct _GOmxComponentPortListIteratorPrivate GOmxComponentPortListIteratorPrivate;
typedef struct _GOmxPortPrivate GOmxPortPrivate;

#define G_OMX_PORT_TYPE_BUFFER_LIST (g_omx_port_buffer_list_get_type ())
#define G_OMX_PORT_BUFFER_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_PORT_TYPE_BUFFER_LIST, GOmxPortBufferList))
#define G_OMX_PORT_BUFFER_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_PORT_TYPE_BUFFER_LIST, GOmxPortBufferListClass))
#define G_OMX_PORT_IS_BUFFER_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_PORT_TYPE_BUFFER_LIST))
#define G_OMX_PORT_IS_BUFFER_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_PORT_TYPE_BUFFER_LIST))
#define G_OMX_PORT_BUFFER_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_PORT_TYPE_BUFFER_LIST, GOmxPortBufferListClass))

typedef struct _GOmxPortBufferList GOmxPortBufferList;
typedef struct _GOmxPortBufferListClass GOmxPortBufferListClass;
typedef struct _GOmxPortBufferListPrivate GOmxPortBufferListPrivate;

#define G_OMX_PORT_BUFFER_LIST_TYPE_ITERATOR (g_omx_port_buffer_list_iterator_get_type ())
#define G_OMX_PORT_BUFFER_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_PORT_BUFFER_LIST_TYPE_ITERATOR, GOmxPortBufferListIterator))
#define G_OMX_PORT_BUFFER_LIST_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_PORT_BUFFER_LIST_TYPE_ITERATOR, GOmxPortBufferListIteratorClass))
#define G_OMX_PORT_BUFFER_LIST_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_PORT_BUFFER_LIST_TYPE_ITERATOR))
#define G_OMX_PORT_BUFFER_LIST_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_PORT_BUFFER_LIST_TYPE_ITERATOR))
#define G_OMX_PORT_BUFFER_LIST_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_PORT_BUFFER_LIST_TYPE_ITERATOR, GOmxPortBufferListIteratorClass))

typedef struct _GOmxPortBufferListIterator GOmxPortBufferListIterator;
typedef struct _GOmxPortBufferListIteratorClass GOmxPortBufferListIteratorClass;
typedef struct _GOmxPortBufferListIteratorPrivate GOmxPortBufferListIteratorPrivate;

#define G_OMX_TYPE_SEMAPHORE (g_omx_semaphore_get_type ())
#define G_OMX_SEMAPHORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_SEMAPHORE, GOmxSemaphore))
#define G_OMX_SEMAPHORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_SEMAPHORE, GOmxSemaphoreClass))
#define G_OMX_IS_SEMAPHORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_SEMAPHORE))
#define G_OMX_IS_SEMAPHORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_SEMAPHORE))
#define G_OMX_SEMAPHORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_SEMAPHORE, GOmxSemaphoreClass))

typedef struct _GOmxSemaphore GOmxSemaphore;
typedef struct _GOmxSemaphoreClass GOmxSemaphoreClass;
typedef struct _GOmxSemaphorePrivate GOmxSemaphorePrivate;

struct _GOmxCore {
	GObject parent_instance;
	GOmxCorePrivate * priv;
};

struct _GOmxCoreClass {
	GObjectClass parent_class;
};

typedef OMX_ERRORTYPE (*GOmxCoreInitFunc) (void* user_data);
typedef OMX_ERRORTYPE (*GOmxCoreDeinitFunc) (void* user_data);
typedef OMX_ERRORTYPE (*GOmxCoreGetHandleFunc) (void** component, const char* component_name, void* app_data, OMX_CALLBACKTYPE* callbacks, void* user_data);
typedef OMX_ERRORTYPE (*GOmxCoreFreeHandleFunc) (void* handle, void* user_data);
typedef OMX_ERRORTYPE (*GOmxCoreSetupTunnelFunc) (void* output, guint32 port_output, void* input, guint32 port_input, void* user_data);
struct _GOmxEngine {
	GObject parent_instance;
	GOmxEnginePrivate * priv;
};

struct _GOmxEngineClass {
	GObjectClass parent_class;
	void (*start) (GOmxEngine* self, GError** error);
	void (*init) (GOmxEngine* self, GError** error);
	void (*set_state) (GOmxEngine* self, OMX_STATETYPE state, GError** error);
	void (*set_state_and_wait) (GOmxEngine* self, OMX_STATETYPE state, GError** error);
	void (*wait_for_state_set) (GOmxEngine* self);
	void (*allocate_ports) (GOmxEngine* self, GError** error);
	void (*allocate_buffers) (GOmxEngine* self, GError** error);
	void (*free_ports) (GOmxEngine* self, GError** error);
	void (*free_handles) (GOmxEngine* self, GError** error);
};

struct _GOmxEngineIterator {
	GObject parent_instance;
	GOmxEngineIteratorPrivate * priv;
};

struct _GOmxEngineIteratorClass {
	GObjectClass parent_class;
};

struct _GOmxEngineComponentList {
	GObject parent_instance;
	GOmxEngineComponentListPrivate * priv;
};

struct _GOmxEngineComponentListClass {
	GObjectClass parent_class;
};

struct _GOmxEngineComponentListIterator {
	GObject parent_instance;
	GOmxEngineComponentListIteratorPrivate * priv;
};

struct _GOmxEngineComponentListIteratorClass {
	GObjectClass parent_class;
};

struct _GOmxEnginePortQueue {
	GObject parent_instance;
	GOmxEnginePortQueuePrivate * priv;
};

struct _GOmxEnginePortQueueClass {
	GObjectClass parent_class;
};

struct _GOmxEnginePortQueueIterator {
	GObject parent_instance;
	GOmxEnginePortQueueIteratorPrivate * priv;
};

struct _GOmxEnginePortQueueIteratorClass {
	GObjectClass parent_class;
};

struct _GOmxComponent {
	GObject parent_instance;
	GOmxComponentPrivate * priv;
	OMX_PORT_PARAM_TYPE port_param;
	gint id;
};

struct _GOmxComponentClass {
	GObjectClass parent_class;
	void (*init) (GOmxComponent* self, GError** error);
	void (*free_handle) (GOmxComponent* self, GError** error);
	void (*allocate_ports) (GOmxComponent* self, GError** error);
	void (*allocate_buffers) (GOmxComponent* self, GError** error);
	void (*free_ports) (GOmxComponent* self, GError** error);
	void (*prepare_ports) (GOmxComponent* self, GError** error);
};

typedef void (*GOmxComponentEventFunc) (GOmxComponent* component, guint data1, guint data2, void* event_data, void* user_data);
struct _GOmxComponentPortList {
	GObject parent_instance;
	GOmxComponentPortListPrivate * priv;
};

struct _GOmxComponentPortListClass {
	GObjectClass parent_class;
};

struct _GOmxComponentPortListIterator {
	GObject parent_instance;
	GOmxComponentPortListIteratorPrivate * priv;
};

struct _GOmxComponentPortListIteratorClass {
	GObjectClass parent_class;
};

struct _GOmxPort {
	GObject parent_instance;
	GOmxPortPrivate * priv;
	OMX_PARAM_PORTDEFINITIONTYPE definition;
};

struct _GOmxPortClass {
	GObjectClass parent_class;
};

typedef void (*GOmxPortBufferDoneFunc) (OMX_BUFFERHEADERTYPE* buffer, void* user_data);
struct _GOmxPortBufferList {
	GObject parent_instance;
	GOmxPortBufferListPrivate * priv;
};

struct _GOmxPortBufferListClass {
	GObjectClass parent_class;
};

struct _GOmxPortBufferListIterator {
	GObject parent_instance;
	GOmxPortBufferListIteratorPrivate * priv;
};

struct _GOmxPortBufferListIteratorClass {
	GObjectClass parent_class;
};

struct _GOmxSemaphore {
	GObject parent_instance;
	GOmxSemaphorePrivate * priv;
};

struct _GOmxSemaphoreClass {
	GObjectClass parent_class;
};


GType g_omx_core_get_type (void);
void g_omx_core_init (GOmxCore* self, GError** error);
void g_omx_core_deinit (GOmxCore* self, GError** error);
void g_omx_core_get_handle (GOmxCore* self, void** component, const char* component_name, void* app_data, OMX_CALLBACKTYPE* callbacks, GError** error);
void g_omx_core_free_handle (GOmxCore* self, void* handle, GError** error);
void g_omx_core_setup_tunnel (GOmxCore* self, void* output, guint32 port_output, void* input, guint32 port_input, GError** error);
GOmxCore* g_omx_core_open (const char* soname);
GModule* g_omx_core_get_module (GOmxCore* self);
GType g_omx_engine_get_type (void);
guint g_omx_engine_get_n_components (GOmxEngine* self);
GType g_omx_component_get_type (void);
void g_omx_engine_add_component (GOmxEngine* self, GOmxComponent* component);
GOmxComponent* g_omx_engine_get_component (GOmxEngine* self, guint i);
void g_omx_engine_start (GOmxEngine* self, GError** error);
void g_omx_engine_init (GOmxEngine* self, GError** error);
void g_omx_engine_set_state (GOmxEngine* self, OMX_STATETYPE state, GError** error);
void g_omx_engine_set_state_and_wait (GOmxEngine* self, OMX_STATETYPE state, GError** error);
void g_omx_engine_wait_for_state_set (GOmxEngine* self);
void g_omx_engine_allocate_ports (GOmxEngine* self, GError** error);
void g_omx_engine_allocate_buffers (GOmxEngine* self, GError** error);
void g_omx_engine_free_ports (GOmxEngine* self, GError** error);
void g_omx_engine_free_handles (GOmxEngine* self, GError** error);
GType g_omx_engine_iterator_get_type (void);
GOmxEngineIterator* g_omx_engine_iterator (GOmxEngine* self);
GOmxEngine* g_omx_engine_new (void);
GOmxEngine* g_omx_engine_construct (GType object_type);
GType g_omx_engine_component_list_get_type (void);
GOmxEngineComponentList* g_omx_engine_get_components (GOmxEngine* self);
GType g_omx_engine_port_queue_get_type (void);
GOmxEnginePortQueue* g_omx_engine_get_ports_with_buffer_done (GOmxEngine* self);
GOmxEngineIterator* g_omx_engine_iterator_new (GOmxEngine* engine);
GOmxEngineIterator* g_omx_engine_iterator_construct (GType object_type, GOmxEngine* engine);
gboolean g_omx_engine_iterator_next (GOmxEngineIterator* self);
GType g_omx_port_get_type (void);
GOmxPort* g_omx_engine_iterator_get (GOmxEngineIterator* self);
GOmxEngineComponentList* g_omx_engine_component_list_new (GOmxEngine* engine);
GOmxEngineComponentList* g_omx_engine_component_list_construct (GType object_type, GOmxEngine* engine);
GType g_omx_engine_component_list_iterator_get_type (void);
GOmxEngineComponentListIterator* g_omx_engine_component_list_iterator (GOmxEngineComponentList* self);
GOmxComponent* g_omx_engine_component_list_get (GOmxEngineComponentList* self, guint index);
GOmxEngine* g_omx_engine_component_list_get_engine (GOmxEngineComponentList* self);
void g_omx_engine_component_list_set_engine (GOmxEngineComponentList* self, GOmxEngine* value);
guint g_omx_engine_component_list_get_length (GOmxEngineComponentList* self);
GOmxEngineComponentListIterator* g_omx_engine_component_list_iterator_new (GOmxEngine* engine);
GOmxEngineComponentListIterator* g_omx_engine_component_list_iterator_construct (GType object_type, GOmxEngine* engine);
gboolean g_omx_engine_component_list_iterator_next (GOmxEngineComponentListIterator* self);
GOmxComponent* g_omx_engine_component_list_iterator_get (GOmxEngineComponentListIterator* self);
GOmxEnginePortQueue* g_omx_engine_port_queue_new (GOmxEngine* engine);
GOmxEnginePortQueue* g_omx_engine_port_queue_construct (GType object_type, GOmxEngine* engine);
GType g_omx_engine_port_queue_iterator_get_type (void);
GOmxEnginePortQueueIterator* g_omx_engine_port_queue_iterator (GOmxEnginePortQueue* self);
GOmxEngine* g_omx_engine_port_queue_get_engine (GOmxEnginePortQueue* self);
void g_omx_engine_port_queue_set_engine (GOmxEnginePortQueue* self, GOmxEngine* value);
GOmxEnginePortQueueIterator* g_omx_engine_port_queue_iterator_new (GOmxEngine* engine);
GOmxEnginePortQueueIterator* g_omx_engine_port_queue_iterator_construct (GType object_type, GOmxEngine* engine);
gboolean g_omx_engine_port_queue_iterator_next (GOmxEnginePortQueueIterator* self);
GOmxPort* g_omx_engine_port_queue_iterator_get (GOmxEnginePortQueueIterator* self);
GOmxComponent* g_omx_component_new (GOmxCore* core, const char* comp_name, OMX_INDEXTYPE index);
GOmxComponent* g_omx_component_construct (GType object_type, GOmxCore* core, const char* comp_name, OMX_INDEXTYPE index);
guint g_omx_component_get_n_ports (GOmxComponent* self);
GOmxPort* g_omx_component_get_port (GOmxComponent* self, guint i);
void g_omx_component_init (GOmxComponent* self, GError** error);
void g_omx_component_free_handle (GOmxComponent* self, GError** error);
void g_omx_component_allocate_ports (GOmxComponent* self, GError** error);
void g_omx_component_allocate_buffers (GOmxComponent* self, GError** error);
void g_omx_component_free_ports (GOmxComponent* self, GError** error);
void g_omx_component_prepare_ports (GOmxComponent* self, GError** error);
void g_omx_component_fill_output_buffers (GOmxComponent* self, GError** error);
void g_omx_component_empty_input_buffers (GOmxComponent* self, GError** error);
void g_omx_component_wait_for_state_set (GOmxComponent* self);
void g_omx_component_set_state (GOmxComponent* self, OMX_STATETYPE state, GError** error);
void g_omx_component_set_state_and_wait (GOmxComponent* self, OMX_STATETYPE state, GError** error);
OMX_STATETYPE g_omx_component_get_state (GOmxComponent* self, GError** error);
void g_omx_component_event_set_function (GOmxComponent* self, OMX_EVENTTYPE event, GOmxComponentEventFunc event_function, void* event_function_target);
const char* g_omx_component_get_name (GOmxComponent* self);
void g_omx_component_set_name (GOmxComponent* self, const char* value);
void* g_omx_component_get_handle (GOmxComponent* self);
GType g_omx_component_port_list_get_type (void);
GOmxComponentPortList* g_omx_component_get_ports (GOmxComponent* self);
GAsyncQueue* g_omx_component_get_queue (GOmxComponent* self);
void g_omx_component_set_queue (GOmxComponent* self, GAsyncQueue* value);
GOmxCore* g_omx_component_get_core (GOmxComponent* self);
void g_omx_component_set_core (GOmxComponent* self, GOmxCore* value);
const char* g_omx_component_get_component_name (GOmxComponent* self);
void g_omx_component_set_component_name (GOmxComponent* self, const char* value);
guint g_omx_component_get_current_state (GOmxComponent* self);
guint g_omx_component_get_init_index (GOmxComponent* self);
void g_omx_component_set_init_index (GOmxComponent* self, guint value);
guint g_omx_component_get_pending_state (GOmxComponent* self);
guint g_omx_component_get_previous_state (GOmxComponent* self);
GOmxComponentPortList* g_omx_component_port_list_new (GOmxComponent* component);
GOmxComponentPortList* g_omx_component_port_list_construct (GType object_type, GOmxComponent* component);
GType g_omx_component_port_list_iterator_get_type (void);
GOmxComponentPortListIterator* g_omx_component_port_list_iterator (GOmxComponentPortList* self);
GOmxPort* g_omx_component_port_list_get (GOmxComponentPortList* self, guint index);
GOmxComponent* g_omx_component_port_list_get_component (GOmxComponentPortList* self);
void g_omx_component_port_list_set_component (GOmxComponentPortList* self, GOmxComponent* value);
guint g_omx_component_port_list_get_length (GOmxComponentPortList* self);
GOmxComponentPortListIterator* g_omx_component_port_list_iterator_new (GOmxComponent* component);
GOmxComponentPortListIterator* g_omx_component_port_list_iterator_construct (GType object_type, GOmxComponent* component);
gboolean g_omx_component_port_list_iterator_next (GOmxComponentPortListIterator* self);
GOmxPort* g_omx_component_port_list_iterator_get (GOmxComponentPortListIterator* self);
GOmxPort* g_omx_port_new (GOmxComponent* component, guint32 index);
GOmxPort* g_omx_port_construct (GType object_type, GOmxComponent* component, guint32 index);
void g_omx_port_init (GOmxPort* self, GError** error);
void g_omx_port_allocate_buffers (GOmxPort* self, GError** error);
void g_omx_port_use_buffers_of (GOmxPort* self, GOmxPort* port, GError** error);
OMX_BUFFERHEADERTYPE* g_omx_port_get_buffer (GOmxPort* self, guint i);
guint g_omx_port_get_n_buffers (GOmxPort* self);
void g_omx_port_free_buffers (GOmxPort* self, GError** error);
OMX_BUFFERHEADERTYPE* g_omx_port_pop_buffer (GOmxPort* self);
void g_omx_port_push_buffer (GOmxPort* self, OMX_BUFFERHEADERTYPE* buffer, GError** error);
void g_omx_port_set_buffer_done_function (GOmxPort* self, GOmxPortBufferDoneFunc buffer_done_func, void* buffer_done_func_target);
void g_omx_port_buffer_done (GOmxPort* self, OMX_BUFFERHEADERTYPE* buffer);
const char* g_omx_port_get_name (GOmxPort* self);
void g_omx_port_set_name (GOmxPort* self, const char* value);
GOmxComponent* g_omx_port_get_component (GOmxPort* self);
void g_omx_port_set_component (GOmxPort* self, GOmxComponent* value);
guint g_omx_port_get_index (GOmxPort* self);
void g_omx_port_set_index (GOmxPort* self, guint value);
gboolean g_omx_port_get_eos (GOmxPort* self);
GAsyncQueue* g_omx_port_get_queue (GOmxPort* self);
GType g_omx_port_buffer_list_get_type (void);
GOmxPortBufferList* g_omx_port_get_buffers (GOmxPort* self);
GOmxPortBufferList* g_omx_port_buffer_list_new (GOmxPort* port);
GOmxPortBufferList* g_omx_port_buffer_list_construct (GType object_type, GOmxPort* port);
GType g_omx_port_buffer_list_iterator_get_type (void);
GOmxPortBufferListIterator* g_omx_port_buffer_list_iterator (GOmxPortBufferList* self);
OMX_BUFFERHEADERTYPE* g_omx_port_buffer_list_get (GOmxPortBufferList* self, guint index);
GOmxPort* g_omx_port_buffer_list_get_port (GOmxPortBufferList* self);
void g_omx_port_buffer_list_set_port (GOmxPortBufferList* self, GOmxPort* value);
guint g_omx_port_buffer_list_get_length (GOmxPortBufferList* self);
GOmxPortBufferListIterator* g_omx_port_buffer_list_iterator_new (GOmxPort* port);
GOmxPortBufferListIterator* g_omx_port_buffer_list_iterator_construct (GType object_type, GOmxPort* port);
gboolean g_omx_port_buffer_list_iterator_next (GOmxPortBufferListIterator* self);
OMX_BUFFERHEADERTYPE* g_omx_port_buffer_list_iterator_get (GOmxPortBufferListIterator* self);
GType g_omx_semaphore_get_type (void);
void g_omx_semaphore_up (GOmxSemaphore* self);
void g_omx_semaphore_down (GOmxSemaphore* self);
GOmxSemaphore* g_omx_semaphore_new (void);
GOmxSemaphore* g_omx_semaphore_construct (GType object_type);
gboolean g_omx_buffer_is_eos (OMX_BUFFERHEADERTYPE* buffer);
void g_omx_buffer_set_eos (OMX_BUFFERHEADERTYPE* buffer);
void g_omx_buffer_copy (OMX_BUFFERHEADERTYPE* dest, OMX_BUFFERHEADERTYPE* source);
void g_omx_buffer_copy_len (OMX_BUFFERHEADERTYPE* dest, OMX_BUFFERHEADERTYPE* source);
void g_omx_buffer_read_from_file (OMX_BUFFERHEADERTYPE* buffer, FILE* fs);


G_END_DECLS

#endif
