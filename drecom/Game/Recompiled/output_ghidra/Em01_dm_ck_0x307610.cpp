#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Em01_dm_ck
// Address: 0x307610 - 0x3080d8
void Em01_dm_ck_0x307610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_dm_ck_0x307610");
#endif

    switch (ctx->pc) {
        case 0x307710u: goto label_307710;
        case 0x30771cu: goto label_30771c;
        case 0x3077a4u: goto label_3077a4;
        case 0x3077c0u: goto label_3077c0;
        case 0x3077dcu: goto label_3077dc;
        case 0x3077f8u: goto label_3077f8;
        case 0x307850u: goto label_307850;
        case 0x307b4cu: goto label_307b4c;
        case 0x307b58u: goto label_307b58;
        case 0x307bacu: goto label_307bac;
        case 0x307bb8u: goto label_307bb8;
        case 0x307c0cu: goto label_307c0c;
        case 0x307c18u: goto label_307c18;
        case 0x307c60u: goto label_307c60;
        case 0x307cc0u: goto label_307cc0;
        case 0x307d30u: goto label_307d30;
        case 0x307e00u: goto label_307e00;
        default: break;
    }

    ctx->pc = 0x307610u;

    // 0x307610: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x307610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x307614: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x307614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x307618: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x307618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30761c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30761cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x307620: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x307620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x307624: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x307624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x307628: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x307628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30762c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x307630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x307630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x307634: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x307638: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x307638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x30763c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30763cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x307640: 0x246396e0  addiu       $v1, $v1, -0x6920
    ctx->pc = 0x307640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940384));
    // 0x307644: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x307644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x307648: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x307648u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3996E0u));
    // 0x30764c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30764cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x307650: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x307650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x307654: 0x246396f0  addiu       $v1, $v1, -0x6910
    ctx->pc = 0x307654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940400));
    // 0x307658: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x307658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30765c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30765cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3996F0u));
    // 0x307660: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x307660u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x307664: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307668: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x307668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x30766c: 0x1060028e  beqz        $v1, . + 4 + (0x28E << 2)
    ctx->pc = 0x30766Cu;
    {
        const bool branch_taken_0x30766c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30766c) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307674u;
    // 0x307674: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x307674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307678: 0x8ce41348  lw          $a0, 0x1348($a3)
    ctx->pc = 0x307678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4936)));
    // 0x30767c: 0x24820032  addiu       $v0, $a0, 0x32
    ctx->pc = 0x30767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
    // 0x307680: 0xace21348  sw          $v0, 0x1348($a3)
    ctx->pc = 0x307680u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4936), GPR_U32(ctx, 2));
    // 0x307684: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307688: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x307688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x30768c: 0x2c4100c9  sltiu       $at, $v0, 0xC9
    ctx->pc = 0x30768cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)201) ? 1 : 0);
    // 0x307690: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x307690u;
    {
        const bool branch_taken_0x307690 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x307690) {
            ctx->pc = 0x3076A4u;
            goto label_3076a4;
        }
    }
    ctx->pc = 0x307698u;
    // 0x307698: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x307698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x30769c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3076a0: 0xac621348  sw          $v0, 0x1348($v1)
    ctx->pc = 0x3076a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 2));
