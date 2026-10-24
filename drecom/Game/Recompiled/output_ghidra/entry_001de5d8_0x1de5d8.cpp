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

// Function: entry_001de5d8
// Address: 0x1de5d8 - 0x1de778
void entry_001de5d8_0x1de5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de5d8_0x1de5d8");
#endif

    switch (ctx->pc) {
        case 0x1de6c4u: goto label_1de6c4;
        default: break;
    }

    ctx->pc = 0x1de5d8u;

    // 0x1de5d8: 0x87a300fc  lh          $v1, 0xFC($sp)
    ctx->pc = 0x1de5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1de5dc: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1de5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1de5e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de5e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de5e4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1de5e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de5e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1de5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1de5ec: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1de5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1de5f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1de5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de5f4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1de5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1de5f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de5fc: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x1de5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1de600: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x1de600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x1de604: 0x142c3c  dsll32      $a1, $s4, 16
    ctx->pc = 0x1de604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de608: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1de608u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1de60c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1de60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1de610: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1de610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1de614: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1de614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1de618: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de61c: 0x2452bd00  addiu       $s2, $v0, -0x4300
    ctx->pc = 0x1de61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de620: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1de620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1de624: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1de624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1de628: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1de628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de62c: 0x26b00080  addiu       $s0, $s5, 0x80
    ctx->pc = 0x1de62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de630: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1de630u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1de634: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x1de634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de638: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de638u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de63c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1de63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1de640: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de644: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1de644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de648: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de64c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1de64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de654: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1de654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1de658: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1de658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de65c: 0x26a20080  addiu       $v0, $s5, 0x80
    ctx->pc = 0x1de65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de660: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1de660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1de664: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1de664u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1de668: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x1de668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de66c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de66cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de670: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1de670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1de674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de678: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1de678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de67c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de680: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1de680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de684: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1de684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de688: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1de688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1de68c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1de68cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de690: 0x26a20080  addiu       $v0, $s5, 0x80
    ctx->pc = 0x1de690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de694: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1de694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1de698: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1de698u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1de69c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de6a0: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x1de6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
    // 0x1de6a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1de6a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x47C930u));
    // 0x1de6a8: 0x26a20080  addiu       $v0, $s5, 0x80
    ctx->pc = 0x1de6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de6ac: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1de6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1de6b0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1de6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1de6b4: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x1de6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de6b8: 0x26a50080  addiu       $a1, $s5, 0x80
    ctx->pc = 0x1de6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de6bc: 0xc05da30  jal         func_1768C0
    ctx->pc = 0x1DE6BCu;
    SET_GPR_U32(ctx, 31, 0x1DE6C4u);
    ctx->pc = 0x1768C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C0u, 0x1DE6BCu, 0x1DE6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6C4u;
label_1de6c4:
    // 0x1de6c4: 0x14243c  dsll32      $a0, $s4, 16
    ctx->pc = 0x1de6c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de6c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de6c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de6cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de6d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de6d4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1de6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de6d8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de6dc: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x1de6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de6e0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1de6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1de6e4: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1de6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1de6e8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de6e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de6ec: 0x26a30040  addiu       $v1, $s5, 0x40
    ctx->pc = 0x1de6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1de6f0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de6f4: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1de6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de6f8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de6f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de6fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de704: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1de704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de708: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de70c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1de70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de710: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1de710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de714: 0x24a30080  addiu       $v1, $a1, 0x80
    ctx->pc = 0x1de714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1de718: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de718u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de71c: 0x26a30040  addiu       $v1, $s5, 0x40
    ctx->pc = 0x1de71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1de720: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1de720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1de724: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de724u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de728: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x1de728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de72c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de72cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de730: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de734: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de738: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1de738u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de73c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1de73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1de740: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1de744: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1de744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1de748: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x1de748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1de74c: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1de74cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1de750: 0x26a30040  addiu       $v1, $s5, 0x40
    ctx->pc = 0x1de750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1de754: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1de754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1de758: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de758u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de75c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de760: 0x2465bd10  addiu       $a1, $v1, -0x42F0
    ctx->pc = 0x1de760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950160));
    // 0x1de764: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1de764u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47BD10u));
    // 0x1de768: 0x26a30040  addiu       $v1, $s5, 0x40
    ctx->pc = 0x1de768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1de76c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1de76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de770: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de770u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de774: 0x0  nop
    ctx->pc = 0x1de774u;
    // NOP
    ctx->pc = 0x1de778u;
}
