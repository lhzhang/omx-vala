/* gomx.h generated by valac, the Vala compiler, do not modify */


#ifndef __GOMX_H__
#define __GOMX_H__

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

#define G_OMX_TYPE_COMPONENT_LIST (g_omx_component_list_get_type ())
#define G_OMX_COMPONENT_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_COMPONENT_LIST, GOmxComponentList))
#define G_OMX_COMPONENT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_COMPONENT_LIST, GOmxComponentListClass))
#define G_OMX_IS_COMPONENT_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_COMPONENT_LIST))
#define G_OMX_IS_COMPONENT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_COMPONENT_LIST))
#define G_OMX_COMPONENT_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_COMPONENT_LIST, GOmxComponentListClass))

typedef struct _GOmxComponentList GOmxComponentList;
typedef struct _GOmxComponentListClass GOmxComponentListClass;

#define G_OMX_TYPE_PORT_DONE_QUEUE (g_omx_port_done_queue_get_type ())
#define G_OMX_PORT_DONE_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_PORT_DONE_QUEUE, GOmxPortDoneQueue))
#define G_OMX_PORT_DONE_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_PORT_DONE_QUEUE, GOmxPortDoneQueueClass))
#define G_OMX_IS_PORT_DONE_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_PORT_DONE_QUEUE))
#define G_OMX_IS_PORT_DONE_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_PORT_DONE_QUEUE))
#define G_OMX_PORT_DONE_QUEUE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_PORT_DONE_QUEUE, GOmxPortDoneQueueClass))

typedef struct _GOmxPortDoneQueue GOmxPortDoneQueue;
typedef struct _GOmxPortDoneQueueClass GOmxPortDoneQueueClass;
typedef struct _GOmxComponentListPrivate GOmxComponentListPrivate;

#define G_OMX_COMPONENT_LIST_TYPE_ITERATOR (g_omx_component_list_iterator_get_type ())
#define G_OMX_COMPONENT_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_COMPONENT_LIST_TYPE_ITERATOR, GOmxComponentListIterator))
#define G_OMX_COMPONENT_LIST_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_COMPONENT_LIST_TYPE_ITERATOR, GOmxComponentListIteratorClass))
#define G_OMX_COMPONENT_LIST_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_COMPONENT_LIST_TYPE_ITERATOR))
#define G_OMX_COMPONENT_LIST_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_COMPONENT_LIST_TYPE_ITERATOR))
#define G_OMX_COMPONENT_LIST_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_COMPONENT_LIST_TYPE_ITERATOR, GOmxComponentListIteratorClass))

typedef struct _GOmxComponentListIterator GOmxComponentListIterator;
typedef struct _GOmxComponentListIteratorClass GOmxComponentListIteratorClass;
typedef struct _GOmxComponentListIteratorPrivate GOmxComponentListIteratorPrivate;
typedef struct _GOmxPortDoneQueuePrivate GOmxPortDoneQueuePrivate;

#define G_OMX_PORT_DONE_QUEUE_TYPE_ITERATOR (g_omx_port_done_queue_iterator_get_type ())
#define G_OMX_PORT_DONE_QUEUE_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_PORT_DONE_QUEUE_TYPE_ITERATOR, GOmxPortDoneQueueIterator))
#define G_OMX_PORT_DONE_QUEUE_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_PORT_DONE_QUEUE_TYPE_ITERATOR, GOmxPortDoneQueueIteratorClass))
#define G_OMX_PORT_DONE_QUEUE_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_PORT_DONE_QUEUE_TYPE_ITERATOR))
#define G_OMX_PORT_DONE_QUEUE_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_PORT_DONE_QUEUE_TYPE_ITERATOR))
#define G_OMX_PORT_DONE_QUEUE_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_PORT_DONE_QUEUE_TYPE_ITERATOR, GOmxPortDoneQueueIteratorClass))