label_3076a4:
    // 0x3076a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3076a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3076a8: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x3076a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x3076ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3076acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3076b0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3076b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3076b4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x3076b4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3076b8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3076b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3076bc: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x3076bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x3076c0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3076c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3076c4: 0x8c441338  lw          $a0, 0x1338($v0)
    ctx->pc = 0x3076c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x3076c8: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x3076c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x3076cc: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x3076CCu;
    {
        const bool branch_taken_0x3076cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3076cc) {
            ctx->pc = 0x3078B0u;
            goto label_3078b0;
        }
    }
    ctx->pc = 0x3076D4u;
    // 0x3076d4: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3076d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3076d8: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x3076d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3076dc: 0x24430200  addiu       $v1, $v0, 0x200
    ctx->pc = 0x3076dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x3076e0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x3076e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3076e4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3076e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3076e8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3076e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3076ec: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x3076ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x3076f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3076f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3076f4: 0xa33824  and         $a3, $a1, $v1
    ctx->pc = 0x3076f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3076f8: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x3076f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x3076fc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3076fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x307700: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x307700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307704: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x307704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x307708: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x307708u;
    SET_GPR_U32(ctx, 31, 0x307710u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x307708u, 0x307710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307710u;
label_307710:
    // 0x307710: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x307710u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307714: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x307714u;
    SET_GPR_U32(ctx, 31, 0x30771Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x307714u, 0x30771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30771Cu;
label_30771c:
    // 0x30771c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307720: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307724: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x307724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307728: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x307728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30772c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30772Cu;
    {
        const bool branch_taken_0x30772c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30772c) {
            ctx->pc = 0x30774Cu;
            goto label_30774c;
        }
    }
    ctx->pc = 0x307734u;
    // 0x307734: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307738: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307738u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x30773c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x30773cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307740: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x307740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x307744: 0x14830058  bne         $a0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x307744u;
    {
        const bool branch_taken_0x307744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x307744) {
            ctx->pc = 0x3078A8u;
            goto label_3078a8;
        }
    }
    ctx->pc = 0x30774Cu;
label_30774c:
    // 0x30774c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307750: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x307750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307754: 0x30830800  andi        $v1, $a0, 0x800
    ctx->pc = 0x307754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x307758: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x307758u;
    {
        const bool branch_taken_0x307758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307758) {
            ctx->pc = 0x3078A8u;
            goto label_3078a8;
        }
    }
    ctx->pc = 0x307760u;
    // 0x307760: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307764: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x307764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307768: 0x34420801  ori         $v0, $v0, 0x801
    ctx->pc = 0x307768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2049);
    // 0x30776c: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30776cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x307770: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307774: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x307774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307778: 0x34820020  ori         $v0, $a0, 0x20
    ctx->pc = 0x307778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x30777c: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30777cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x307780: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x307780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307784: 0x8ce21338  lw          $v0, 0x1338($a3)
    ctx->pc = 0x307784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4920)));
    // 0x307788: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x307788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x30778c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x30778cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x307790: 0xace31338  sw          $v1, 0x1338($a3)
    ctx->pc = 0x307790u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4920), GPR_U32(ctx, 3));
    // 0x307794: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307798: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x307798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x30779c: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x30779Cu;
    SET_GPR_U32(ctx, 31, 0x3077A4u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x30779Cu, 0x3077A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077A4u;
label_3077a4:
    // 0x3077a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3077a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3077a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3077a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3077ac: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x3077acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x3077b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3077b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3077b4: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x3077b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x3077b8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3077B8u;
    SET_GPR_U32(ctx, 31, 0x3077C0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3077B8u, 0x3077C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077C0u;
label_3077c0:
    // 0x3077c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3077c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3077c4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3077c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3077c8: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x3077c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x3077cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3077ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3077d0: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x3077d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x3077d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3077D4u;
    SET_GPR_U32(ctx, 31, 0x3077DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3077D4u, 0x3077DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077DCu;
label_3077dc:
    // 0x3077dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3077dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3077e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3077e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3077e4: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x3077e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x3077e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3077e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3077ec: 0x246400c0  addiu       $a0, $v1, 0xC0
    ctx->pc = 0x3077ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x3077f0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3077F0u;
    SET_GPR_U32(ctx, 31, 0x3077F8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3077F0u, 0x3077F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077F8u;
label_3077f8:
    // 0x3077f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3077f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3077fc: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x3077fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x307800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x307800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307804: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307808: 0x2483133c  addiu       $v1, $a0, 0x133C
    ctx->pc = 0x307808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4924));
    // 0x30780c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307810: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x307810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x307814: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x307814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
    // 0x307818: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x307818u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30781c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x30781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307820: 0x2445133c  addiu       $a1, $v0, 0x133C
    ctx->pc = 0x307820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x307824: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x307824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307828: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x307828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x30782c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x30782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307830: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x307830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307834: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x307834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x307838: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x307838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x30783c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30783cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307840: 0x0  nop
    ctx->pc = 0x307840u;
    // NOP
    // 0x307844: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x307844u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x307848: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x307848u;
    SET_GPR_U32(ctx, 31, 0x307850u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x307848u, 0x307850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307850u;
label_307850:
    // 0x307850: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307854: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x307854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x307858: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x307858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30785c: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x30785cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x307860: 0x3c03c110  lui         $v1, 0xC110
    ctx->pc = 0x307860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49424 << 16));
    // 0x307864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x307864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307868: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30786c: 0x2483133c  addiu       $v1, $a0, 0x133C
    ctx->pc = 0x30786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4924));
    // 0x307870: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x307870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307874: 0xe46000c4  swc1        $f0, 0xC4($v1)
    ctx->pc = 0x307874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x307878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x307878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30787c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307880: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307884: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x307884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x307888: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30788c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30788cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x307890: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307894: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x307894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307898: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30789c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30789cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3078a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3078a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3078a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3078a8:
    // 0x3078a8: 0x100001ff  b           . + 4 + (0x1FF << 2)
    ctx->pc = 0x3078A8u;
    {
        const bool branch_taken_0x3078a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3078a8) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x3078B0u;
