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

// Function: Camera_Fix_init
// Address: 0x183500 - 0x183760
void Camera_Fix_init_0x183500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_Fix_init_0x183500");
#endif

    switch (ctx->pc) {
        case 0x18360cu: goto label_18360c;
        case 0x183640u: goto label_183640;
        case 0x1836d0u: goto label_1836d0;
        case 0x183734u: goto label_183734;
        case 0x183740u: goto label_183740;
        default: break;
    }

    ctx->pc = 0x183500u;

    // 0x183500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183504: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x183504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x183508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18350c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x18350cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x183510: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x183510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x183514: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x183514u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x183518: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18351c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x18351cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x183520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183524: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x183524u;
    {
        const bool branch_taken_0x183524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x183524) {
            ctx->pc = 0x183670u;
            goto label_183670;
        }
    }
    ctx->pc = 0x18352Cu;
    // 0x18352c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18352cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183530: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183534: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183538: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x183538u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18353c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x18353cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183544: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x183548: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x183548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x18354c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x18354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x183550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183554: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x183554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x183558: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183558u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18355c: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x18355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x183560: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183560u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183564: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x183564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x183568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18356c: 0x0  nop
    ctx->pc = 0x18356cu;
    // NOP
    // 0x183570: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x183570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    // 0x183574: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183578: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183578u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18357c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18357cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183580: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x183580u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x183584: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x183584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18358c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18358cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x183590: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x183590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x183594: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x183594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x183598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18359c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x18359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1835a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1835a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1835a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1835a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1835a8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1835a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1835ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1835acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1835b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1835b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1835b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1835b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1835b8: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1835b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1835bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1835bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1835c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1835c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1835c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1835c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1835c8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1835c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1835cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1835ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1835d0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1835d0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1835d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1835d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1835d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1835d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1835dc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1835dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1835e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1835e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1835e4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1835e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1835e8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1835e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1835ec: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1835ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1835f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1835f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1835f4: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1835f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1835f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1835f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1835fc: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1835fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x183600: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x183600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183604: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x183604u;
    SET_GPR_U32(ctx, 31, 0x18360Cu);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x183604u, 0x18360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18360Cu;
label_18360c:
    // 0x18360c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18360cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183610: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183610u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183614: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183618: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x183618u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18361c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x18361cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183624: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x183628: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x183628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x18362c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x18362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x183630: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x183630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183634: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x183634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x183638: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x183638u;
    SET_GPR_U32(ctx, 31, 0x183640u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x183638u, 0x183640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183640u;
label_183640:
    // 0x183640: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x183640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x183644: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183644u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18364c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x18364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183650: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183650u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183654: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x183654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x183658: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18365c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x18365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183660: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x183660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x183664: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183664u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183668: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x183668u;
    {
        const bool branch_taken_0x183668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183668) {
            ctx->pc = 0x183734u;
            goto label_183734;
        }
    }
    ctx->pc = 0x183670u;
label_183670:
    // 0x183670: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x183670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x183674: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183674u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183678: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18367c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x18367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x183680: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183680u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183684: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x183684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x183688: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183688u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18368c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x18368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183690: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x183690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x183694: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183694u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183698: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x183698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18369c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18369cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1836a0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1836a0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1836a4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1836a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1836a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1836a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1836ac: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1836acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1836b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1836b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1836b4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1836b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1836b8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1836b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1836bc: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1836bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1836c0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1836c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1836c4: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x1836c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1836c8: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x1836C8u;
    SET_GPR_U32(ctx, 31, 0x1836D0u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x1836C8u, 0x1836D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1836D0u;
label_1836d0:
    // 0x1836d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1836d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1836d4: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1836d4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1836d8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1836d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1836dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1836dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1836e0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1836e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1836e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1836e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1836e8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1836e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1836ec: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1836ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1836f0: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1836f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1836f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1836f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1836f8: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1836f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1836fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1836fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183700: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183704: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x183704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x183708: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183708u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18370c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18370cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183710: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183714: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x183714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x183718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x183718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18371c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18371cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183720: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183724: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x183724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x183728: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x183728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18372c: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x18372Cu;
    SET_GPR_U32(ctx, 31, 0x183734u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x18372Cu, 0x183734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183734u;
label_183734:
    // 0x183734: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x183734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183738: 0xc060dd8  jal         func_183760
    ctx->pc = 0x183738u;
    SET_GPR_U32(ctx, 31, 0x183740u);
    ctx->pc = 0x183760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183760u, 0x183738u, 0x183740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183740u;
label_183740:
    // 0x183740: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x183740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x183744: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x183744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183748: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x183748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x18374c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x18374cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183754: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183758: 0x3e00008  jr          $ra
    ctx->pc = 0x183758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183760u;
}