typedef struct _GOmxPortDoneQueueIterator GOmxPortDoneQueueIterator;
typedef struct _GOmxPortDoneQueueIteratorClass GOmxPortDoneQueueIteratorClass;

#define G_OMX_TYPE_PORT (g_omx_port_get_type ())
#define G_OMX_PORT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_PORT, GOmxPort))
#define G_OMX_PORT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_PORT, GOmxPortClass))
#define G_OMX_IS_PORT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_PORT))
#define G_OMX_IS_PORT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_PORT))
#define G_OMX_PORT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_PORT, GOmxPortClass))

typedef struct _GOmxPort GOmxPort;
typedef struct _GOmxPortClass GOmxPortClass;
typedef struct _GOmxPortDoneQueueIteratorPrivate GOmxPortDoneQueueIteratorPrivate;
typedef struct _GOmxComponentPrivate GOmxComponentPrivate;

#define G_OMX_TYPE_AUDIO_COMPONENT (g_omx_audio_component_get_type ())
#define G_OMX_AUDIO_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_AUDIO_COMPONENT, GOmxAudioComponent))
#define G_OMX_AUDIO_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_AUDIO_COMPONENT, GOmxAudioComponentClass))
#define G_OMX_IS_AUDIO_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_AUDIO_COMPONENT))
#define G_OMX_IS_AUDIO_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_AUDIO_COMPONENT))
#define G_OMX_AUDIO_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_AUDIO_COMPONENT, GOmxAudioComponentClass))

typedef struct _GOmxAudioComponent GOmxAudioComponent;
typedef struct _GOmxAudioComponentClass GOmxAudioComponentClass;
typedef struct _GOmxAudioComponentPrivate GOmxAudioComponentPrivate;

#define G_OMX_TYPE_IMAGE_COMPONENT (g_omx_image_component_get_type ())
#define G_OMX_IMAGE_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_IMAGE_COMPONENT, GOmxImageComponent))
#define G_OMX_IMAGE_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_IMAGE_COMPONENT, GOmxImageComponentClass))
#define G_OMX_IS_IMAGE_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_IMAGE_COMPONENT))
#define G_OMX_IS_IMAGE_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_IMAGE_COMPONENT))
#define G_OMX_IMAGE_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_IMAGE_COMPONENT, GOmxImageComponentClass))

typedef struct _GOmxImageComponent GOmxImageComponent;
typedef struct _GOmxImageComponentClass GOmxImageComponentClass;
typedef struct _GOmxImageComponentPrivate GOmxImageComponentPrivate;

#define G_OMX_TYPE_VIDEO_COMPONENT (g_omx_video_component_get_type ())
#define G_OMX_VIDEO_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_VIDEO_COMPONENT, GOmxVideoComponent))
#define G_OMX_VIDEO_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_VIDEO_COMPONENT, GOmxVideoComponentClass))
#define G_OMX_IS_VIDEO_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_VIDEO_COMPONENT))
#define G_OMX_IS_VIDEO_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_VIDEO_COMPONENT))
#define G_OMX_VIDEO_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_VIDEO_COMPONENT, GOmxVideoComponentClass))

typedef struct _GOmxVideoComponent GOmxVideoComponent;
typedef struct _GOmxVideoComponentClass GOmxVideoComponentClass;
typedef struct _GOmxVideoComponentPrivate GOmxVideoComponentPrivate;

#define G_OMX_TYPE_OTHER_COMPONENT (g_omx_other_component_get_type ())
#define G_OMX_OTHER_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_OTHER_COMPONENT, GOmxOtherComponent))
#define G_OMX_OTHER_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_OTHER_COMPONENT, GOmxOtherComponentClass))
#define G_OMX_IS_OTHER_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_OTHER_COMPONENT))
#define G_OMX_IS_OTHER_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_OTHER_COMPONENT))
#define G_OMX_OTHER_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_OTHER_COMPONENT, GOmxOtherComponentClass))