label_3078b0:
    // 0x3078b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3078b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078b4: 0x8c761210  lw          $s6, 0x1210($v1)
    ctx->pc = 0x3078b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x3078b8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3078b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078bc: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x3078bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3078c0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3078c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3078c4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3078C4u;
    {
        const bool branch_taken_0x3078c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3078c4) {
            ctx->pc = 0x3078DCu;
            goto label_3078dc;
        }
    }
    ctx->pc = 0x3078CCu;
    // 0x3078cc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3078ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078d0: 0x84a311f2  lh          $v1, 0x11F2($a1)
    ctx->pc = 0x3078d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4594)));
    // 0x3078d4: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x3078d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3078d8: 0xa4a411f2  sh          $a0, 0x11F2($a1)
    ctx->pc = 0x3078d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4594), (uint16_t)GPR_U32(ctx, 4));
label_3078dc:
    // 0x3078dc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3078dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078e0: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x3078e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3078e4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3078e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3078e8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3078E8u;
    {
        const bool branch_taken_0x3078e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3078e8) {
            ctx->pc = 0x307900u;
            goto label_307900;
        }
    }
    ctx->pc = 0x3078F0u;
    // 0x3078f0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3078f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078f4: 0x848311f2  lh          $v1, 0x11F2($a0)
    ctx->pc = 0x3078f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
    // 0x3078f8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3078f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3078fc: 0xa48311f2  sh          $v1, 0x11F2($a0)
    ctx->pc = 0x3078fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4594), (uint16_t)GPR_U32(ctx, 3));
label_307900:
    // 0x307900: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307904: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307904u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307908: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x307908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x30790c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x30790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x307910: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x307910u;
    {
        const bool branch_taken_0x307910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x307910) {
            ctx->pc = 0x307930u;
            goto label_307930;
        }
    }
    ctx->pc = 0x307918u;
    // 0x307918: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30791c: 0x946511f6  lhu         $a1, 0x11F6($v1)
    ctx->pc = 0x30791cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307920: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x307920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x307924: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x307924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x307928: 0x14830075  bne         $a0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x307928u;
    {
        const bool branch_taken_0x307928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x307928) {
            ctx->pc = 0x307B00u;
            goto label_307b00;
        }
    }
    ctx->pc = 0x307930u;
label_307930:
    // 0x307930: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307934: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x307934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x307938: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x307938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30793c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30793cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x307940: 0x28610384  slti        $at, $v1, 0x384
    ctx->pc = 0x307940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)900) ? 1 : 0);
    // 0x307944: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x307944u;
    {
        const bool branch_taken_0x307944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x307944) {
            ctx->pc = 0x3079A8u;
            goto label_3079a8;
        }
    }
    ctx->pc = 0x30794Cu;
    // 0x30794c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307950: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x307950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307954: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x307954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x307958: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x307958u;
    {
        const bool branch_taken_0x307958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307958) {
            ctx->pc = 0x3079A8u;
            goto label_3079a8;
        }
    }
    ctx->pc = 0x307960u;
    // 0x307960: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307964: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x307964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x307968: 0x24720480  addiu       $s2, $v1, 0x480
    ctx->pc = 0x307968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x30796c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x30796cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307970: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x307970u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x307974: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x307974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x307978: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x307978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x30797c: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x30797cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x307980: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x307980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307984: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x307984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x307988: 0x34830401  ori         $v1, $a0, 0x401
    ctx->pc = 0x307988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1025);
    // 0x30798c: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30798cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x307990: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307994: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x307994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x307998: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x307998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x30799c: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x30799cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    // 0x3079a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3079a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3079a4: 0xa46011f2  sh          $zero, 0x11F2($v1)
    ctx->pc = 0x3079a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4594), (uint16_t)GPR_U32(ctx, 0));
