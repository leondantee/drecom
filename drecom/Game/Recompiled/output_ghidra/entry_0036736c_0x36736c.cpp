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

// Function: entry_0036736c
// Address: 0x36736c - 0x367400
void entry_0036736c_0x36736c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036736c_0x36736c");
#endif

    switch (ctx->pc) {
        case 0x367390u: goto label_367390;
        case 0x3673a8u: goto label_3673a8;
        case 0x3673bcu: goto label_3673bc;
        case 0x3673ccu: goto label_3673cc;
        case 0x3673d8u: goto label_3673d8;
        default: break;
    }

    ctx->pc = 0x36736cu;

    // 0x36736c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x36736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x367370: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x367374: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x367374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x367378: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36737c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367380: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x367380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x367384: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x367384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x367388: 0xc058f50  jal         func_163D40
    ctx->pc = 0x367388u;
    SET_GPR_U32(ctx, 31, 0x367390u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x367388u, 0x367390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367390u;
label_367390:
    // 0x367390: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367394: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x367394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x367398: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36739c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36739cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3673a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3673A0u;
    SET_GPR_U32(ctx, 31, 0x3673A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3673A0u, 0x3673A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673A8u;
label_3673a8:
    // 0x3673a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3673a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3673acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673b0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3673b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3673b4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x3673B4u;
    SET_GPR_U32(ctx, 31, 0x3673BCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x3673B4u, 0x3673BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673BCu;
label_3673bc:
    // 0x3673bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3673bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3673c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3673c4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3673C4u;
    SET_GPR_U32(ctx, 31, 0x3673CCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3673C4u, 0x3673CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673CCu;
label_3673cc:
    // 0x3673cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3673ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673d0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x3673D0u;
    SET_GPR_U32(ctx, 31, 0x3673D8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3673D0u, 0x3673D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673D8u;
label_3673d8:
    // 0x3673d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3673d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3673dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3673e0: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3673E0u;
    {
        const bool branch_taken_0x3673e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3673e0) {
            ctx->pc = 0x3674BCu;
            return;
        }
    }
    ctx->pc = 0x3673E8u;
    // 0x3673e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3673e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673ec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3673ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3673f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3673f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3673f4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3673f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3673f8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3673F8u;
    {
        const bool branch_taken_0x3673f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3673f8) {
            ctx->pc = 0x3674BCu;
            return;
        }
    }
    ctx->pc = 0x367400u;
}
