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

// Function: entry_0012be08
// Address: 0x12be08 - 0x12be70
void entry_0012be08_0x12be08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be08_0x12be08");
#endif

    switch (ctx->pc) {
        case 0x12be2cu: goto label_12be2c;
        case 0x12be44u: goto label_12be44;
        case 0x12be68u: goto label_12be68;
        default: break;
    }

    ctx->pc = 0x12be08u;

    // 0x12be08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12be08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be10: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x12be10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x12be14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12be18: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12be18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12be1c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x12be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12be20: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12be24: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12BE24u;
    SET_GPR_U32(ctx, 31, 0x12BE2Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12BE24u, 0x12BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE2Cu;
label_12be2c:
    // 0x12be2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12be30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12be34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12be38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12be3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12BE3Cu;
    SET_GPR_U32(ctx, 31, 0x12BE44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12BE3Cu, 0x12BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE44u;
label_12be44:
    // 0x12be44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be48: 0xc4401298  lwc1        $f0, 0x1298($v0)
    ctx->pc = 0x12be48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12be4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be50: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x12be50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x12be54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be58: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12be58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be5c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12be60: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12BE60u;
    SET_GPR_U32(ctx, 31, 0x12BE68u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12BE60u, 0x12BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE68u;
label_12be68:
    // 0x12be68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12be6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x12be70u;
}