label_3079a8:
    // 0x3079a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3079a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3079ac: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x3079acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x3079b0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x3079b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3079b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3079b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3079b8: 0x28610320  slti        $at, $v1, 0x320
    ctx->pc = 0x3079b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)800) ? 1 : 0);
    // 0x3079bc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x3079BCu;
    {
        const bool branch_taken_0x3079bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3079bc) {
            ctx->pc = 0x307A10u;
            goto label_307a10;
        }
    }
    ctx->pc = 0x3079C4u;
    // 0x3079c4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3079c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3079c8: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x3079c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3079cc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3079ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3079d0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3079D0u;
    {
        const bool branch_taken_0x3079d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3079d0) {
            ctx->pc = 0x307A10u;
            goto label_307a10;
        }
    }
    ctx->pc = 0x3079D8u;
    // 0x3079d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3079d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3079dc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3079dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3079e0: 0x247307e0  addiu       $s3, $v1, 0x7E0
    ctx->pc = 0x3079e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x3079e4: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x3079e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3079e8: 0x8e750034  lw          $s5, 0x34($s3)
    ctx->pc = 0x3079e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3079ec: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x3079ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x3079f0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3079f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3079f4: 0xaea30024  sw          $v1, 0x24($s5)
    ctx->pc = 0x3079f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 3));
    // 0x3079f8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3079f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3079fc: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x3079fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x307a00: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x307a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x307a04: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x307a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    // 0x307a08: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a0c: 0xa46011f2  sh          $zero, 0x11F2($v1)
    ctx->pc = 0x307a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4594), (uint16_t)GPR_U32(ctx, 0));
label_307a10:
    // 0x307a10: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a14: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x307a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x307a18: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x307a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x307a1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x307a1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x307a20: 0x286102bc  slti        $at, $v1, 0x2BC
    ctx->pc = 0x307a20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
    // 0x307a24: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x307A24u;
    {
        const bool branch_taken_0x307a24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a24) {
            ctx->pc = 0x307C18u;
            goto label_307c18;
        }
    }
    ctx->pc = 0x307A2Cu;
    // 0x307a2c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a30: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x307a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307a34: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x307a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x307a38: 0x14600077  bnez        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x307A38u;
    {
        const bool branch_taken_0x307a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307a38) {
            ctx->pc = 0x307C18u;
            goto label_307c18;
        }
    }
    ctx->pc = 0x307A40u;
    // 0x307a40: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a44: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x307a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x307a48: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x307a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x307a4c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x307a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307a50: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x307a50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x307a54: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x307a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x307a58: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x307a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307a5c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x307a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x307a60: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a64: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x307a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x307a68: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x307a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x307a6c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x307a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307a70: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x307a70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x307a74: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x307a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x307a78: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x307a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307a7c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x307a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x307a80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a84: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x307a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x307a88: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x307a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x307a8c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x307a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307a90: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x307a90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x307a94: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x307a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x307a98: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x307a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307a9c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x307a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x307aa0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307aa4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x307aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x307aa8: 0x245006c0  addiu       $s0, $v0, 0x6C0
    ctx->pc = 0x307aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x307aac: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x307aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307ab0: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x307ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x307ab4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x307ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x307ab8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x307ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307abc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x307abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x307ac0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ac4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x307ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x307ac8: 0x24500750  addiu       $s0, $v0, 0x750
    ctx->pc = 0x307ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x307acc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x307accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307ad0: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x307ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x307ad4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x307ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x307ad8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x307ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307adc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x307adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x307ae0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ae4: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x307ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307ae8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x307ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x307aec: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x307aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x307af0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307af4: 0xa44011f2  sh          $zero, 0x11F2($v0)
    ctx->pc = 0x307af4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4594), (uint16_t)GPR_U32(ctx, 0));
    // 0x307af8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x307AF8u;
    {
        const bool branch_taken_0x307af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307af8) {
            ctx->pc = 0x307C18u;
            goto label_307c18;
        }
    }
    ctx->pc = 0x307B00u;
