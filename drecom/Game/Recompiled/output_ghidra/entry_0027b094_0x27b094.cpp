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

// Function: entry_0027b094
// Address: 0x27b094 - 0x27b0c4
void entry_0027b094_0x27b094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b094_0x27b094");
#endif

    switch (ctx->pc) {
        case 0x27b09cu: goto label_27b09c;
        default: break;
    }

    ctx->pc = 0x27b094u;

    // 0x27b094: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27B094u;
    SET_GPR_U32(ctx, 31, 0x27B09Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27B094u, 0x27B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B09Cu;
label_27b09c:
    // 0x27b09c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x27b09cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27b0a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27b0a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b0a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27b0a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b0a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27b0a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b0ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b0b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b0b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b0b8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27b0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x27B0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B0C4u;
}