typedef struct _GOmxOtherComponent GOmxOtherComponent;
typedef struct _GOmxOtherComponentClass GOmxOtherComponentClass;
typedef struct _GOmxOtherComponentPrivate GOmxOtherComponentPrivate;

#define G_OMX_TYPE_PORT_ARRAY (g_omx_port_array_get_type ())
#define G_OMX_PORT_ARRAY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_TYPE_PORT_ARRAY, GOmxPortArray))
#define G_OMX_PORT_ARRAY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_TYPE_PORT_ARRAY, GOmxPortArrayClass))
#define G_OMX_IS_PORT_ARRAY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_TYPE_PORT_ARRAY))
#define G_OMX_IS_PORT_ARRAY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_TYPE_PORT_ARRAY))
#define G_OMX_PORT_ARRAY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_TYPE_PORT_ARRAY, GOmxPortArrayClass))

typedef struct _GOmxPortArray GOmxPortArray;
typedef struct _GOmxPortArrayClass GOmxPortArrayClass;
typedef struct _GOmxPortArrayPrivate GOmxPortArrayPrivate;

#define G_OMX_PORT_ARRAY_TYPE_ITERATOR (g_omx_port_array_iterator_get_type ())
#define G_OMX_PORT_ARRAY_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_OMX_PORT_ARRAY_TYPE_ITERATOR, GOmxPortArrayIterator))
#define G_OMX_PORT_ARRAY_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), G_OMX_PORT_ARRAY_TYPE_ITERATOR, GOmxPortArrayIteratorClass))
#define G_OMX_PORT_ARRAY_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_OMX_PORT_ARRAY_TYPE_ITERATOR))
#define G_OMX_PORT_ARRAY_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_OMX_PORT_ARRAY_TYPE_ITERATOR))
#define G_OMX_PORT_ARRAY_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), G_OMX_PORT_ARRAY_TYPE_ITERATOR, GOmxPortArrayIteratorClass))

typedef struct _GOmxPortArrayIterator GOmxPortArrayIterator;
typedef struct _GOmxPortArrayIteratorClass GOmxPortArrayIteratorClass;
typedef struct _GOmxPortArrayIteratorPrivate GOmxPortArrayIteratorPrivate;
typedef struct _GOmxPortPrivate GOmxPortPrivate;

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

typedef enum  {
	G_OMX_ERROR_None,
	G_OMX_ERROR_InsufficientResources,
	G_OMX_ERROR_Undefined,
	G_OMX_ERROR_InvalidComponentName,
	G_OMX_ERROR_ComponentNotFound,
	G_OMX_ERROR_InvalidComponent,
	G_OMX_ERROR_BadParameter,
	G_OMX_ERROR_NotImplemented,
	G_OMX_ERROR_Underflow,
	G_OMX_ERROR_Overflow,
	G_OMX_ERROR_Hardware,
	G_OMX_ERROR_InvalidState,
	G_OMX_ERROR_StreamCorrupt,
	G_OMX_ERROR_PortsNotCompatible,
	G_OMX_ERROR_ResourcesLost,
	G_OMX_ERROR_NoMore,
	G_OMX_ERROR_VersionMismatch,
	G_OMX_ERROR_NotReady,
	G_OMX_ERROR_Timeout,
	G_OMX_ERROR_SameState,
	G_OMX_ERROR_ResourcesPreempted,
	G_OMX_ERROR_PortUnresponsiveDuringAllocation,
	G_OMX_ERROR_PortUnresponsiveDuringDeallocation,
	G_OMX_ERROR_PortUnresponsiveDuringStop,
	G_OMX_ERROR_IncorrectStateTransition,
	G_OMX_ERROR_IncorrectStateOperation,
	G_OMX_ERROR_UnsupportedSetting,
	G_OMX_ERROR_UnsupportedIndex,
	G_OMX_ERROR_BadPortIndex,
	G_OMX_ERROR_PortUnpopulated,
	G_OMX_ERROR_ComponentSuspended,
	G_OMX_ERROR_DynamicResourcesUnavailable,
	G_OMX_ERROR_MbErrorsInFrame,
	G_OMX_ERROR_FormatNotDetected,
	G_OMX_ERROR_ContentPipeOpenFailed,
	G_OMX_ERROR_ContentPipeCreationFailed,
	G_OMX_ERROR_SeperateTablesUsed,
	G_OMX_ERROR_TunnelingUnsupported
} GOmxError;
#define G_OMX_ERROR g_omx_error_quark ()
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
	void (*add_component) (GOmxEngine* self, guint id, GOmxComponent* component);
	void (*buffers_begin_transfer) (GOmxEngine* self, GError** error);
	void (*init) (GOmxEngine* self, GError** error);
	void (*set_state) (GOmxEngine* self, OMX_STATETYPE state, GError** error);
	void (*set_state_and_wait) (GOmxEngine* self, OMX_STATETYPE state, GError** error);
	void (*wait_for_state_set) (GOmxEngine* self);
	void (*free_handles) (GOmxEngine* self, GError** error);
};