label_307b00:
    // 0x307b00: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307b04: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x307b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x307b08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x307b0c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x307B0Cu;
    {
        const bool branch_taken_0x307b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307b0c) {
            ctx->pc = 0x307B60u;
            goto label_307b60;
        }
    }
    ctx->pc = 0x307B14u;
    // 0x307b14: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307b18: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x307b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x307b1c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x307b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x307b20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x307b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x307b24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x307b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x307b28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x307b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x307b2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x307b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x307b30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x307b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x307b34: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x307b34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x307b38: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x307b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x307b3c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x307b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x307b40: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x307b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x307b44: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x307B44u;
    SET_GPR_U32(ctx, 31, 0x307B4Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x307B44u, 0x307B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B4Cu;
label_307b4c:
    // 0x307b4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x307b4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307b50: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x307B50u;
    SET_GPR_U32(ctx, 31, 0x307B58u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x307B50u, 0x307B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B58u;
label_307b58:
    // 0x307b58: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x307B58u;
    {
        const bool branch_taken_0x307b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307b58) {
            ctx->pc = 0x307C18u;
            goto label_307c18;
        }
    }
    ctx->pc = 0x307B60u;
label_307b60:
    // 0x307b60: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307b64: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x307b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x307b68: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x307b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x307b6c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x307B6Cu;
    {
        const bool branch_taken_0x307b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307b6c) {
            ctx->pc = 0x307BC0u;
            goto label_307bc0;
        }
    }
    ctx->pc = 0x307B74u;
    // 0x307b74: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307b78: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x307b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x307b7c: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x307b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x307b80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x307b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x307b84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x307b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x307b88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x307b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x307b8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x307b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x307b90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x307b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x307b94: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x307b94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x307b98: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x307b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x307b9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307b9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307ba0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x307ba0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307ba4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x307BA4u;
    SET_GPR_U32(ctx, 31, 0x307BACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x307BA4u, 0x307BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307BACu;
label_307bac:
    // 0x307bac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x307bacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307bb0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x307BB0u;
    SET_GPR_U32(ctx, 31, 0x307BB8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x307BB0u, 0x307BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307BB8u;
label_307bb8:
    // 0x307bb8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x307BB8u;
    {
        const bool branch_taken_0x307bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307bb8) {
            ctx->pc = 0x307C18u;
            goto label_307c18;
        }
    }
    ctx->pc = 0x307BC0u;
label_307bc0:
    // 0x307bc0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307bc4: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x307bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307bc8: 0x30640040  andi        $a0, $v1, 0x40
    ctx->pc = 0x307bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x307bcc: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x307BCCu;
    {
        const bool branch_taken_0x307bcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x307bcc) {
            ctx->pc = 0x307C18u;
            goto label_307c18;
        }
    }
    ctx->pc = 0x307BD4u;
    // 0x307bd4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307bd8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x307bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x307bdc: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x307bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x307be0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x307be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x307be4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x307be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x307be8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x307be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x307bec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x307becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x307bf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x307bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x307bf4: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x307bf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x307bf8: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x307bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x307bfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307bfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307c00: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x307c00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307c04: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x307C04u;
    SET_GPR_U32(ctx, 31, 0x307C0Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x307C04u, 0x307C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C0Cu;
label_307c0c:
    // 0x307c0c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x307c0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307c10: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x307C10u;
    SET_GPR_U32(ctx, 31, 0x307C18u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x307C10u, 0x307C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C18u;
label_307c18:
    // 0x307c18: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c1c: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x307c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x307c20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x307c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x307c24: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x307c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x307c28: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x307C28u;
    {
        const bool branch_taken_0x307c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307c28) {
            ctx->pc = 0x307CA0u;
            goto label_307ca0;
        }
    }
    ctx->pc = 0x307C30u;
    // 0x307c30: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x307c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x307c34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x307c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x307c38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x307c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x307c3c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c40: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x307c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x307c44: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c48: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x307c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x307c4c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x307c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x307c50: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x307c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x307c54: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x307c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x307c58: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x307C58u;
    SET_GPR_U32(ctx, 31, 0x307C60u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x307C58u, 0x307C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C60u;
label_307c60:
    // 0x307c60: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x307C60u;
    {
        const bool branch_taken_0x307c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307c60) {
            ctx->pc = 0x307CA0u;
            goto label_307ca0;
        }
    }
    ctx->pc = 0x307C68u;
    // 0x307c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307c6c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x307c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c70: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x307c70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x307c74: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x307c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x307c78: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c7c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x307c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x307c80: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307c88: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x307c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c8c: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x307c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307c90: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c94: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x307c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x307c98: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x307C98u;
    {
        const bool branch_taken_0x307c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307c98) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307CA0u;
label_307ca0:
    // 0x307ca0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ca4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x307ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ca8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x307ca8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x307cac: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x307cacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x307cb0: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x307cb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x307cb4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x307cb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307cb8: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x307CB8u;
    SET_GPR_U32(ctx, 31, 0x307CC0u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x307CB8u, 0x307CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CC0u;
label_307cc0:
    // 0x307cc0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307cc4: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307cc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307cc8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x307cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307ccc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x307cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x307cd0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x307CD0u;
    {
        const bool branch_taken_0x307cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x307cd0) {
            ctx->pc = 0x307D30u;
            goto label_307d30;
        }
    }
    ctx->pc = 0x307CD8u;
    // 0x307cd8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307cdc: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307cdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307ce0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x307ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307ce4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x307ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x307ce8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x307CE8u;
    {
        const bool branch_taken_0x307ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x307ce8) {
            ctx->pc = 0x307D30u;
            goto label_307d30;
        }
    }
    ctx->pc = 0x307CF0u;
    // 0x307cf0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307cf4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x307cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x307cf8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x307cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x307cfc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x307cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x307d00: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x307d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x307d04: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x307d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x307d08: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x307d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x307d0c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x307d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x307d10: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x307d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x307d14: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307d18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307d1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x307d1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307d20: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x307d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x307d24: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x307d24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307d28: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x307D28u;
    SET_GPR_U32(ctx, 31, 0x307D30u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x307D28u, 0x307D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D30u;
label_307d30:
    // 0x307d30: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d34: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x307d34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x307d38: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x307d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x307d3c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x307d3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x307d40: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307D40u;
    {
        const bool branch_taken_0x307d40 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x307d40) {
            ctx->pc = 0x307D5Cu;
            goto label_307d5c;
        }
    }
    ctx->pc = 0x307D48u;
    // 0x307d48: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x307d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d4c: 0x8ca31338  lw          $v1, 0x1338($a1)
    ctx->pc = 0x307d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x307d50: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x307d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x307d54: 0x146000d4  bnez        $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x307D54u;
    {
        const bool branch_taken_0x307d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307d54) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307D5Cu;
