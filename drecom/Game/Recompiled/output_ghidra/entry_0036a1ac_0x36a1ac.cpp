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

// Function: entry_0036a1ac
// Address: 0x36a1ac - 0x36a20c
void entry_0036a1ac_0x36a1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a1ac_0x36a1ac");
#endif

    switch (ctx->pc) {
        case 0x36a1d0u: goto label_36a1d0;
        case 0x36a1e8u: goto label_36a1e8;
        default: break;
    }

    ctx->pc = 0x36a1acu;

    // 0x36a1ac: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x36a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x36a1b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36a1b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x36a1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36a1b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1c0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x36a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a1c4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x36a1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36a1c8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x36A1C8u;
    SET_GPR_U32(ctx, 31, 0x36A1D0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x36A1C8u, 0x36A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1D0u;
label_36a1d0:
    // 0x36a1d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36a1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36a1d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a1dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a1e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36A1E0u;
    SET_GPR_U32(ctx, 31, 0x36A1E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A1E0u, 0x36A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1E8u;
label_36a1e8:
    // 0x36a1e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1ec: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x36a1ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x36a1f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36A1F0u;
    {
        const bool branch_taken_0x36a1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a1f0) {
            ctx->pc = 0x36A20Cu;
            return;
        }
    }
    ctx->pc = 0x36A1F8u;
    // 0x36a1f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a200: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x36a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a204: 0xc05cd58  jal         func_173560
    ctx->pc = 0x36A204u;
    SET_GPR_U32(ctx, 31, 0x36A20Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x36A204u, 0x36A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A20Cu;
}
