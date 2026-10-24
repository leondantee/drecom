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

// Function: entry_0026ae90
// Address: 0x26ae90 - 0x26aecc
void entry_0026ae90_0x26ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ae90_0x26ae90");
#endif

    switch (ctx->pc) {
        case 0x26aea0u: goto label_26aea0;
        case 0x26aea8u: goto label_26aea8;
        case 0x26aeb4u: goto label_26aeb4;
        case 0x26aec8u: goto label_26aec8;
        default: break;
    }

    ctx->pc = 0x26ae90u;

    // 0x26ae90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ae98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26AE98u;
    SET_GPR_U32(ctx, 31, 0x26AEA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26AE98u, 0x26AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEA0u;
label_26aea0:
    // 0x26aea0: 0xc09aa38  jal         func_26A8E0
    ctx->pc = 0x26AEA0u;
    SET_GPR_U32(ctx, 31, 0x26AEA8u);
    ctx->pc = 0x26A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A8E0u, 0x26AEA0u, 0x26AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEA8u;
label_26aea8:
    // 0x26aea8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26aeac: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x26AEACu;
    SET_GPR_U32(ctx, 31, 0x26AEB4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26AEACu, 0x26AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEB4u;
label_26aeb4:
    // 0x26aeb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26aeb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26aeb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26aebc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26aebcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26aec0: 0xc057590  jal         func_15D640
    ctx->pc = 0x26AEC0u;
    SET_GPR_U32(ctx, 31, 0x26AEC8u);
    ctx->pc = 0x15D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D640u, 0x26AEC0u, 0x26AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEC8u;
label_26aec8:
    // 0x26aec8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26aec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x26aeccu;
}