label_307d5c:
    // 0x307d5c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d60: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x307d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x307d64: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x307d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x307d68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x307d68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x307d6c: 0x481004f  bgez        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x307D6Cu;
    {
        const bool branch_taken_0x307d6c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x307d6c) {
            ctx->pc = 0x307EACu;
            goto label_307eac;
        }
    }
    ctx->pc = 0x307D74u;
    // 0x307d74: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d78: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x307d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x307d7c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x307d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307d80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x307d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x307d84: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x307D84u;
    {
        const bool branch_taken_0x307d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d84) {
            ctx->pc = 0x307DC0u;
            goto label_307dc0;
        }
    }
    ctx->pc = 0x307D8Cu;
    // 0x307d8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x307d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307d90: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d94: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307d98: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d9c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x307d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x307da0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307da4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307da4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307da8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307dac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x307dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307db0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307db4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x307db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x307db8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x307DB8u;
    {
        const bool branch_taken_0x307db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307db8) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307DC0u;
label_307dc0:
    // 0x307dc0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307dc4: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307dc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307dc8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x307dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307dcc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x307dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x307dd0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x307DD0u;
    {
        const bool branch_taken_0x307dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x307dd0) {
            ctx->pc = 0x307DECu;
            goto label_307dec;
        }
    }
    ctx->pc = 0x307DD8u;
    // 0x307dd8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x307dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x307ddc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307DDCu;
    {
        const bool branch_taken_0x307ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x307ddc) {
            ctx->pc = 0x307DECu;
            goto label_307dec;
        }
    }
    ctx->pc = 0x307DE4u;
    // 0x307de4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x307DE4u;
    {
        const bool branch_taken_0x307de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307de4) {
            ctx->pc = 0x307E78u;
            goto label_307e78;
        }
    }
    ctx->pc = 0x307DECu;
