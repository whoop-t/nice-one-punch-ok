#include <stdlib.h>
#include <zephyr/kernel.h>
#include "left_animation.h"

LV_IMG_DECLARE(left_image);

const lv_img_dsc_t *anim_imgs[] = {
    &left_image,
};

void draw_left_animation(lv_obj_t *canvas) {
#if IS_ENABLED(CONFIG_NICE_LEFT_ANIMATION)
    lv_obj_t *art = lv_animimg_create(canvas);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)anim_imgs, 16);
    lv_animimg_set_duration(art, CONFIG_NICE_LEFT_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);
#else
    lv_obj_t *art = lv_img_create(canvas);

    lv_img_set_src(art, &left_image);
#endif

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}
