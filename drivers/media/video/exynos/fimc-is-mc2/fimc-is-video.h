#ifndef FIMC_IS_VIDEO_H
#define FIMC_IS_VIDEO_H

#define FIMC_IS_MAX_BUF_NUM			(16)
#define FIMC_IS_MAX_BUf_PLANE_NUM		(3)

enum fimc_is_video_state {
	FIMC_IS_VIDEO_BUFFER_PREPARED,
	FIMC_IS_VIDEO_STREAM_ON
};

struct fimc_is_fmt {
	enum v4l2_mbus_pixelcode	mbus_code;
	char				*name;
	u32				pixelformat;
	u16				num_planes;
};

struct fimc_is_frame {
	struct fimc_is_fmt		format;
	u16				width;
	u16				height;
};

struct fimc_is_video_common {
	struct video_device		vd;
	struct media_pad		pads;
	struct vb2_queue		vbq;
	const struct fimc_is_vb2	*vb2;
	struct fimc_is_frame		frame;
	u32				buffers;
	u32				buf_ref_cnt;
	u32				buf_mask;

	unsigned long			state;

	void				*core;
	void				*device;

	u32 buf_dva[FIMC_IS_MAX_BUF_NUM][FIMC_IS_MAX_BUf_PLANE_NUM];
	u32 buf_kva[FIMC_IS_MAX_BUF_NUM][FIMC_IS_MAX_BUf_PLANE_NUM];
};

struct fimc_is_fmt *fimc_is_find_format(u32 *pixelformat,
	u32 *mbus_code, int index);
void fimc_is_set_plane_size(struct fimc_is_frame *frame,
						unsigned int sizes[]);

int fimc_is_video_probe(struct fimc_is_video_common *video,
	void *core_data,
	void *video_data,
	char *video_name,
	u32 video_number,
	u32 vbq_type,
	const struct v4l2_file_operations *fops,
	const struct v4l2_ioctl_ops *ioctl_ops,
	const struct vb2_ops *vb2_ops);
int fimc_is_video_open(struct fimc_is_video_common *video, void *device);
int fimc_is_video_close(struct fimc_is_video_common *video);
int fimc_is_video_reqbufs(struct fimc_is_video_common *video,
	struct v4l2_requestbuffers *request);
int fimc_is_video_set_format_mplane(struct fimc_is_video_common *video,
	struct v4l2_format *format);
int fimc_is_video_buffer_queue(struct fimc_is_video_common *video,
	struct vb2_buffer *vb);

#endif