label_307dec:
    // 0x307dec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307df0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x307df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x307df4: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x307df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x307df8: 0xc05cd90  jal         func_173640
    ctx->pc = 0x307DF8u;
    SET_GPR_U32(ctx, 31, 0x307E00u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x307DF8u, 0x307E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E00u;
label_307e00:
    // 0x307e00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x307E00u;
    {
        const bool branch_taken_0x307e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e00) {
            ctx->pc = 0x307E40u;
            goto label_307e40;
        }
    }
    ctx->pc = 0x307E08u;
    // 0x307e08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x307e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307e0c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307e10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307e14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307e18: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x307e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x307e20: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e28: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x307e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e30: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x307e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x307e38: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x307E38u;
    {
        const bool branch_taken_0x307e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e38) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307E40u;
label_307e40:
    // 0x307e40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x307e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307e44: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307e4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307e50: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e54: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x307e54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x307e58: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e60: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e64: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x307e64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e68: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x307e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x307e70: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x307E70u;
    {
        const bool branch_taken_0x307e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e70) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307E78u;
label_307e78:
    // 0x307e78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x307e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307e7c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307e80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307e84: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e88: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x307e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e8c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e94: 0x8fb600b8  lw          $s6, 0xB8($sp)
    ctx->pc = 0x307e94u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e98: 0xa2c00003  sb          $zero, 0x3($s6)
    ctx->pc = 0x307e98u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e9c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ea0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x307ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x307ea4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x307EA4u;
    {
        const bool branch_taken_0x307ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ea4) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307EACu;
label_307eac:
    // 0x307eac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307eb0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x307eb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x307eb4: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x307eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307eb8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x307eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x307ebc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x307EBCu;
    {
        const bool branch_taken_0x307ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ebc) {
            ctx->pc = 0x307EF8u;
            goto label_307ef8;
        }
    }
    ctx->pc = 0x307EC4u;
    // 0x307ec4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307ec8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ecc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307ed0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ed4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x307ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x307ed8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307edc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307ee0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ee4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x307ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307ee8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307eec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x307eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x307ef0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x307EF0u;
    {
        const bool branch_taken_0x307ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ef0) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307EF8u;
label_307ef8:
    // 0x307ef8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307efc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x307efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307f00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x307f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x307f04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307f08: 0x10640067  beq         $v1, $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x307F08u;
    {
        const bool branch_taken_0x307f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x307f08) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307F10u;
    // 0x307f10: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f14: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307f14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307f18: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x307f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307f1c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x307f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x307f20: 0x10a4004f  beq         $a1, $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x307F20u;
    {
        const bool branch_taken_0x307f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x307f20) {
            ctx->pc = 0x308060u;
            goto label_308060;
        }
    }
    ctx->pc = 0x307F28u;
    // 0x307f28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307f2c: 0x10a3004c  beq         $a1, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x307F2Cu;
    {
        const bool branch_taken_0x307f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x307f2c) {
            ctx->pc = 0x308060u;
            goto label_308060;
        }
    }
    ctx->pc = 0x307F34u;
    // 0x307f34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x307f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307f38: 0x10a3003b  beq         $a1, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x307F38u;
    {
        const bool branch_taken_0x307f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x307f38) {
            ctx->pc = 0x308028u;
            goto label_308028;
        }
    }
    ctx->pc = 0x307F40u;
    // 0x307f40: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x307f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x307f44: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x307F44u;
    {
        const bool branch_taken_0x307f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x307f44) {
            ctx->pc = 0x307F60u;
            goto label_307f60;
        }
    }
    ctx->pc = 0x307F4Cu;
    // 0x307f4c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x307f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x307f50: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307F50u;
    {
        const bool branch_taken_0x307f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x307f50) {
            ctx->pc = 0x307F60u;
            goto label_307f60;
        }
    }
    ctx->pc = 0x307F58u;
    // 0x307f58: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x307F58u;
    {
        const bool branch_taken_0x307f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307f58) {
            ctx->pc = 0x308060u;
            goto label_308060;
        }
    }
    ctx->pc = 0x307F60u;
