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

// Function: entry_00282478
// Address: 0x282478 - 0x282498
void entry_00282478_0x282478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282478_0x282478");
#endif

    ctx->pc = 0x282478u;

    // 0x282478: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x282478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965732)));
    // 0x28247c: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x28247cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x282480: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x282480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x282484: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x282484u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x282488: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x282488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28248c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28248cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x282490: 0x3e00008  jr          $ra
    ctx->pc = 0x282490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282498u;
}
