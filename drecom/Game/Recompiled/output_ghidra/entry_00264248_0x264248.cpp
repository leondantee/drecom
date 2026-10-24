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

// Function: entry_00264248
// Address: 0x264248 - 0x264264
void entry_00264248_0x264248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264248_0x264248");
#endif

    ctx->pc = 0x264248u;

    // 0x264248: 0xac231b20  sw          $v1, 0x1B20($at)
    ctx->pc = 0x264248u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6944), GPR_U32(ctx, 3));
    // 0x26424c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x26424cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264258: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x264258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26425c: 0x3e00008  jr          $ra
    ctx->pc = 0x26425Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26425Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264264u;
}
