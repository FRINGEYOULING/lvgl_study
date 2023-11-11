//
// Created by 22755 on 2023/11/9.
//

#include "myui.h"
#include "lvgl/lvgl.h"
#include "stdio.h"
#include <unistd.h>
#include "time.h"
#include "myui.h"
LV_FONT_DECLARE(lv_font_chinese);
LV_IMG_DECLARE(wifi);
LV_IMG_DECLARE(_tel_alpha_10x10);
LV_IMG_DECLARE(Start);
LV_IMG_DECLARE(Stop);
LV_IMG_DECLARE(Menu);
LV_IMG_DECLARE(Locat);
int a = 0;
unsigned char cut = 0;
bool Switch_on_off = false;
bool Switch = false;
lv_obj_t *home_bg;
lv_obj_t *foce_bg;
lv_obj_t *slider;
lv_obj_t *switch1;
lv_obj_t *lable;
lv_obj_t *Wlan;
lv_obj_t *phone;
lv_obj_t *start_img;
lv_obj_t *menu_img;
lv_obj_t *loca_img;
lv_obj_t *start_btn;
lv_obj_t *menu_btn;
lv_obj_t *loca_btn;
lv_anim_t ani;
lv_anim_t ani_foce;
lv_anim_t ani_btn1;
lv_anim_t ani_btn2;
lv_anim_t ani_btn3;

//菜单切换动画
lv_anim_t menu_ani;
lv_anim_t old_menu_ani;
//菜单页面
lv_obj_t *menu_bg;
lv_obj_t *menu_fo;
//菜单按键
lv_obj_t *menu_btn;

lv_timer_t *task;
lv_obj_t  *del;
static void anim_end_cb(lv_anim_t * anim)
{
    /* 动画结束时执行的操作 */
    lv_obj_del(del);
}

void display_chane(lv_obj_t * obj);
static void my_event(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_event_code_t *unit = lv_event_get_target(e);
    if(unit == slider)
    {
        if(code == LV_EVENT_VALUE_CHANGED)
            lv_label_set_text_fmt(lable,"%d", lv_slider_get_value(slider));
    }
    if(unit == switch1)
    {
        if(code == LV_EVENT_VALUE_CHANGED)
        {
            if(lv_obj_has_state(switch1, LV_STATE_CHECKED))
            {
                Switch_on_off = true;
                Switch = true;
            }
            else
                Switch_on_off = false;
        }
    }
    if(unit == start_btn)
    {
        cut++;
        if(code==LV_EVENT_PRESSED&&cut==1)
        {
            lv_img_set_src(start_img,&Stop);
            lv_obj_set_align(start_img,LV_ALIGN_CENTER);
        }
        if(code==LV_EVENT_PRESSED&&cut==2)
        {
            lv_img_set_src(start_img,&Start);
            lv_obj_set_align(start_img,LV_ALIGN_CENTER);
            cut=0;
        }
    }
    if(unit == menu_btn)
    {
        if(code==LV_EVENT_PRESSED)
        {
//            lv_obj_del(home_bg);
            menu_ob();
            Menu_load(menu_bg,home_bg,LV_SCR_LOAD_ANIM_MOVE_TOP,650,50);
            lv_timer_set_repeat_count(task,0);
            Switch = false;
        }
    }
    if(unit == menu_btn)
    {
        if(code == LV_EVENT_CLICKED)
        {
//            lv_obj_del(menu_bg);
            my_ui();
            Menu_load(home_bg,menu_bg,LV_SCR_LOAD_ANIM_MOVE_TOP,750,50);
            Time_reset(500,-1);
        }
    }


}

void Time_reset(uint32_t period,int32_t repeat_count)
{
    task = lv_timer_create(data_update,period,0);
    lv_timer_set_repeat_count(task,repeat_count);
}

void data_update(lv_timer_t * tmr)
{
    if(Switch==true)
    {
        if(Switch_on_off==true)
        {
            lv_label_set_text_fmt(lable,"%d KM/H", lv_rand(10,80));
        }
        else if(Switch_on_off==false)
        {
            lv_label_set_text_fmt(lable,"N/A");
            Switch = false;
        }
    }
}


static lv_style_t  style;//必须是static;
static lv_style_t  menu_style;//必须是static;
void lv_all_init()
{
    lv_style_init(&style);
    lv_style_init(&menu_style);
    lv_anim_init(&ani);
    lv_anim_init(&ani_btn1);
    lv_anim_init(&ani_foce);
    lv_anim_init(&ani_btn2);
    lv_anim_init(&ani_btn3);
    lv_anim_init(&menu_ani);
    lv_anim_init(&old_menu_ani);
    Time_reset(500,-1);
}

