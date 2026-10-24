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

// Function: entry_00183670
// Address: 0x183670 - 0x183734
void entry_00183670_0x183670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183670_0x183670");
#endif

    switch (ctx->pc) {
        case 0x1836d0u: goto label_1836d0;
        default: break;
    }

    ctx->pc = 0x183670u;

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
}
