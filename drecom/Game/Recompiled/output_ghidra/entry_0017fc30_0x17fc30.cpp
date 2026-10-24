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

// Function: entry_0017fc30
// Address: 0x17fc30 - 0x17fc58
void entry_0017fc30_0x17fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fc30_0x17fc30");
#endif

    switch (ctx->pc) {
        case 0x17fc3cu: goto label_17fc3c;
        default: break;
    }

    ctx->pc = 0x17fc30u;

    // 0x17fc30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x17fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fc34: 0xc05ff18  jal         func_17FC60
    ctx->pc = 0x17FC34u;
    SET_GPR_U32(ctx, 31, 0x17FC3Cu);
    ctx->pc = 0x17FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC60u, 0x17FC34u, 0x17FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC3Cu;
label_17fc3c:
    // 0x17fc3c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x17fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17fc40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fc44: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x17fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x17fc48: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x17fc48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fc4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17fc4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17fc50: 0x3e00008  jr          $ra
    ctx->pc = 0x17FC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FC58u;
}