void Menu_load(lv_obj_t *obj,lv_obj_t *old_obj,lv_scr_load_anim_t anim_type,uint32_t time,uint32_t delay)
{
    lv_disp_t * d = lv_obj_get_disp(obj);
    lv_anim_set_var(&menu_ani,obj);
    switch (anim_type) {
        case LV_SCR_LOAD_ANIM_MOVE_LEFT:
            lv_anim_set_exec_cb(&menu_ani, (lv_anim_exec_xcb_t)lv_obj_set_x);
            lv_anim_set_values(&menu_ani, lv_disp_get_hor_res(d), 0);
            break;
        case LV_SCR_LOAD_ANIM_MOVE_RIGHT:
            lv_anim_set_exec_cb(&menu_ani, (lv_anim_exec_xcb_t)lv_obj_set_x);
            lv_anim_set_values(&menu_ani, -lv_disp_get_hor_res(d), 0);
            break;
        case LV_SCR_LOAD_ANIM_MOVE_TOP:
            lv_anim_set_exec_cb(&menu_ani, (lv_anim_exec_xcb_t)lv_obj_set_y);
            lv_anim_set_values(&menu_ani, lv_disp_get_ver_res(d), 0);
            break;
        case LV_SCR_LOAD_ANIM_MOVE_BOTTOM:
            lv_anim_set_exec_cb(&menu_ani, (lv_anim_exec_xcb_t)lv_obj_set_y);
            lv_anim_set_values(&menu_ani, -lv_disp_get_ver_res(d), 0);
            break;
    }
//    lv_anim_set_exec_cb(&menu_ani,(lv_anim_exec_xcb_t) lv_obj_set_y);
//    lv_anim_set_values(&menu_ani,240,0);
    lv_anim_set_time(&menu_ani,time);
    lv_anim_set_delay(&menu_ani,delay);
    lv_anim_set_path_cb(&menu_ani,lv_anim_path_ease_out);
    lv_anim_set_ready_cb(&menu_ani,anim_end_cb);
    del = old_obj;
    lv_anim_start(&menu_ani);
}