struct _GOmxComponentList {
	GObject parent_instance;
	GOmxComponentListPrivate * priv;
};

struct _GOmxComponentListClass {
	GObjectClass parent_class;
};

struct _GOmxComponentListIterator {
	GObject parent_instance;
	GOmxComponentListIteratorPrivate * priv;
};

struct _GOmxComponentListIteratorClass {
	GObjectClass parent_class;
};

struct _GOmxPortDoneQueue {
	GObject parent_instance;
	GOmxPortDoneQueuePrivate * priv;
};

struct _GOmxPortDoneQueueClass {
	GObjectClass parent_class;
};

struct _GOmxPortDoneQueueIterator {
	GObject parent_instance;
	GOmxPortDoneQueueIteratorPrivate * priv;
};

struct _GOmxPortDoneQueueIteratorClass {
	GObjectClass parent_class;
};

struct _GOmxComponent {
	GObject parent_instance;
	GOmxComponentPrivate * priv;
	OMX_PORT_PARAM_TYPE ports_param;
	guint id;
};

struct _GOmxComponentClass {
	GObjectClass parent_class;
	void (*init) (GOmxComponent* self, GError** error);
	void (*free_handle) (GOmxComponent* self, GError** error);
	void (*allocate_ports) (GOmxComponent* self, GError** error);
	void (*free_ports) (GOmxComponent* self, GError** error);
	void (*buffers_begin_transfer) (GOmxComponent* self, GError** error);
	void (*wait_for_state) (GOmxComponent* self);
	void (*wait_for_port) (GOmxComponent* self, GError** error);
	void (*wait_for_flush) (GOmxComponent* self);
	void (*set_state) (GOmxComponent* self, OMX_STATETYPE state, GError** error);
	OMX_ERRORTYPE (*buffer_done) (GOmxComponent* self, GOmxPort* port, OMX_BUFFERHEADERTYPE* buffer);
};

struct _GOmxAudioComponent {
	GOmxComponent parent_instance;
	GOmxAudioComponentPrivate * priv;
};

struct _GOmxAudioComponentClass {
	GOmxComponentClass parent_class;
};

struct _GOmxImageComponent {
	GOmxComponent parent_instance;
	GOmxImageComponentPrivate * priv;
};

struct _GOmxImageComponentClass {
	GOmxComponentClass parent_class;
};

struct _GOmxVideoComponent {
	GOmxComponent parent_instance;
	GOmxVideoComponentPrivate * priv;
};

struct _GOmxVideoComponentClass {
	GOmxComponentClass parent_class;
};

struct _GOmxOtherComponent {
	GOmxComponent parent_instance;
	GOmxOtherComponentPrivate * priv;
};

struct _GOmxOtherComponentClass {
	GOmxComponentClass parent_class;
};

