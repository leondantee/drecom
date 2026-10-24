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

// Function: entry_0018ee44
// Address: 0x18ee44 - 0x18ee64
void entry_0018ee44_0x18ee44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ee44_0x18ee44");
#endif

    ctx->pc = 0x18ee44u;

    // 0x18ee44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee48: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x18ee48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x18ee4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee50: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x18ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x18ee54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ee54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ee58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18ee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x18EE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EE64u;
}