void my_ui()
{
    //背景obj
    //主页面
    home_bg = lv_obj_create(lv_scr_act());
    lv_obj_set_size(home_bg,240,240);
    lv_obj_set_scrollbar_mode(home_bg,LV_SCROLLBAR_MODE_OFF );
    lv_obj_set_style_bg_color(home_bg,lv_color_hex(0x000000),LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(home_bg,0,LV_STATE_DEFAULT);
    lv_style_set_radius(&style,15);

    //前景obj
    lv_style_set_bg_color(&style, lv_color_hex(0x363636));
    foce_bg = lv_obj_create(home_bg);
    lv_obj_set_style_border_width(foce_bg,0,LV_STATE_DEFAULT);
    lv_anim_set_var(&ani_foce,foce_bg);
    lv_obj_set_align(foce_bg,LV_ALIGN_TOP_MID);
    lv_obj_set_size(foce_bg,240,0);
    lv_anim_set_exec_cb(&ani_foce,(lv_anim_exec_xcb_t) lv_obj_set_height);
    lv_anim_set_time(&ani_foce,750);
    lv_anim_set_values(&ani_foce,0,95);
    lv_anim_set_delay(&ani_foce,400);
    lv_anim_set_path_cb(&ani_foce,lv_anim_path_ease_out);
    lv_anim_start(&ani_foce);
//    lv_obj_set_size(foce_bg,240,95);
    lv_obj_add_style(foce_bg,&style,LV_STATE_DEFAULT);
    lv_obj_set_scrollbar_mode(foce_bg,LV_SCROLLBAR_MODE_OFF );

    //滑杆
    slider = lv_slider_create(home_bg);
    lv_obj_set_size(slider,100,20);
    lv_slider_set_range(slider,0,100);

    lv_obj_align(slider,LV_ALIGN_CENTER,0,20);
    lv_obj_set_style_bg_color(slider,lv_color_hex(0x9400D3),LV_STATE_DEFAULT|LV_PART_INDICATOR);
    lv_obj_set_style_bg_color(slider,lv_color_hex(0xFF1493),LV_STATE_DEFAULT|LV_PART_KNOB);

    switch1 = lv_switch_create(home_bg);//父对象 lv_scr_ac活动屏幕
    lv_obj_set_size(switch1,50,20);
    lv_obj_set_pos(switch1,0,140);
    lv_obj_set_style_bg_color(switch1,lv_color_hex(0x9400D3),LV_STATE_CHECKED|LV_PART_INDICATOR);

    lable = lv_label_create(foce_bg);
    lv_label_set_text_fmt(lable,"%dKm/s", lv_slider_get_value(slider));
    lv_obj_set_style_text_color(lable,lv_color_hex(0xFFFFFF),LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(lable,&lv_font_montserrat_24,LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_align(lable,LV_ALIGN_CENTER);

    //事件处理
    lv_obj_add_event_cb(slider,my_event,LV_EVENT_VALUE_CHANGED,NULL);
    lv_obj_add_event_cb(switch1,my_event,LV_EVENT_VALUE_CHANGED,NULL);

    //按钮
    start_btn = lv_btn_create(home_bg);
    loca_btn = lv_btn_create(home_bg);
    menu_btn = lv_btn_create(home_bg);
    menu_img = lv_img_create(menu_btn);
    loca_img = lv_img_create(loca_btn);
    start_img = lv_img_create(start_btn);
    lv_obj_set_align(start_btn,LV_ALIGN_BOTTOM_MID);
    lv_obj_align(menu_btn,LV_ALIGN_BOTTOM_LEFT,15,0);
    lv_obj_align(loca_btn,LV_ALIGN_BOTTOM_RIGHT,-15,0);
    lv_obj_set_style_bg_color(start_btn,lv_color_hex(0x363636),LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(menu_btn,lv_color_hex(0x363636),LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(loca_btn,lv_color_hex(0x363636),LV_STATE_DEFAULT);
    lv_img_set_src(start_img,&Start);
    lv_img_set_src(menu_img,&Menu);
    lv_img_set_src(loca_img,&Locat);
    lv_obj_set_align(start_img,LV_ALIGN_CENTER);
    lv_obj_set_align(menu_img,LV_ALIGN_CENTER);
    lv_obj_set_align(loca_img,LV_ALIGN_CENTER);
    //三个按键的动画设置
    lv_anim_set_var(&ani_btn1,start_btn);
    lv_anim_set_exec_cb(&ani_btn1,(lv_anim_exec_xcb_t) lv_obj_set_height);
    lv_anim_set_time(&ani_btn1,650);
    lv_anim_set_values(&ani_btn1,0,23);
    lv_anim_set_delay(&ani_btn1,800);
    lv_anim_set_path_cb(&ani_btn1,lv_anim_path_ease_out);
    lv_anim_start(&ani_btn1);

    lv_anim_set_var(&ani_btn2,menu_btn);
    lv_anim_set_exec_cb(&ani_btn2,(lv_anim_exec_xcb_t) lv_obj_set_height);
    lv_anim_set_time(&ani_btn2,650);
    lv_anim_set_values(&ani_btn2,0,23);
    lv_anim_set_delay(&ani_btn2,800);
    lv_anim_set_path_cb(&ani_btn2,lv_anim_path_ease_out);
    lv_anim_start(&ani_btn2);

    lv_anim_set_var(&ani_btn3,loca_btn);
    lv_anim_set_exec_cb(&ani_btn3,(lv_anim_exec_xcb_t) lv_obj_set_height);
    lv_anim_set_time(&ani_btn3,650);
    lv_anim_set_values(&ani_btn3,0,23);
    lv_anim_set_delay(&ani_btn3,800);
    lv_anim_set_path_cb(&ani_btn3,lv_anim_path_ease_out);
    lv_anim_start(&ani_btn3);
    lv_obj_add_event_cb(start_btn,my_event,LV_EVENT_PRESSED,NULL);
    lv_obj_add_event_cb(menu_btn,my_event,LV_EVENT_PRESSED,NULL);

    Wlan = lv_img_create(foce_bg);
    lv_img_set_src(Wlan,&wifi);
    lv_obj_set_pos(Wlan,0,0);
    lv_anim_set_var(&ani,Wlan);
    lv_anim_set_exec_cb(&ani,(lv_anim_exec_xcb_t) lv_obj_set_width);
    lv_anim_set_time(&ani,450);
    lv_anim_set_values(&ani,0,14);
    lv_anim_set_delay(&ani,400);
    lv_anim_set_path_cb(&ani,lv_anim_path_ease_out);
    lv_anim_start(&ani);
    phone = lv_img_create(foce_bg);
    lv_img_set_src(phone,&_tel_alpha_10x10);
    lv_obj_set_pos(phone,20,0);




//    lv_obj_set_align(switch1,LV_ALIGN_CENTER);
//    lv_obj_t *switch2 = lv_switch_create(switch1);//子对象超出父对象范围不显示
//    lv_obj_set_size(switch2,10,2);
//    lv_obj_set_pos(switch2,50,60);

}

void menu_ob()
{
    //菜单页面
    menu_bg = lv_obj_create(lv_scr_act());
    lv_obj_set_size(menu_bg,240,240);
    lv_obj_set_style_bg_color(menu_bg,lv_color_hex(0x000000),LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(menu_bg,0,LV_STATE_DEFAULT);
    
    menu_fo = lv_obj_create(menu_bg);
    lv_obj_set_size(menu_fo,100,100);
    lv_obj_set_style_bg_color(menu_fo,lv_color_hex(0xFFFFFF),LV_STATE_DEFAULT);
    lv_obj_align(menu_fo,LV_ALIGN_CENTER,0,0);

    menu_btn = lv_btn_create(menu_fo);
    lv_obj_set_size(menu_btn,25,25);
    lv_obj_set_align(menu_btn,LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(menu_btn,lv_color_hex(0x363636),LV_STATE_DEFAULT);
    lv_obj_add_event_cb(menu_btn,my_event,LV_EVENT_CLICKED,NULL);
}

void display_chane(lv_obj_t * obj)
{

}