typedef void (*GOmxComponentEventFunc) (GOmxComponent* component, guint data1, guint data2, void* event_data, void* user_data);
struct _GOmxPortArray {
	GObject parent_instance;
	GOmxPortArrayPrivate * priv;
};

struct _GOmxPortArrayClass {
	GObjectClass parent_class;
};

struct _GOmxPortArrayIterator {
	GObject parent_instance;
	GOmxPortArrayIteratorPrivate * priv;
};

struct _GOmxPortArrayIteratorClass {
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
struct _GOmxSemaphore {
	GObject parent_instance;
	GOmxSemaphorePrivate * priv;
};

struct _GOmxSemaphoreClass {
	GObjectClass parent_class;
};


GType g_omx_core_get_type (void);
GQuark g_omx_error_quark (void);
void g_omx_core_init (GOmxCore* self, GError** error);
void g_omx_core_deinit (GOmxCore* self, GError** error);
void g_omx_core_get_handle (GOmxCore* self, void** component, const char* component_name, void* app_data, OMX_CALLBACKTYPE* callbacks, GError** error);
void g_omx_core_free_handle (GOmxCore* self, void* handle, GError** error);
void g_omx_core_setup_tunnel (GOmxCore* self, void* output, guint32 port_output, void* input, guint32 port_input, GError** error);
GOmxCore* g_omx_core_open (const char* soname);
GOmxCore* g_omx_core_new (void);
GOmxCore* g_omx_core_construct (GType object_type);
GModule* g_omx_core_get_module (GOmxCore* self);
GType g_omx_engine_get_type (void);
GType g_omx_component_get_type (void);
guint g_omx_engine_get_n_components (GOmxEngine* self);
void g_omx_engine_add_component (GOmxEngine* self, guint id, GOmxComponent* component);
void g_omx_engine_buffers_begin_transfer (GOmxEngine* self, GError** error);
void g_omx_engine_init (GOmxEngine* self, GError** error);
void g_omx_engine_set_state (GOmxEngine* self, OMX_STATETYPE state, GError** error);
void g_omx_engine_set_state_and_wait (GOmxEngine* self, OMX_STATETYPE state, GError** error);
void g_omx_engine_wait_for_state_set (GOmxEngine* self);
void g_omx_engine_free_handles (GOmxEngine* self, GError** error);
GOmxEngine* g_omx_engine_new (void);
GOmxEngine* g_omx_engine_construct (GType object_type);
GType g_omx_component_list_get_type (void);
GOmxComponentList* g_omx_engine_get_components (GOmxEngine* self);
GType g_omx_port_done_queue_get_type (void);
GOmxPortDoneQueue* g_omx_engine_get_ports_with_buffer_done (GOmxEngine* self);
void g_omx_component_list_append (GOmxComponentList* self, GOmxComponent* component);
GType g_omx_component_list_iterator_get_type (void);
GOmxComponentListIterator* g_omx_component_list_iterator (GOmxComponentList* self);
GOmxComponent* g_omx_component_list_get (GOmxComponentList* self, guint index);
GOmxComponentList* g_omx_component_list_new (void);
GOmxComponentList* g_omx_component_list_construct (GType object_type);
guint g_omx_component_list_get_length (GOmxComponentList* self);
GOmxComponentListIterator* g_omx_component_list_iterator_new (GOmxComponentList* list);
GOmxComponentListIterator* g_omx_component_list_iterator_construct (GType object_type, GOmxComponentList* list);
gboolean g_omx_component_list_iterator_next (GOmxComponentListIterator* self);
GOmxComponent* g_omx_component_list_iterator_get (GOmxComponentListIterator* self);
GType g_omx_port_done_queue_iterator_get_type (void);
GOmxPortDoneQueueIterator* g_omx_port_done_queue_iterator (GOmxPortDoneQueue* self);
GOmxPortDoneQueue* g_omx_port_done_queue_new (void);
GOmxPortDoneQueue* g_omx_port_done_queue_construct (GType object_type);
GType g_omx_port_get_type (void);
GAsyncQueue* g_omx_port_done_queue_get_queue (GOmxPortDoneQueue* self);
GOmxPortDoneQueueIterator* g_omx_port_done_queue_iterator_new (GOmxPortDoneQueue* queue);
GOmxPortDoneQueueIterator* g_omx_port_done_queue_iterator_construct (GType object_type, GOmxPortDoneQueue* queue);
gboolean g_omx_port_done_queue_iterator_next (GOmxPortDoneQueueIterator* self);
GOmxPort* g_omx_port_done_queue_iterator_get (GOmxPortDoneQueueIterator* self);
GType g_omx_audio_component_get_type (void);
GOmxAudioComponent* g_omx_audio_component_new (GOmxCore* core, const char* comp_name);
GOmxAudioComponent* g_omx_audio_component_construct (GType object_type, GOmxCore* core, const char* comp_name);
GType g_omx_image_component_get_type (void);
GOmxImageComponent* g_omx_image_component_new (GOmxCore* core, const char* comp_name);
GOmxImageComponent* g_omx_image_component_construct (GType object_type, GOmxCore* core, const char* comp_name);
GType g_omx_video_component_get_type (void);
GOmxVideoComponent* g_omx_video_component_new (GOmxCore* core, const char* comp_name);
GOmxVideoComponent* g_omx_video_component_construct (GType object_type, GOmxCore* core, const char* comp_name);
GType g_omx_other_component_get_type (void);
GOmxOtherComponent* g_omx_other_component_new (GOmxCore* core, const char* comp_name);
GOmxOtherComponent* g_omx_other_component_construct (GType object_type, GOmxCore* core, const char* comp_name);
GOmxComponent* g_omx_component_new (GOmxCore* core, const char* comp_name, OMX_INDEXTYPE index);
GOmxComponent* g_omx_component_construct (GType object_type, GOmxCore* core, const char* comp_name, OMX_INDEXTYPE index);
guint g_omx_component_get_n_ports (GOmxComponent* self);
void g_omx_component_init (GOmxComponent* self, GError** error);
void g_omx_component_free_handle (GOmxComponent* self, GError** error);
void g_omx_component_allocate_ports (GOmxComponent* self, GError** error);
void g_omx_component_free_ports (GOmxComponent* self, GError** error);
void g_omx_component_buffers_begin_transfer (GOmxComponent* self, GError** error);
void g_omx_component_wait_for_state (GOmxComponent* self);
void g_omx_component_wait_for_port (GOmxComponent* self, GError** error);
void g_omx_component_wait_for_flush (GOmxComponent* self);
void g_omx_component_set_state (GOmxComponent* self, OMX_STATETYPE state, GError** error);
OMX_ERRORTYPE g_omx_component_can_set_state (GOmxComponent* self, OMX_STATETYPE next_state);
void g_omx_component_set_state_and_wait (GOmxComponent* self, OMX_STATETYPE state, GError** error);
OMX_STATETYPE g_omx_component_get_state (GOmxComponent* self, GError** error);
void g_omx_component_event_set_function (GOmxComponent* self, OMX_EVENTTYPE event, GOmxComponentEventFunc event_function, void* event_function_target);
const char* g_omx_component_get_name (GOmxComponent* self);
void g_omx_component_set_name (GOmxComponent* self, const char* value);
void* g_omx_component_get_handle (GOmxComponent* self);
GType g_omx_port_array_get_type (void);
GOmxPortArray* g_omx_component_get_ports (GOmxComponent* self);
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
gboolean g_omx_component_get_no_allocate_buffers (GOmxComponent* self);
void g_omx_component_set_no_allocate_buffers (GOmxComponent* self, gboolean value);
GOmxPortArray* g_omx_port_array_new (guint length, guint start);
GOmxPortArray* g_omx_port_array_construct (GType object_type, guint length, guint start);
GType g_omx_port_array_iterator_get_type (void);
GOmxPortArrayIterator* g_omx_port_array_iterator (GOmxPortArray* self);
GOmxPort* g_omx_port_array_get (GOmxPortArray* self, guint index);
void g_omx_port_array_set (GOmxPortArray* self, guint index, GOmxPort* port);
guint g_omx_port_array_get_start (GOmxPortArray* self);
void g_omx_port_array_set_start (GOmxPortArray* self, guint value);
guint g_omx_port_array_get_length (GOmxPortArray* self);
void g_omx_port_array_set_length (GOmxPortArray* self, guint value);
GOmxPortArrayIterator* g_omx_port_array_iterator_new (GOmxPortArray* array);
GOmxPortArrayIterator* g_omx_port_array_iterator_construct (GType object_type, GOmxPortArray* array);
gboolean g_omx_port_array_iterator_next (GOmxPortArrayIterator* self);
GOmxPort* g_omx_port_array_iterator_get (GOmxPortArrayIterator* self);
GOmxPort* g_omx_port_new (GOmxComponent* component, guint32 index);
GOmxPort* g_omx_port_construct (GType object_type, GOmxComponent* component, guint32 index);
void g_omx_port_init (GOmxPort* self, GError** error);
void g_omx_port_get_parameter (GOmxPort* self, GError** error);
void g_omx_port_set_parameter (GOmxPort* self, GError** error);
void g_omx_port_allocate_buffers (GOmxPort* self, GError** error);
void g_omx_port_setup_tunnel_with_port (GOmxPort* self, GOmxPort* port, GError** error);
void g_omx_port_use_buffers_of_port (GOmxPort* self, GOmxPort* port, GError** error);
void g_omx_port_use_buffers_of_array (GOmxPort* self, guint8** array, int array_length1, GError** error);
void g_omx_port_enable (GOmxPort* self, GError** error);
void g_omx_port_disable (GOmxPort* self, GError** error);
void g_omx_port_flush (GOmxPort* self, GError** error);
guint g_omx_port_get_n_buffers (GOmxPort* self);
guint g_omx_port_get_buffer_size (GOmxPort* self);
void g_omx_port_free_buffers (GOmxPort* self, GError** error);
OMX_BUFFERHEADERTYPE* g_omx_port_pop_buffer (GOmxPort* self);
void g_omx_port_push_buffer (GOmxPort* self, OMX_BUFFERHEADERTYPE* buffer, GError** error);
void g_omx_port_set_buffer_done_function (GOmxPort* self, GOmxPortBufferDoneFunc buffer_done_func, void* buffer_done_func_target);
void g_omx_port_buffer_done (GOmxPort* self, OMX_BUFFERHEADERTYPE* buffer);
void g_omx_port_buffers_begin_transfer (GOmxPort* self, GError** error);
const char* g_omx_port_get_name (GOmxPort* self);
void g_omx_port_set_name (GOmxPort* self, const char* value);
GOmxComponent* g_omx_port_get_component (GOmxPort* self);
void g_omx_port_set_component (GOmxPort* self, GOmxComponent* value);
GOmxPort* g_omx_port_get_peer (GOmxPort* self);
guint g_omx_port_get_index (GOmxPort* self);
void g_omx_port_set_index (GOmxPort* self, guint value);
gboolean g_omx_port_get_eos (GOmxPort* self);
GAsyncQueue* g_omx_port_get_queue (GOmxPort* self);
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
const char* g_omx_command_to_string (OMX_COMMANDTYPE command);
const char* g_omx_state_to_string (OMX_STATETYPE state);
const char* g_omx_event_to_string (OMX_EVENTTYPE event);
const char* g_omx_error_to_string (OMX_ERRORTYPE _error_);
void g_omx_try_run (OMX_ERRORTYPE e, GError** error);


G_END_DECLS

#endif
