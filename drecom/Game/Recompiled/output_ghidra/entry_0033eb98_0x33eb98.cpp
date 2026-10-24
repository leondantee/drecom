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

// Function: entry_0033eb98
// Address: 0x33eb98 - 0x33ebcc
void entry_0033eb98_0x33eb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033eb98_0x33eb98");
#endif

    switch (ctx->pc) {
        case 0x33eba4u: goto label_33eba4;
        case 0x33ebbcu: goto label_33ebbc;
        default: break;
    }

    ctx->pc = 0x33eb98u;

    // 0x33eb98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eb9c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x33EB9Cu;
    SET_GPR_U32(ctx, 31, 0x33EBA4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x33EB9Cu, 0x33EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EBA4u;
label_33eba4:
    // 0x33eba4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x33eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eba8: 0x8c421360  lw          $v0, 0x1360($v0)
    ctx->pc = 0x33eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4960)));
    // 0x33ebac: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x33ebacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ebb0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ebb4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x33EBB4u;
    SET_GPR_U32(ctx, 31, 0x33EBBCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x33EBB4u, 0x33EBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EBBCu;
label_33ebbc:
    // 0x33ebbc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x33ebbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ebc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33ebc4: 0x3e00008  jr          $ra
    ctx->pc = 0x33EBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EBCCu;
}
