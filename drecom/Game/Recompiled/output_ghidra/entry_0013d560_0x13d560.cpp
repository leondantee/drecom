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

// Function: entry_0013d560
// Address: 0x13d560 - 0x13d57c
void entry_0013d560_0x13d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d560_0x13d560");
#endif

    ctx->pc = 0x13d560u;

    // 0x13d560: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x13d560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x13d564: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d568: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x13d568u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x13d56c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x13d56cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d570: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13d574: 0x3e00008  jr          $ra
    ctx->pc = 0x13D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D57Cu;
}
