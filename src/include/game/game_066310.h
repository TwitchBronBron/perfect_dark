#ifndef IN_GAME_GAME_066310_H
#define IN_GAME_GAME_066310_H
#include <ultra64.h>
#include "types.h"

void alarmActivate(void);
void alarmDeactivate(void);
bool alarmIsActive(void);
bool audioPlayFromProp(s32 channel_id, s16 audio_id, s32 volumemaybe, struct prop *prop, s32 arg4, s32 arg5);
f32 countdownTimerGetValue(void);
bool countdownTimerIsHidden(void);
bool countdownTimerIsRunning(void);
void countdownTimerSetRunning(bool running);
void countdownTimerSetValue(f32 frames);
void countdownTimerSetVisible(u32 flag, bool show);
void countdownTimerTick(void);
bool func0f066310(struct prop *doorprop, bool arg1);
u32 func0f0665ac(void);
u32 func0f066640(void);
u32 func0f0666cc(void);
u32 func0f0667ac(void);
u32 func0f0667b4(void);
u32 func0f0667bc(void);
u32 func0f0667c4(void);
u32 func0f0667cc(void);
u32 func0f0667d4(void);
u32 func0f0667dc(void);
u32 func0f06680c(void);
u32 func0f06683c(void);
u32 func0f06686c(void);
u32 func0f06689c(void);
u32 func0f0668cc(void);
u32 func0f0668fc(void);
u32 func0f06692c(void);
u32 func0f06695c(void);
u32 func0f06698c(void);
u32 func0f0669bc(void);
u32 func0f0669ec(void);
u32 func0f066a1c(void);
u32 func0f066abc(void);
u32 func0f066b5c(void);
u32 func0f067424(void);
u32 func0f0674bc(void);
u32 func0f0675c8(void);
u32 func0f0677ac(void);
u32 func0f0678f8(void);
u32 func0f06797c(void);
u32 func0f0679ac(void);
u32 func0f067bc4(void);
u32 func0f067d88(void);
u32 func0f067dc4(void);
u32 func0f068018(void);
u32 func0f06803c(void);
struct defaultobj *func0f0681c0(s32 pad_id);
u32 func0f068218(void);
u32 func0f0682dc(void);
u32 func0f0682fc(void);
u32 func0f068368(void);
u32 func0f06843c(void);
void func0f0685e4(struct prop *prop);
u32 func0f068694(void);
u32 func0f0686e0(void);
u32 func0f0686f0(void);
u32 func0f068760(void);
s32 func0f0687b8(struct defaultobj *obj);
u32 func0f0687e4(void);
u32 func0f0688f4(void);
u32 func0f06896c(void);
u32 func0f068998(void);
u32 func0f068aa8(void);
u32 func0f068ad4(void);
u32 func0f068af4(void);
u32 func0f068b14(void);
u32 func0f068c04(void);
u32 func0f068fc8(void);
u32 func0f069144(void);
u32 func0f069630(void);
u32 func0f069710(void);
u32 func0f069750(void);
u32 func0f069850(void);
u32 func0f069b4c(void);
u32 func0f069c1c(void);
void func0f069c70(struct defaultobj *obj, bool arg1, bool arg2);
u32 func0f069cd8(void);
u32 func0f069d38(void);
u32 func0f06a170(void);
u32 func0f06a1ec(void);
u32 func0f06a52c(void);
u32 func0f06a550(void);
u32 func0f06a580(void);
u32 func0f06a620(void);
void func0f06a730(struct defaultobj *obj, struct pad *newpad, f32 *matrix, s16 *arg3, struct pad *arg4);
u32 func0f06ab60(void);
u32 func0f06ac40(void);
void func0f06ac90(struct prop *prop);
void setupParseObject(u32 *ptr, bool arg1, bool arg2);
void setupParseObjectWithArg2False(u32 *ptr, bool arg1);
u32 func0f06b36c(void);
u32 func0f06b39c(void);
u32 func0f06b488(void);
u32 func0f06b610(void);
u32 func0f06be44(void);
u32 func0f06bea0(void);
u32 func0f06c28c(void);
u32 func0f06c8ac(void);
u32 func0f06cd00(void);
u32 func0f06d37c(void);
void func0f06d90c(f32 *frac, f32 maxfrac, f32 *fracspeed, f32 accel, f32 decel, f32 maxspeed);
u32 func0f06db00(void);
u32 func0f06dbd8(void);
u32 func0f06e87c(void);
u32 func0f06e9cc(void);
u32 func0f06eb4c(void);
u32 func0f06ec20(void);
u32 func0f06ed64(void);
u32 func0f06ef44(void);
u32 func0f06f0a0(void);
u32 func0f06f314(void);
u32 func0f06f504(void);
u32 func0f06f54c(void);
u32 func0f07063c(void);
u32 func0f070698(void);
u32 func0f0706f8(void);
u32 func0f07079c(void);
u32 func0f07092c(void);
u32 func0f070a1c(void);
u32 func0f070bd0(void);
u32 func0f070ca0(void);
void liftActivate(struct prop *prop, u8 liftnum);
struct prop *liftFindByPad(s16 padnum);
u32 func0f070eac(void);
u32 func0f070f08(void);
void liftGoToStop(struct liftobj *lift, s32 stopnum);
u32 func0f071360(void);
u32 func0f0713e4(void);
u32 func0f0714b8(void);
u32 func0f0720b4(void);
u32 func0f0720d8(void);
u32 func0f072110(void);
u32 func0f072144(void);
u32 func0f072650(void);
u32 func0f0726ec(void);
u32 func0f072774(void);
u32 func0f0727d4(void);
u32 func0f072adc(void);
u32 func0f0732d4(void);
u32 func0f073478(void);
u32 func0f073ae8(void);
u32 func0f073c6c(void);
u32 func0f076f30(void);
u32 func0f07731c(void);
u32 func0f077448(void);
u32 func0f07766c(void);
u32 func0f077c10(void);
u32 func0f078094(void);
u32 func0f0782ac(void);
u32 func0f078930(void);
u32 func0f078a2c(void);
u32 func0f078be0(void);
u32 func0f078c78(void);
u32 func0f079ca4(void);
u32 func0f079f1c(void);
u32 func0f07accc(void);
struct chopperobj *chopperFromHovercar(struct chopperobj *obj);
u32 func0f07ae18(struct chopperobj *chopper, u32 arg1);
bool chopperCheckTargetVisible(struct chopperobj *obj);
void chopperSetTarget(struct chopperobj *obj, u32 chrnum);
bool chopperAttack(struct chopperobj *obj);
bool chopperStop(struct chopperobj *obj);
bool chopperSetArmed(struct chopperobj *obj, bool armed);
void chopperRestartTimer(struct chopperobj *obj);
f32 chopperGetTimer(struct chopperobj *heli);
void chopperSetMaxDamage(struct chopperobj *obj, s16 health);
u32 func0f07b164(void);
u32 chopperFireRocket(struct chopperobj *obj, u32 arg1);
u32 func0f07b3f0(void);
u32 func0f07ba38(void);
u32 func0f07c12c(void);
u32 func0f07c7b0(void);
u32 func0f07c830(void);
u32 func0f07cacc(void);
u32 func0f07d1e4(void);
u32 func0f07df74(void);
u32 func0f07dfd0(void);
u32 func0f07e058(void);
u32 func0f07e0b8(void);
u32 func0f07e184(void);
u32 func0f07e1fc(void);
u32 func0f07e2cc(void);
u32 func0f07e468(void);
u32 func0f07e474(void);
u32 func0f07e758(void);
u32 func0f07f6d0(void);
u32 func0f07f918(void);
u32 imageSlotSetImage(struct image *image, u32 arg1, struct defaultobj *obj);
u32 func0f07fbf0(void);
u32 func0f07fbf8(void);
u32 func0f0809c4(void);
u32 func0f080f8c(void);
u32 func0f081220(void);
u32 func0f081310(void);
u32 func0f081c18(void);
u32 func0f081ccc(void);
u32 func0f0826cc(void);
void func0f082964(struct prop *prop, s32 arg1);
u32 func0f082a1c(void);
u32 func0f082d74(void);
u32 func0f082e84(void);
u32 func0f082f88(struct prop *prop);
u32 func0f08307c(void);
u32 func0f083db0(void);
u32 func0f0840ac(void);
u32 func0f0841dc(void);
u32 func0f084594(void);
u32 func0f0849dc(void);
u32 func0f084ce0(void);
u32 func0f084cf0(void);
u32 func0f084e58(void);
u32 func0f084f64(void);
u32 func0f085050(void);
u32 func0f085194(void);
u32 func0f0851ec(void);
u32 func0f085270(void);
void func0f0852ac(struct defaultobj *obj, f32 damage, struct coord *pos, s32 arg3, s32 arg4);
u32 func0f0859a0(void);
u32 func0f085e00(void);
u32 func0f085eac(void);
u32 func0f086918(void);
u32 objIsHealthy(struct defaultobj *obj);
u32 func0f0869cc(void);
u32 func0f086d60(void);
void func0f086f40(struct prop *prop);
void propObjSetOrUnsetHiddenFlag00400000(struct prop *prop, bool enable);
u32 func0f087458(void);
void propObjGetBbox(struct prop *prop, f32 *width, f32 *ymax, f32 *ymin);
u32 func0f087638(void);
u32 func0f087668(void);
u32 func0f08791c(void);
u32 func0f087b0c(void);
u32 func0f087c0c(void);
u32 func0f087d10(void);
u32 func0f087e40(void);
u32 func0f087fb0(void);
u32 func0f088028(void);
u32 func0f08819c(void);
u32 func0f088254(void);
u32 func0f08841c(void);
u32 func0f0887c8(void);
u32 func0f088840(struct prop *prop, s32 arg1);
u32 func0f089014(void);
u32 func0f0899dc(void);
u32 func0f089a94(void);
u32 func0f089c70(void);
u32 func0f089d64(void);
u32 func0f089db8(void);
u32 chrTryEquipHat(struct chrdata *chr, u32 thing, u32 flags);
u32 func0f089f8c(void);
u32 func0f08a38c(void);
u32 func0f08a724(void);
u32 func0f08a88c(void);
u32 func0f08a9f4(void);
u32 func0f08aa70(void);
u32 weaponIsThrown(u8 arg0);
u32 func0f08ab64(void);
u32 func0f08ab9c(void);
u32 func0f08abd4(void);
u32 func0f08acb0(void);
u32 func0f08adac(void);
u32 func0f08adc8(void);
u32 func0f08ae0c(void);
u32 func0f08ae54(struct defaultobj *obj, struct chrdata *chr);
u32 func0f08b108(void);
u32 func0f08b208(void);
u32 func0f08b25c(void);
u32 func0f08b27c(void);
u32 func0f08b658(void);
u32 func0f08b880(void);
void chrSetWeaponFlag4(struct chrdata *chr, s32 slot);
void func0f08b8e8(struct chrdata *chr, s32 weapon_id, s32 arg2, u32 flags, s32 arg4, s32 arg5);
struct prop *func0f08bad0(struct chrdata *chr, s32 arg1, s32 weapon_id, u32 flags);
u32 func0f08bb3c(void);
void func0f08bb5c(struct prop *prop, bool firing, s32 room);
s32 func0f08bc5c(struct prop *prop);
u32 func0f08bcf4(void);
bool func0f08bd00(struct prop *playerprop, struct prop *doorprop);
u32 func0f08bdd4(void);
u32 func0f08be80(void);
u32 func0f08bf78(void);
u32 func0f08c040(void);
u32 func0f08c190(void);
u32 func0f08c424(void);
u32 func0f08c484(void);
u32 func0f08c54c(struct doorobj *door);
u32 func0f08cb20(void);
u32 func0f08d3dc(void);
u32 func0f08d460(void);
void doorActivatePortal(struct doorobj *door);
void doorDeactivatePortal(struct doorobj *door);
u32 func0f08d540(void);
u32 func0f08d784(s8 soundtype, struct prop *prop);
void func0f08daa8(s8 soundtype, struct prop *prop);
void func0f08dd44(s8 soundtype, struct prop *prop);
void func0f08df10(s8 soundtype, struct prop *prop);
void func0f08e0c4(struct doorobj *door);
void func0f08e1a0(struct doorobj *door);
u32 decodeXorAaaaaaaa(u32 value);
void func0f08e224(struct doorobj *door);
void func0f08e2ac(struct doorobj *door);
void doorSetMode(struct doorobj *door, s32 newmode);
void doorActivate(struct doorobj *door, s32 newmode);
s32 doorIsClosed(struct doorobj *door);
s32 doorIsOpen(struct doorobj *door);
u32 func0f08e5a8(void);
u32 func0f08e6bc(void);
u32 func0f08e794(void);
u32 func0f08e8ac(void);
u32 func0f08e9e4(void);
void func0f08ea50(struct doorobj *door);
bool func0f08ed74(struct doorobj *door);
u32 func0f08f11c(void);
u32 func0f08f538(void);
u32 func0f08f604(void);
u32 func0f08f968(void);
u32 func0f08fcb8(void);
void doorActivateWrapper(struct prop *prop, bool arg1);
u32 func0f08fffc(void);
void func0f0900c0(struct prop *prop, struct doorobj *door);
bool func0f09018c(struct prop *doorprop);
u32 func0f0903d4(void);
u32 func0f09044c(void);
u32 func0f0904e0(void);
u32 func0f090520(void);
u32 func0f09054c(void);
u32 func0f0908b8(void);
u32 func0f090d34(void);
u32 func0f090db4(void);
u32 func0f091030(void);
u32 func0f0910ac(void);
u32 func0f091250(void);
u32 func0f0912dc(void);
u32 objSetPartVisible(struct defaultobj *obj, u32 arg1, u32 arg2);
u32 setupGetCommandLength(u32 *cmd);
u32 *setupGetPtrToCommandByIndex(u32 cmdindex);
u32 func0f092098(struct tag *tag);
u32 func0f092124(void);
bool propLoad(s32 propnum);
bool func0f09220c(struct defaultobj *obj, struct coord *pos, f32 *realrot, u32 arg3, u32 arg4);
bool func0f092304(struct defaultobj *obj, u32 arg1, u32 arg2);
void func0f09233c(struct defaultobj *obj, struct coord *pos, f32 *realrot, s16 *rooms);
void func0f0923d4(struct defaultobj *obj);
struct defaultobj *setupCommandGetObject(u32 cmdindex);
u32 func0f092484(void);

#endif