label_307f60:
    // 0x307f60: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f64: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x307f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x307f68: 0x2c610065  sltiu       $at, $v1, 0x65
    ctx->pc = 0x307f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x307f6c: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x307F6Cu;
    {
        const bool branch_taken_0x307f6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x307f6c) {
            ctx->pc = 0x307FB4u;
            goto label_307fb4;
        }
    }
    ctx->pc = 0x307F74u;
    // 0x307f74: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f78: 0xac601348  sw          $zero, 0x1348($v1)
    ctx->pc = 0x307f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 0));
    // 0x307f7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307f80: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307f88: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x307f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307f8c: 0x8fb400b8  lw          $s4, 0xB8($sp)
    ctx->pc = 0x307f8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f90: 0xa2920001  sb          $s2, 0x1($s4)
    ctx->pc = 0x307f90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x307f94: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f98: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307f98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307f9c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fa0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x307fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307fa4: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x307fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fa8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x307fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x307fac: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x307FACu;
    {
        const bool branch_taken_0x307fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307fac) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307FB4u;
label_307fb4:
    // 0x307fb4: 0x16e0000f  bnez        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x307FB4u;
    {
        const bool branch_taken_0x307fb4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x307fb4) {
            ctx->pc = 0x307FF4u;
            goto label_307ff4;
        }
    }
    ctx->pc = 0x307FBCu;
    // 0x307fbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307fc0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fc4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307fc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x307fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307fcc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fd0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x307fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x307fd4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fd8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307fdc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fe0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x307fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307fe4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fe8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x307fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x307fec: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x307FECu;
    {
        const bool branch_taken_0x307fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307fec) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x307FF4u;
label_307ff4:
    // 0x307ff4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307ff8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ffc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308000: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308004: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x308004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x308008: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30800c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30800cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308010: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308014: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308018: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30801c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30801cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x308020: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x308020u;
    {
        const bool branch_taken_0x308020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308020) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x308028u;
label_308028:
    // 0x308028: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x308028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30802c: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x30802cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308030: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x308030u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x308034: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x308034u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308038: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30803c: 0xa0750001  sb          $s5, 0x1($v1)
    ctx->pc = 0x30803cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 21));
    // 0x308040: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308044: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308048: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x308048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30804c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x30804cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308050: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308054: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x308058: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x308058u;
    {
        const bool branch_taken_0x308058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308058) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x308060u;
label_308060:
    // 0x308060: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308064: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x308064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x308068: 0x2c610065  sltiu       $at, $v1, 0x65
    ctx->pc = 0x308068u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x30806c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x30806Cu;
    {
        const bool branch_taken_0x30806c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30806c) {
            ctx->pc = 0x3080A8u;
            goto label_3080a8;
        }
    }
    ctx->pc = 0x308074u;
    // 0x308074: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308078: 0xac601348  sw          $zero, 0x1348($v1)
    ctx->pc = 0x308078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 0));
    // 0x30807c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30807cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x308080: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308084: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308088: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30808c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x30808cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x308090: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308094: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308098: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30809c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30809cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3080a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3080a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3080a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3080a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3080a8:
    // 0x3080a8: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x3080a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3080ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3080acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3080b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3080b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3080b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3080b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3080b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3080b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3080bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3080bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3080c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3080c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3080c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3080c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3080c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3080c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3080cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x3080ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3080d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3080D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3080D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3080D8u;
}
