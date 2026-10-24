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

// Function: entry_0017fa74
// Address: 0x17fa74 - 0x17faa0
void entry_0017fa74_0x17fa74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fa74_0x17fa74");
#endif

    switch (ctx->pc) {
        case 0x17fa80u: goto label_17fa80;
        default: break;
    }

    ctx->pc = 0x17fa74u;

    // 0x17fa74: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa78: 0xc05fea8  jal         func_17FAA0
    ctx->pc = 0x17FA78u;
    SET_GPR_U32(ctx, 31, 0x17FA80u);
    ctx->pc = 0x17FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FAA0u, 0x17FA78u, 0x17FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA80u;
label_17fa80:
    // 0x17fa80: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x17fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17fa84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa88: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x17fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x17fa8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17fa8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fa90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fa90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fa94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17fa94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17fa98: 0x3e00008  jr          $ra
    ctx->pc = 0x17FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FAA0u;
}
