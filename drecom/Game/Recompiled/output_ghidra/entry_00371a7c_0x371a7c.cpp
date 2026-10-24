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

// Function: entry_00371a7c
// Address: 0x371a7c - 0x371ac8
void entry_00371a7c_0x371a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371a7c_0x371a7c");
#endif

    switch (ctx->pc) {
        case 0x371a8cu: goto label_371a8c;
        case 0x371aa0u: goto label_371aa0;
        case 0x371ab4u: goto label_371ab4;
        case 0x371ac0u: goto label_371ac0;
        default: break;
    }

    ctx->pc = 0x371a7cu;

    // 0x371a7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x371a80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371a84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x371A84u;
    SET_GPR_U32(ctx, 31, 0x371A8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x371A84u, 0x371A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A8Cu;
label_371a8c:
    // 0x371a8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a94: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x371a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x371a98: 0xc05cd58  jal         func_173560
    ctx->pc = 0x371A98u;
    SET_GPR_U32(ctx, 31, 0x371AA0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x371A98u, 0x371AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371AA0u;
label_371aa0:
    // 0x371aa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x371aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x371aa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371aa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371aac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x371AACu;
    SET_GPR_U32(ctx, 31, 0x371AB4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x371AACu, 0x371AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371AB4u;
label_371ab4:
    // 0x371ab4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371ab8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x371AB8u;
    SET_GPR_U32(ctx, 31, 0x371AC0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x371AB8u, 0x371AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371AC0u;
label_371ac0:
    // 0x371ac0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371ac4: 0x0  nop
    ctx->pc = 0x371ac4u;
    // NOP
    ctx->pc = 0x371ac8u;
}
